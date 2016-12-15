#ifndef _CLOCKS_HPP
#define _CLOCKS_HPP

#include "../fundamental-machines/basic_register.hpp"
#include "offset_register.hpp"

namespace clocks {
enum class CM_PER_L4LS_CLKSTCTRL {
  CLKTRCTRL,
  RESERVED0,
  CLKACTIVITY_L4LS_GCLK,
  RESERVED1,
  CLKACTIVITY_UART_GFCLK,
  CLKACTIVITY_CAN_CLK,
  RESERVED2,
  CLKACTIVITY_TIMER7_GCLK,
  CLKACTIVITY_TIMER2_GCLK,
  CLKACTIVITY_TIMER3_GCLK,
  CLKACTIVITY_TIMER4_GCLK,
  CLKACTIVITY_LCDC_GCLK,
  RESERVED3,
  CLKACTIVITY_GPIO_1_GDBCLK,
  CLKACTIVITY_GPIO_2_GDBCLK,
  CLKACTIVITY_GPIO_3_GDBCLK,
  RESERVED4,
  RESERVED5,
  CLKACTIVITY_12C_FCLK,
  CLKACTIVITY_SPI_GCLK,
  RESERVED6,
  CLKACTIVITY_TIMER5_GCLK,
  CLKACTIVITY_TIMER6_GCLK,
  RESERVED = -1,
  offset = 0,
  reset = 0xC0102
};
enum class CM_PER_L3S_CLKSTCTRL {
  CLKTRCTRL,
  RESERVED0,
  CLKACTIVITY_L3S_GCLK,
  RESERVED = -1,
  offset = 4,
  reset = 0xA
};
enum class CM_PER_L3_CLKSTCTRL {
  CLKTRCTRL,
  CLKACTIVITY_EMIF_GCLK,
  CLKACTIVITY_MMC_FCLK,
  RESERVED0,
  CLKACTIVITY_CPTS_RFT_GCLK,
  CLKACTIVITY_MCASP_GCLK,
  RESERVED = -1,
  offset = 0xC,
  reset = 0x12
};
enum class CM_PER_CPGMAC0_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  STBYST,
  RESERVED = -1,
  offset = 0x14,
  reset = 0x70000
};
enum class CM_PER_LCDC_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  STBYST,
  RESERVED = -1,
  offset = 0x18,
  reset = 0x70000
};
enum class CM_PER_USB0_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  STBYST,
  RESERVED = -1,
  offset = 0x1C,
  reset = 0x70000
};
enum class CM_PER_TPTC0_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  STBYST,
  RESERVED = -1,
  offset = 0x24,
  reset = 0x70000
};
enum class CM_PER_EMIF_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x28,
  reset = 0x30000
};
enum class CM_PER_OCMCRAM_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x2C,
  reset = 0x30000
};
enum class CM_PER_GPMCRAM_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x30,
  reset = 0x30002
};
enum class CM_PER_MCASP0_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x34,
  reset = 0x30000
};
enum class CM_PER_UART5_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x38,
  reset = 0x30000
};
enum class CM_PER_MMC0_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x3C,
  reset = 0x30000
};
enum class CM_PER_ELM_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x40,
  reset = 0x30000
};
enum class CM_PER_I2C2_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x44,
  reset = 0x30000
};
enum class CM_PER_I2C1_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x48,
  reset = 0x30000
};
enum class CM_PER_SPI0_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x4C,
  reset = 0x30000
};
enum class CM_PER_SPI1_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x50,
  reset = 0x30000
};
enum class CM_PER_L4LS_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x60,
  reset = 2
};
enum class CM_PER_MCASP1_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x68,
  reset = 0x30000
};
enum class CM_PER_UART1_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x6C,
  reset = 0x30000
};
enum class CM_PER_UART2_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x70,
  reset = 0x30000
};
enum class CM_PER_UART3_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x74,
  reset = 0x30000
};
enum class CM_PER_UART4_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x78,
  reset = 0x30000
};
enum class CM_PER_TIMER7_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x7C,
  reset = 0x30000
};
enum class CM_PER_TIMER2_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x80,
  reset = 0x30000
};
enum class CM_PER_TIMER3_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x84,
  reset = 0x30000
};
enum class CM_PER_TIMER4_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x88,
  reset = 0x30000
};
enum class CM_PER_GPIO1_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  OPTFCLKEN_GPIO_1_GDBCLK,
  RESERVED = -1,
  offset = 0xAC,
  reset = 0x30000
};
enum class CM_PER_GPIO2_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  OPTFCLKEN_GPIO_2_GDBCLK,
  RESERVED = -1,
  offset = 0xB0,
  reset = 0x30000
};
enum class CM_PER_GPIO3_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  OPTFCLKEN_GPIO_3_GDBCLK,
  RESERVED = -1,
  offset = 0xB4,
  reset = 0x30000
};
enum class CM_PER_TPCC_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xBC,
  reset = 0x30000
};
enum class CM_PER_DCAN0_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xC0,
  reset = 0x30000
};
enum class CM_PER_DCAN1_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xC4,
  reset = 0x30000
};
using CM_PER_L4LS_CLKSTCTRL_REG =
    offset_register<CM_PER_L4LS_CLKSTCTRL, 2, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3>;
