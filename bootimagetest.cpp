#include <cstdint>
#include <new>

constexpr std::uintptr_t BOOT_STACK_BASE =
    0x4030B800; // AM335x Rev O 26.1.3.2 p.4957

struct {
  // AM335x Rev O 26.1.7.5.5.1 p.4988-4989
  const unsigned char configuration_header_toc[0x3C + 4] = {
      0,    0,    0,    4,                                        // Start
      0,    0,    0,    0xC,                                      // Size
      0,    0,    0,    0,                                        // Reserved
      0,    0,    0,    0,                                        // Reserved
      0,    0,    0,    0,                                        // Reserved
      'C',  'H',  'S',  'E',  'T', 'T', 'I', 'N', 'G', 'S', 0, 0, // Filename
      0xFF, 0xFF, 0xFF, 0xFF, // Closing item
      0xFF, 0xFF, 0xFF, 0xFF, // Closing item
      0xFF, 0xFF, 0xFF, 0xFF, // Closing item
      0xFF, 0xFF, 0xFF, 0xFF, // Closing item
      0xFF, 0xFF, 0xFF, 0xFF, // Closing item
      0xFF, 0xFF, 0xFF, 0xFF, // Closing item
      0xFF, 0xFF, 0xFF, 0xFF, // Closing item
      0xFF, 0xFF, 0xFF, 0xFF, // Closing item
  };

  // AM335x Rev O 26.1.7.5.5.1 p.4989
  const unsigned char configuration_header_settings[0xE0] = {
      0xC0, 0xC0, 0xC0, 0xC1, // Section keys
      0,                      // Valid
      1,                      // Version
      0,                      // Reserved
  };

  // AM335x Rev O 26.1.9.2 p.5007
  struct {
    // Works out to 111,616, or 109Ki
    std::uint32_t size =
        BOOT_STACK_BASE - 0x402F0400;       // AM335x Rev O 26.1.3.2 p.4957
    std::uint32_t destination = 0x402F0400; // AM335x Rev O 26.1.3.2 p.4957
  } const gp_header;

} const volatile boot_header;

#include "control_module.hpp"
#include "watchdog.hpp"
#include "clocks.hpp"
#include "gpio.hpp"
#include "uart.hpp"

inline void set_stack_pointer() {
  asm volatile(R"(ldr sp, =%0)" ::"i"(BOOT_STACK_BASE));
}

template <typename Clkmode, typename Idlest, std::uintptr_t Address, typename F>
inline void clock_configure(F f) {
  // Set bypass mode
  Clkmode clkmode{Address};
  clkmode.template set<Clkmode::field_type::DPLL_EN>(4);
  Idlest reg{Address};
  while (!reg.template test<Idlest::field_type::ST_MN_BYPASS>(1))
    ;
  if (!reg.template test<Idlest::field_type::ST_DPLL_CLK>(
          0)) /*Do nothing for now*/
    ;

  f();

  // Set lock mode
  clkmode.template set<Clkmode::field_type::DPLL_EN>(7);
  while (!reg.template test<Idlest::field_type::ST_DPLL_CLK>(1))
    ;
  if (!reg.template test<Idlest::field_type::ST_MN_BYPASS>(
          0)) /*Do nothing for now*/
    ;
}