using CM_PER_L3S_CLKSTCTRL_REG =
    offset_register<CM_PER_L3S_CLKSTCTRL, 2, 1, 1, 28>;
using CM_PER_L3_CLKSTCTRL_REG =
    offset_register<CM_PER_L3_CLKSTCTRL, 2, 1, 1, 1, 1, 1, 1, 24>;
using CM_PER_CPGMAC0_CLKCTRL_REG =
    offset_register<CM_PER_CPGMAC0_CLKCTRL, 2, 14, 2, 1, 13>;
using CM_PER_LCDC_CLKCTRL_REG =
    offset_register<CM_PER_LCDC_CLKCTRL, 2, 14, 2, 1, 13>;
using CM_PER_USB0_CLKCTRL_REG =
    offset_register<CM_PER_USB0_CLKCTRL, 2, 14, 2, 1, 13>;
using CM_PER_TPTC0_CLKCTRL_REG =
    offset_register<CM_PER_TPTC0_CLKCTRL, 2, 14, 2, 1, 13>;
using CM_PER_EMIF_CLKCTRL_REG =
    offset_register<CM_PER_EMIF_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_OCMCRAM_CLKCTRL_REG =
    offset_register<CM_PER_OCMCRAM_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_GPMCRAM_CLKCTRL_REG =
    offset_register<CM_PER_GPMCRAM_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_MCASP0_CLKCTRL_REG =
    offset_register<CM_PER_MCASP0_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_UART5_CLKCTRL_REG =
    offset_register<CM_PER_UART5_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_MMC0_CLKCTRL_REG =
    offset_register<CM_PER_MMC0_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_I2C2_CLKCTRL_REG =
    offset_register<CM_PER_I2C2_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_I2C1_CLKCTRL_REG =
    offset_register<CM_PER_I2C1_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_SPI0_CLKCTRL_REG =
    offset_register<CM_PER_SPI0_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_SPI1_CLKCTRL_REG =
    offset_register<CM_PER_SPI1_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_L4LS_CLKCTRL_REG =
    offset_register<CM_PER_L4LS_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_MCASP1_CLKCTRL_REG =
    offset_register<CM_PER_MCASP1_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_UART1_CLKCTRL_REG =
    offset_register<CM_PER_UART1_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_UART2_CLKCTRL_REG =
    offset_register<CM_PER_UART2_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_UART3_CLKCTRL_REG =
    offset_register<CM_PER_UART3_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_UART4_CLKCTRL_REG =
    offset_register<CM_PER_UART4_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_TIMER7_CLKCTRL_REG =
    offset_register<CM_PER_TIMER7_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_TIMER2_CLKCTRL_REG =
    offset_register<CM_PER_TIMER2_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_TIMER3_CLKCTRL_REG =
    offset_register<CM_PER_TIMER3_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_TIMER4_CLKCTRL_REG =
    offset_register<CM_PER_TIMER4_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_GPIO1_CLKCTRL_REG =
    offset_register<CM_PER_GPIO1_CLKCTRL, 2, 14, 2, 1, 13>;
using CM_PER_GPIO2_CLKCTRL_REG =
    offset_register<CM_PER_GPIO2_CLKCTRL, 2, 14, 2, 1, 13>;
using CM_PER_GPIO3_CLKCTRL_REG =
    offset_register<CM_PER_GPIO3_CLKCTRL, 2, 14, 2, 1, 13>;
using CM_PER_TPCC_CLKCTRL_REG =
    offset_register<CM_PER_TIMER4_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_DCAN0_CLKCTRL_REG =
    offset_register<CM_PER_DCAN0_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_DCAN1_CLKCTRL_REG =
    offset_register<CM_PER_DCAN1_CLKCTRL, 2, 14, 2, 14>;

constexpr std::uintptr_t CM_PER = 0x0'44E0'0000;
constexpr std::uintptr_t CM_WKUP = 0x0'44E0'0400;
constexpr std::uintptr_t CM_DPLL = 0x0'44E0'0500;
constexpr std::uintptr_t CM_MPU = 0x0'44E0'0600;
constexpr std::uintptr_t CM_DEVICE = 0x0'44E0'0700;
constexpr std::uintptr_t CM_RTC = 0x0'44E0'0800;
constexpr std::uintptr_t CM_GFX = 0x0'44E0'0900;
constexpr std::uintptr_t CM_CEFUSE = 0x0'44E0'0A00;
}

#endif