extern "C" void start() {
  set_stack_pointer();

  {
    using namespace watchdog;
    WDT_WSPR_REG watchdog{WDT1};
    WDT_WWPS_REG pending{WDT1};

    // AM335x Rev O 20.4.3.8 p.4498
    // AM335x Rev O 20.4.3.14.2 p.4502
    watchdog.set<WDT_WSPR::WSPR_VALUE>(0xAAAAu);
    while (!pending.test<WDT_WWPS::W_PEND_WSPR>(0))
      ;
    watchdog.set<WDT_WSPR::WSPR_VALUE>(0x5555u);
    while (!pending.test<WDT_WWPS::W_PEND_WSPR>(0))
      ;
  }

  {
    using namespace clocks;

    // Configure core PLL
    clock_configure<CM_CLKMODE_DPLL_CORE_REG, CM_IDLEST_DPLL_CORE_REG,
                    CM_WKUP>([]() {
      // OPP100

      // AM335x Rev O 8.1.6.7 p.1183
      CM_CLKSEL_DPLL_CORE_REG{CM_WKUP}
          .set<CM_CLKSEL_DPLL_CORE::DPLL_MULT, CM_CLKSEL_DPLL_CORE::DPLL_DIV>(
              2000, 24      // AM335x Rev O 8.1.6.7 p.1183
                        - 1 // AM335x Rev 0 8.1.12.2.27 p.1297
              );

      // AM335x Rev O 8.1.6.7 p.1183
      CM_DIV_M4_DPLL_CORE_REG{CM_WKUP}
          .set<CM_DIV_M4_DPLL_CORE::HSDIVIDER_CLKOUT1_DIV>(10);
      CM_DIV_M5_DPLL_CORE_REG{CM_WKUP}
          .set<CM_DIV_M5_DPLL_CORE::HSDIVIDER_CLKOUT2_DIV>(8);
      CM_DIV_M6_DPLL_CORE_REG{CM_WKUP}
          .set<CM_DIV_M6_DPLL_CORE::HSDIVIDER_CLKOUT3_DIV>(4);
    });

    // Configure peripheral PLL
    clock_configure<CM_CLKMODE_DPLL_PER_REG, CM_IDLEST_DPLL_PER_REG, CM_WKUP>(
        []() {
          // OPP100

          // AM335x Rev O 8.1.6.8 p.1185
          CM_CLKSEL_DPLL_PERIPH_REG{CM_WKUP}
              .set<CM_CLKSEL_DPLL_PERIPH::DPLL_MULT,
                   CM_CLKSEL_DPLL_PERIPH::DPLL_DIV>(960, 24 - 1);

          // AM335x Rev O 8.1.6.8 p.1185
          CM_DIV_M2_DPLL_PER_REG{CM_WKUP}
              .set<CM_DIV_M2_DPLL_PER::DPLL_CLKOUT_DIV>(5);
        });

    // Configure MPU PLL
    clock_configure<CM_CLKMODE_DPLL_MPU_REG, CM_IDLEST_DPLL_PER_REG,
                    CM_WKUP>([]() {
      //   auto package_type =
      //   control_module::EFUSE_SMA_REG{control_module::CONTROL_REGISTERS}
      //   .get<control_module::EFUSE_SMA::PACKAGE_TYPE>();
      auto max_frequency =
          control_module::EFUSE_SMA_REG{control_module::CONTROL_REGISTERS}
              .get<control_module::EFUSE_SMA::ARM_MPU_MAX_FREQ>();
      switch (max_frequency) {
      case 0x1FEF:
        max_frequency = 300;
        break;
      case 0x1FAF:
        max_frequency = 600;
        break;
      case 0x1F2F:
        max_frequency = 720;
        break;
      case 0x1E2F:
        max_frequency = 800;
        break;
      case 0x1C2F:
        max_frequency = 1000;
        break;
      case 0x1FDF:
        max_frequency = 300;
        break;
      case 0x1F9F:
        max_frequency = 600;
        break;
      };

      // OPP100
      CM_CLKSEL_DPLL_MPU_REG{CM_WKUP}
          .set<CM_CLKSEL_DPLL_MPU::DPLL_MULT, CM_CLKSEL_DPLL_MPU::DPLL_DIV>(
              max_frequency, // AM335x Rev O 9.2.1.49 p.1467
              // Get max freq from efuse_sma, figure out voltage requirements
              24      // AM335x Rev O 8.1.6.7 p.1183
                  - 1 // AM335x Rev 0 8.1.12.2.27 p.1297
              );

      CM_DIV_M2_DPLL_MPU_REG{CM_WKUP}.set<CM_DIV_M2_DPLL_MPU::DPLL_CLKOUT_DIV>(
          32  // Find where this comes from, currently taken from StarterWare
              // source
          - 1 // AM335x Rev 0 8.1.12.2.27 p.1297
          );
    });

    // Configure DDR PLL
    clock_configure<CM_CLKMODE_DPLL_DDR_REG, CM_IDLEST_DPLL_DDR_REG, CM_WKUP>(
        []() {
          CM_CLKSEL_DPLL_DDR_REG{CM_WKUP}
              .set<CM_CLKSEL_DPLL_DDR::DPLL_MULT, CM_CLKSEL_DPLL_DDR::DPLL_DIV>(
                  400, // BBB Rev 0.9 6.2.6 p.52 DDR3L runs at 400
                  24 - 1);

          CM_DIV_M2_DPLL_DDR_REG{CM_WKUP}
              .set<CM_DIV_M2_DPLL_DDR::DPLL_CLKOUT_DIV>(32 - 1);
        });
  }
}