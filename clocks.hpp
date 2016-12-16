#ifndef _CLOCKS_HPP
#define _CLOCKS_HPP

#include "../fundamental-machines/basic_register.hpp"
#include "offset_register.hpp"

namespace clocks {
// AM335x Rev O 8.1.12.1 p.1206-1266
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
enum class CM_PER_EPWMSS1_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xCC,
  reset = 0x30000
};
enum class CM_PER_EPWMSS0_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xD4,
  reset = 0x30000
};
enum class CM_PER_EPWMSS2_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xD8,
  reset = 0x30000
};
enum class CM_PER_L3_INSTR_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xDC,
  reset = 2
};
enum class CM_PER_L3_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xE0,
  reset = 2
};
enum class CM_PER_IEEE5000_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  STBYST,
  RESERVED = -1,
  offset = 0xE4,
  reset = 0x70002
};
enum class CM_PER_PRU_ICSS_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  STBYST,
  RESERVED = -1,
  offset = 0xE8,
  reset = 0x70000
};
enum class CM_PER_TIMER5_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xEC,
  reset = 0x30000
};
enum class CM_PER_TIMER6_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xF0,
  reset = 0x30000
};
enum class CM_PER_MMC1_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xF4,
  reset = 0x30000
};
enum class CM_PER_MMC2_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xF8,
  reset = 0x30000
};
enum class CM_PER_TPTC1_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  STBYST,
  RESERVED = -1,
  offset = 0xFC,
  reset = 0x70000
};
enum class CM_PER_TPTC2_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  STBYST,
  RESERVED = -1,
  offset = 0x100,
  reset = 0x70000
};
enum class CM_PER_SPINLOCK_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x10C,
  reset = 0x30000
};
enum class CM_PER_MAILBOX0_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x110,
  reset = 0x30000
};
enum class CM_PER_L4HS_CLKSTCTRL {
  CLKTRCTRL,
  RESERVED0,
  CLKACTIVITY_L4HS_GCLK,
  CLKACTIVITY_CPSW_250MHZ_GCLK,
  CLKACTIVITY_CPSW_50MHZ_GCLK,
  CLKACTIVITY_CPSW_5MHZ_GCLK,
  RESERVED = -1,
  offset = 0x11C,
  reset = 0x7A
};
enum class CM_PER_L4HS_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x120,
  reset = 2
};
enum class CM_PER_OCPWP_L3_CLKSTCTRL {
  CLKTRCTRL,
  RESERVED0,
  CLKACTIVITY_OCPWP_L3_GCLK,
  CLKACTIVITY_OCPWP_L4_GCLK,
  RESERVED = -1,
  offset = 0x12C,
  reset = 2
};
enum class CM_PER_OCPWP_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  STBYST,
  RESERVED = -1,
  offset = 0x130,
  reset = 0x70002
};
enum class CM_PER_PRU_ICSS_CLKSTCTRL {
  CLKTRCTRL,
  RESERVED0,
  CLKACTIVITY_PRU_ICSS_OCP_GCLK,
  CLKACTIVITY_PRU_ICSS_IEP_GCLK,
  CLKACTIVITY_PRU_ICSS_UART_GCLK,
  RESERVED = -1,
  offset = 0x140,
  reset = 2
};
enum class CM_PER_CPSW_CLKSTCTRL {
  CLKTRCTRL,
  RESERVED0,
  CLKACTIVITY_CPSW_125MHz_GCLK,
  RESERVED = -1,
  offset = 0x144,
  reset = 2
};
enum class CM_PER_LCDC_CLKSTCTRL {
  CLKTRCTRL,
  RESERVED0,
  CLKACTIVITY_LCDC_L3_OCP_GCLK,
  CLKACTIVITY_LCDC_L4_OCP_GCLK,
  RESERVED = -1,
  offset = 0x148,
  reset = 2
};
enum class CM_PER_CLKDIV32K_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x14C,
  reset = 0x30000
};
enum class CM_PER_CLK_24MHZ_CLKSTCTRL {
  CLKTRCTRL,
  RESERVED0,
  CLKACTIVITY_CLK_24MHZ_GCLK,
  RESERVED = -1,
  offset = 0x150,
  reset = 2
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
using CM_PER_EPWMSS1_CLKCTRL_REG =
    offset_register<CM_PER_EPWMSS1_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_EPWMSS0_CLKCTRL_REG =
    offset_register<CM_PER_EPWMSS0_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_EPWMSS2_CLKCTRL_REG =
    offset_register<CM_PER_EPWMSS2_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_L3_INSTR_CLKCTRL_REG =
    offset_register<CM_PER_L3_INSTR_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_L3_CLKCTRL_REG = offset_register<CM_PER_L3_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_IEEE5000_CLKCTRL_REG =
    offset_register<CM_PER_IEEE5000_CLKCTRL, 2, 14, 2, 1, 13>;
using CM_PER_PRU_ICSS_CLKCTRL_REG =
    offset_register<CM_PER_PRU_ICSS_CLKCTRL, 2, 14, 2, 1, 13>;
using CM_PER_TIMER5_CLKCTRL_REG =
    offset_register<CM_PER_TIMER5_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_TIMER6_CLKCTRL_REG =
    offset_register<CM_PER_TIMER6_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_MMC1_CLKCTRL_REG =
    offset_register<CM_PER_MMC1_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_MMC2_CLKCTRL_REG =
    offset_register<CM_PER_MMC2_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_TPTC1_CLKCTRL_REG =
    offset_register<CM_PER_TPTC1_CLKCTRL, 2, 14, 2, 1, 13>;
using CM_PER_TPTC2_CLKCTRL_REG =
    offset_register<CM_PER_TPTC2_CLKCTRL, 2, 14, 2, 1, 13>;
using CM_PER_SPINLOCK_CLKCTRL_REG =
    offset_register<CM_PER_SPINLOCK_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_MAILBOX0_CLKCTRL_REG =
    offset_register<CM_PER_MAILBOX0_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_L4HS_CLKSTCTRL_REG =
    offset_register<CM_PER_L4HS_CLKSTCTRL, 2, 1, 1, 1, 1, 1, 25>;
using CM_PER_L4HS_CLKCTRL_REG =
    offset_register<CM_PER_L4HS_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_OCPWP_L3_CLKSTCTRL_REG =
    offset_register<CM_PER_OCPWP_L3_CLKSTCTRL, 2, 2, 1, 1, 26>;
using CM_PER_OCPWP_CLKCTRL_REG =
    offset_register<CM_PER_OCPWP_CLKCTRL, 2, 14, 2, 1, 13>;
using CM_PER_PRU_ICSS_CLKSTCTRL_REG =
    offset_register<CM_PER_PRU_ICSS_CLKSTCTRL, 2, 2, 1, 1, 1, 25>;
using CM_PER_CPSW_CLKSTCTRL_REG =
    offset_register<CM_PER_CPSW_CLKSTCTRL, 2, 2, 1, 27>;
using CM_PER_LCDC_CLKSTCTRL_REG =
    offset_register<CM_PER_LCDC_CLKSTCTRL, 2, 2, 1, 1, 26>;
using CM_PER_CLKDIV32K_CLKCTRL_REG =
    offset_register<CM_PER_CLKDIV32K_CLKCTRL, 2, 14, 2, 14>;
using CM_PER_CLK_24MHZ_CLKSTCTRL_REG =
    offset_register<CM_PER_CLK_24MHZ_CLKSTCTRL, 2, 2, 1, 27>;

enum class CM_WKUP_CLKSTCTRL {
  CLKTRCTRL,
  CLKACTIVITY_L4_WKUP_GCLK,
  CLKACTIVITY_SR_SYSCLK,
  CLKACTIVITY_WDT1_GCLK,
  RESERVED0,
  CLKACTIVITY_GPIO0_GDBCLK,
  RESERVED1,
  CLKACTIVITY_TIMER0_GCLK,
  CLKACTIVITY_I2C0_GFCLK,
  CLKACTIVITY_UART0_GFCLK,
  CLKACTIVITY_TIMER1_GCLK,
  CLKACTIVITY_ADC_FCLK,
  RESERVED = -1,
  offset = 0,
  reset = 6
};
enum class CM_WKUP_CONTROL_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 4,
  reset = 0x30000
};
enum class CM_WKUP_GPIO0_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  OPTFCLKEN_GPIO0_GDBCLK,
  RESERVED = -1,
  offset = 8,
  reset = 0x30000
};
enum class CM_WKUP_L4WKUP_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xC,
  reset = 2
};
enum class CM_WKUP_TIMER0_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0x10,
  reset = 0x52580002
};
enum class CM_WKUP_DEBUGSS_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  STBYST,
  OPTFCLKEN_DBGSYSCLK,
  TRC_PMD_CLKSEL,
  STM_PMD_CLKSEL,
  TRC_PMD_CLKDIVSEL,
  STM_PMD_CLKDIVSEL,
  OPTCLK_DEBUG_CLKA,
  RESERVED = -1,
  offset = 0x14,
  reset = 0x52580002
};
enum class CM_L3_AON_CLKSTCTRL {
  CLKTRCTRL,
  CLKACTIVITY_DBGSYSCLK,
  CLKACTIVITY_L3_AON_GCLK,
  CLKACTIVITY_DEBUG_CLKA,
  RESERVED = -1,
  offset = 0x18,
  reset = 0x1A
};
enum class CM_AUTOIDLE_DPLL_MPU {
  AUTO_DPLL_MODE,
  RESERVED = -1,
  offset = 0x1C,
  reset = 0
};
enum class CM_IDLEST_DPLL_MPU {
  ST_DPLL_CLK,
  RESERVED0,
  ST_MN_BYPASS,
  RESERVED = -1,
  offset = 0x20,
  reset = 0
};
enum class CM_SSC_DELTAMSTEP_DPLL_MPU {
  DELTAMSTEP_FRACTION,
  DELTAMSTEP_INTEGER,
  RESERVED = -1,
  offset = 0x24,
  reset = 0
};
enum class CM_SSC_MODFREQDIV_DPLL_MPU {
  MODFREQDIV_MANTISSA,
  RESERVED0,
  MODFREQDIV_EXPONENT,
  RESERVED = -1,
  offset = 0x28,
  reset = 0
};
enum class CM_CLKSEL_DPLL_MPU {
  DPLL_DIV,
  RESERVED0,
  DPLL_MULT,
  RESERVED1,
  DPLL_BYP_CLKSEL,
  RESERVED = -1,
  offset = 0x2C,
  reset = 0
};
enum class CM_AUTOIDLE_DPLL_DDR {
  AUTO_DPLL_MODE,
  RESERVED = -1,
  offset = 0x30,
  reset = 0
};
enum class CM_IDLEST_DPLL_DDR {
  ST_DPLL_CLK,
  RESERVED0,
  ST_MN_BYPASS,
  RESERVED = -1,
  offset = 0x34,
  reset = 0
};
enum class CM_SSC_DELTAMSTEP_DPLL_DDR {
  DELTAMSTEP_FRACTION,
  DELTAMSTEP_INTEGER,
  RESERVED = -1,
  offset = 0x38,
  reset = 0
};
enum class CM_SSC_MODFREQDIV_DPLL_DDR {
  MODFREQDIV_MANTISSA,
  RESERVED0,
  MODFREQDIV_EXPONENT,
  RESERVED = -1,
  offset = 0x3C,
  reset = 0
};
enum class CM_CLKSEL_DPLL_DDR {
  DPLL_DIV,
  RESERVED0,
  DPLL_MULT,
  RESERVED1,
  DPLL_BYP_CLKSEL,
  RESERVED = -1,
  offset = 0x40,
  reset = 0
};
enum class CM_AUTOIDLE_DPLL_DISP {
  AUTO_DPLL_MODE,
  RESERVED = -1,
  offset = 0x44,
  reset = 0
};
enum class CM_IDLEST_DPLL_DISP {
  ST_DPLL_CLK,
  RESERVED0,
  ST_MN_BYPASS,
  RESERVED = -1,
  offset = 0x48,
  reset = 0
};
enum class CM_SSC_DELTAMSTEP_DPLL_DISP {
  DELTAMSTEP_FRACTION,
  DELTAMSTEP_INTEGER,
  RESERVED = -1,
  offset = 0x4C,
  reset = 0
};
enum class CM_SSC_MODFREQDIV_DPLL_DISP {
  MODFREQDIV_MANTISSA,
  RESERVED0,
  MODFREQDIV_EXPONENT,
  RESERVED = -1,
  offset = 0x50,
  reset = 0
};
enum class CM_CLKSEL_DPLL_DISP {
  DPLL_DIV,
  RESERVED0,
  DPLL_MULT,
  RESERVED1,
  DPLL_BYP_CLKSEL,
  RESERVED,
  offset = 0x54,
  reset = 0
};
enum class CM_AUTOIDLE_DPLL_CORE {
  AUTO_DPLL_MODE,
  RESERVED = -1,
  offset = 0x58,
  reset = 0
};
enum class CM_IDLEST_DPLL_CORE {
  ST_DPLL_CLK,
  RESERVED0,
  ST_MN_BYPASS,
  RESERVED = -1,
  offset = 0x5C,
  reset = 0
};
enum class CM_SSC_DELTAMSTEP_DPLL_CORE {
  DELTAMSTEP_FRACTION,
  DELTAMSTEP_INTEGER,
  RESERVED = -1,
  offset = 0x60,
  reset = 0
};
enum class CM_SSC_MODFREQDIV_DPLL_CORE {
  MODFREQDIV_MANTISSA,
  RESERVED0,
  MODFREQDIV_EXPONENT,
  RESERVED = -1,
  offset = 0x64,
  reset = 0
};
enum class CM_CLKSEL_DPLL_CORE {
  DPLL_DIV,
  RESERVED0,
  DPLL_MULT,
  RESERVED = -1,
  offset = 0x68,
  reset = 0
};
enum class CM_AUTOIDLE_DPLL_PER {
  AUTO_DPLL_MODE,
  RESERVED = -1,
  offset = 0x6C,
  reset = 0
};
enum class CM_IDLEST_DPLL_PER {
  ST_DPLL_CLK,
  RESERVED0,
  ST_MN_BYPASS,
  RESERVED = -1,
  offset = 0x70,
  reset = 0
};
enum class CM_SSC_DELTAMSTEP_DPLL_PER {
  DELTAMSTEP_FRACTION,
  DELTAMSTEP_INTEGER,
  RESERVED = -1,
  offset = 0x74,
  reset = 0
};
enum class CM_SSC_MODFREQDIV_DPLL_PER {
  MODFREQDIV_MANTISSA,
  RESERVED0,
  MODFREQDIV_EXPONENT,
  RESERVED = -1,
  offset = 0x78,
  reset = 0
};
enum class CM_CLKDCOLDO_DPLL_PER {
  RESERVED0,
  DPLL_CLKDCOLDO_GATE_CTRL,
  ST_DPLL_CLKDCOLDO,
  RESERVED1,
  DPLL_CLKDCOLDO_PWDN,
  RESERVED = -1,
  offset = 0x7C,
  reset = 0
};
enum class CM_DIV_M4_DPLL_CORE {
  HSDIVIDER_CLKOUT1_DIV,
  HSDIVIDER_CLKOUT1_DIVCHACK,
  RESERVED0,
  HSDIVIDER_CLKOUT1_GATE_CTRL,
  ST_HSDIVIDER_CLKOUT1,
  HSDIVIDER_CLKOUT1_PWDN,
  RESERVED = -1,
  offset = 0x80,
  reset = 4
};
enum class CM_DIV_M5_DPLL_CORE {
  HSDIVIDER_CLKOUT2_DIV,
  HSDIVIDER_CLKOUT2_DIVCHACK,
  RESERVED0,
  HSDIVIDER_CLKOUT2_GATE_CTRL,
  ST_HSDIVIDER_CLKOUT2,
  RESERVED1,
  HSDIVIDER_CLKOUT2_PWDN,
  RESERVED = -1,
  offset = 0x84,
  reset = 4
};
enum class CM_CLKMODE_DPLL_MPU {
  DPLL_EN,
  DPLL_RAMP_LEVEL,
  DPLL_RAMP_RATE,
  DPLL_DRIFTGUARD_EN,
  DPLL_RELOCK_RAMP_EN,
  DPLL_LPMODE_EN,
  DPLL_REGM4XEN,
  DPLL_SSC_EN,
  DPLL_SSC_ACK,
  DPLL_SSC_DOWNSPREAD,
  DPLL_SSC_TYPE,
  RESERVED = -1,
  offset = 0x88,
  reset = 0
};
enum class CM_CLKMODE_DPLL_PER {
  DPLL_EN,
  RESERVED0,
  DPLL_SSC_EN,
  DPLL_SSC_ACK,
  DPLL_SSC_DOWNSPREAD,
  DPLL_SSC_TYPE,
  RESERVED = -1,
  offset = 0x8C,
  reset = 0
};
enum class CM_CLKMODE_DPLL_CORE {
  DPLL_EN,
  DPLL_RAMP_LEVEL,
  DPLL_RAMP_RATE,
  DPLL_DRIFTGUARD_EN,
  DPLL_RELOCK_RAMP_EN,
  DPLL_LPMODE_EN,
  DPLL_REGM4XEN,
  DPLL_SSC_EN,
  DPLL_SSC_ACK,
  DPLL_SSC_DOWNSPREAD,
  DPLL_SSC_TYPE,
  RESERVED = -1,
  offset = 0x90,
  reset = 4
};
enum class CM_CLKMODE_DPLL_DDR {
  DPLL_EN,
  DPLL_RAMP_LEVEL,
  DPLL_RAMP_RATE,
  DPLL_DRIFTGUARD_EN,
  DPLL_RELOCK_RAMP_EN,
  DPLL_LPMODE_EN,
  DPLL_REGM4XEN,
  DPLL_SSC_EN,
  DPLL_SSC_ACK,
  DPLL_SSC_DOWNSPREAD,
  DPLL_SSC_TYPE,
  RESERVED = -1,
  offset = 0x94,
  reset = 4
};
enum class CM_CLKMODE_DPLL_DISP {
  DPLL_EN,
  DPLL_RAMP_LEVEL,
  DPLL_RAMP_RATE,
  DPLL_DRIFTGUARD_EN,
  DPLL_RELOCK_RAMP_EN,
  DPLL_LPMODE_EN,
  DPLL_REGM4XEN,
  DPLL_SSC_EN,
  DPLL_SSC_ACK,
  DPLL_SSC_DOWNSPREAD,
  DPLL_SSC_TYPE,
  RESERVED = -1,
  offset = 0x98,
  reset = 4
};
enum class CM_CLKSEL_DPLL_PERIPH {
  DPLL_DIV,
  DPLL_MULT,
  RESERVED0,
  DPLL_SD_DIV,
  RESERVED = -1,
  offset = 0x9C,
  reset = 0
};
enum class CM_DIV_M2_DPLL_DDR {
  DPLL_CLKOUT_DIV,
  DPLL_CLKOUT_DIVCHACK,
  RESERVED0,
  DPLL_CLKOUT_GATE_CTRL,
  ST_DPLL_CLKOUT,
  RESERVED = -1,
  offset = 0xA0,
  reset = 1
};
enum class CM_DIV_M2_DPLL_DISP {
  DPLL_CLKOUT_DIV,
  DPLL_CLKOUT_DIVCHACK,
  RESERVED0,
  DPLL_CLKOUT_GATE_CTRL,
  ST_DPLL_CLKOUT,
  RESERVED = -1,
  offset = 0xA4,
  reset = 1
};
enum class CM_DIV_M2_DPLL_MPU {
  DPLL_CLKOUT_DIV,
  DPLL_CLKOUT_DIVCHACK,
  RESERVED0,
  DPLL_CLKOUT_GATE_CTRL,
  ST_DPLL_CLKOUT,
  RESERVED = -1,
  offset = 0xA8,
  reset = 1
};
enum class CM_DIV_M2_DPLL_PER {
  DPLL_CLKOUT_DIV,
  DPLL_CLKOUT_DIVCHACK,
  DPLL_CLKOUT_GATE_CTRL,
  ST_DPLL_CLKOUT,
  RESERVED = -1,
  offset = 0xAC,
  reset = 1
};
enum class CM_WKUP_WKUP_M3_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  STBYST,
  RESERVED = -1,
  offset = 0xB0,
  reset = 2
};
enum class CM_WKUP_UART0_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xB4,
  reset = 0x30000
};
enum class CM_WKUP_I2C0_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xB8,
  reset = 0x30000
};
enum class CM_WKUP_ADC_TSC_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xBC,
  reset = 0x30000
};
enum class CM_WKUP_SMARTREFLEX0_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xC0,
  reset = 0x30000
};
enum class CM_WKUP_TIMER1_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xC4,
  reset = 0x30000
};
enum class CM_WKUP_SMARTREFLEX1_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xC8,
  reset = 0x30000
};
enum class CM_L4_WKUP_AON_CLKSTCTRL {
  CLKTRCTRL,
  CLKACTIVITY_L4_WKUP_AON_GCLK,
  RESERVED = -1,
  offset = 0xCC,
  reset = 6
};
enum class CM_WKUP_WDT1_CLKCTRL {
  MODULEMODE,
  RESERVED0,
  IDLEST,
  RESERVED = -1,
  offset = 0xD4,
  reset = 0x30002
};
enum class CM_DIV_M6_DPLL_CORE {
  HSDIVIDER_CLKOUT3_DIV,
  HSDIVIDER_CLKOUT3_DIVCHACK,
  RESERVED0,
  HSDIVIDER_CLKOUT3_GATE_CTRL,
  ST_HSDIVIDER_CLKOUT3,
  RESERVED1,
  HSDIVIDER_CLKOUT3_PWDN,
  RESERVED = -1,
  offset = 0xD8,
  reset = 4
};

using CM_WKUP_CLKSTCTRL_REG =
    offset_register<CM_WKUP_CLKSTCTRL, 2, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 15>;
using CM_WKUP_CONTROL_CLKCTRL_REG =
    offset_register<CM_WKUP_CONTROL_CLKCTRL, 2, 14, 2, 14>;
using CM_WKUP_GPIO0_CLKCTRL_REG =
    offset_register<CM_WKUP_GPIO0_CLKCTRL, 2, 14, 2, 1, 13>;
using CM_WKUP_L4WKUP_CLKCTRL_REG =
    offset_register<CM_WKUP_L4WKUP_CLKCTRL, 2, 14, 2, 14>;
using CM_WKUP_TIMER0_CLKCTRL_REG =
    offset_register<CM_WKUP_TIMER0_CLKCTRL, 2, 14, 2, 14>;
using CM_WKUP_DEBUGSS_CLKCTRL_REG =
    offset_register<CM_WKUP_DEBUGSS_CLKCTRL, 2, 14, 2, 1, 1, 2, 2, 3, 3, 1, 1>;
using CM_L3_AON_CLKSTCTRL_REG =
    offset_register<CM_L3_AON_CLKSTCTRL, 2, 1, 1, 1, 27>;
using CM_AUTOIDLE_DPLL_MPU_REG = offset_register<CM_AUTOIDLE_DPLL_MPU, 3, 29>;
using CM_IDLEST_DPLL_MPU_REG = offset_register<CM_IDLEST_DPLL_MPU, 1, 7, 1, 23>;
using CM_SSC_DELTAMSTEP_DPLL_MPU_REG =
    offset_register<CM_SSC_DELTAMSTEP_DPLL_MPU, 18, 2, 12>;
using CM_SSC_MODFREQDIV_DPLL_MPU_REG =
    offset_register<CM_SSC_MODFREQDIV_DPLL_MPU, 7, 1, 3, 21>;
using CM_CLKSEL_DPLL_MPU_REG =
    offset_register<CM_CLKSEL_DPLL_MPU, 7, 1, 11, 4, 1, 8>;
using CM_AUTOIDLE_DPLL_DDR_REG = offset_register<CM_AUTOIDLE_DPLL_DDR, 3, 29>;
using CM_IDLEST_DPLL_DDR_REG = offset_register<CM_IDLEST_DPLL_DDR, 1, 7, 1, 23>;
using CM_SSC_DELTAMSTEP_DPLL_DDR_REG =
    offset_register<CM_SSC_DELTAMSTEP_DPLL_DDR, 18, 2, 12>;
using CM_SSC_MODFREQDIV_DPLL_DDR_REG =
    offset_register<CM_SSC_MODFREQDIV_DPLL_DDR, 7, 1, 3, 21>;
using CM_CLKSEL_DPLL_DDR_REG =
    offset_register<CM_CLKSEL_DPLL_DDR, 7, 1, 11, 4, 1, 8>;
using CM_AUTOIDLE_DPLL_DISP_REG = offset_register<CM_AUTOIDLE_DPLL_DISP, 3, 29>;
using CM_IDLEST_DPLL_DISP_REG =
    offset_register<CM_IDLEST_DPLL_DISP, 1, 7, 1, 23>;
using CM_SSC_DELTAMSTEP_DPLL_DISP_REG =
    offset_register<CM_SSC_DELTAMSTEP_DPLL_DISP, 18, 2, 12>;
using CM_SSC_MODFREQDIV_DPLL_DISP_REG =
    offset_register<CM_SSC_MODFREQDIV_DPLL_DISP, 7, 1, 3, 21>;
using CM_CLKSEL_DPLL_DISP_REG =
    offset_register<CM_CLKSEL_DPLL_DISP, 7, 1, 11, 4, 1, 8>;
using CM_AUTOIDLE_DPLL_CORE_REG = offset_register<CM_AUTOIDLE_DPLL_CORE, 3, 29>;
using CM_IDLEST_DPLL_CORE_REG =
    offset_register<CM_IDLEST_DPLL_CORE, 1, 7, 1, 23>;
using CM_SSC_DELTAMSTEP_DPLL_CORE_REG =
    offset_register<CM_SSC_DELTAMSTEP_DPLL_CORE, 18, 2, 12>;
using CM_SSC_MODFREQDIV_DPLL_CORE_REG =
    offset_register<CM_SSC_MODFREQDIV_DPLL_CORE, 7, 1, 3, 21>;
using CM_CLKSEL_DPLL_CORE_REG =
    offset_register<CM_CLKSEL_DPLL_CORE, 7, 1, 11, 13>;
using CM_AUTOIDLE_DPLL_PER_REG = offset_register<CM_AUTOIDLE_DPLL_PER, 3, 29>;
using CM_IDLEST_DPLL_PER_REG = offset_register<CM_IDLEST_DPLL_PER, 1, 7, 1, 23>;
using CM_SSC_DELTAMSTEP_DPLL_PER_REG =
    offset_register<CM_SSC_DELTAMSTEP_DPLL_PER, 18, 2, 12>;
using CM_SSC_MODFREQDIV_DPLL_PER_REG =
    offset_register<CM_SSC_MODFREQDIV_DPLL_PER, 7, 1, 3, 21>;
using CM_CLKDCOLDO_DPLL_PER_REG =
    offset_register<CM_CLKDCOLDO_DPLL_PER, 8, 1, 1, 12, 1, 19>;
using CM_DIV_M4_DPLL_CORE_REG =
    offset_register<CM_DIV_M4_DPLL_CORE, 5, 1, 2, 1, 1, 2, 1, 19>;
using CM_DIV_M5_DPLL_CORE_REG =
    offset_register<CM_DIV_M5_DPLL_CORE, 5, 1, 2, 1, 1, 2, 1, 19>;
using CM_CLKMODE_DPLL_MPU_REG =
    offset_register<CM_CLKMODE_DPLL_MPU, 3, 2, 3, 1, 1, 1, 1, 1, 1, 1, 1, 16>;
using CM_CLKMODE_DPLL_PER_REG =
    offset_register<CM_CLKMODE_DPLL_PER, 3, 9, 1, 1, 1, 1, 16>;
using CM_CLKMODE_DPLL_CORE_REG =
    offset_register<CM_CLKMODE_DPLL_CORE, 3, 2, 3, 1, 1, 1, 1, 1, 1, 1, 1, 16>;
using CM_CLKMODE_DPLL_DDR_REG =
    offset_register<CM_CLKMODE_DPLL_DDR, 3, 2, 3, 1, 1, 1, 1, 1, 1, 1, 1, 16>;
using CM_CLKMODE_DPLL_DISP_REG =
    offset_register<CM_CLKMODE_DPLL_DISP, 3, 2, 3, 1, 1, 1, 1, 1, 1, 1, 1, 16>;
using CM_CLKSEL_DPLL_PERIPH_REG =
    offset_register<CM_CLKSEL_DPLL_PERIPH, 8, 12, 4, 8>;
using CM_DIV_M2_DPLL_DDR_REG =
    offset_register<CM_DIV_M2_DPLL_DDR, 5, 1, 2, 1, 1, 22>;
using CM_DIV_M2_DPLL_DISP_REG =
    offset_register<CM_DIV_M2_DPLL_DISP, 5, 1, 2, 1, 1, 22>;
using CM_DIV_M2_DPLL_MPU_REG =
    offset_register<CM_DIV_M2_DPLL_MPU, 5, 1, 2, 1, 1, 22>;
using CM_DIV_M2_DPLL_PER_REG =
    offset_register<CM_DIV_M2_DPLL_PER, 7, 1, 1, 1, 22>;
using CM_WKUP_WKUP_M3_CLKCTRL_REG =
    offset_register<CM_WKUP_WKUP_M3_CLKCTRL, 2, 16, 1, 13>;
using CM_WKUP_UART0_CLKCTRL_REG =
    offset_register<CM_WKUP_UART0_CLKCTRL, 2, 14, 2, 14>;
using CM_WKUP_I2C0_CLKCTRL_REG =
    offset_register<CM_WKUP_I2C0_CLKCTRL, 2, 14, 2, 14>;
using CM_WKUP_ADC_TSC_CLKCTRL_REG =
    offset_register<CM_WKUP_ADC_TSC_CLKCTRL, 2, 14, 2, 14>;
using CM_WKUP_SMARTREFLEX0_CLKCTRL_REG =
    offset_register<CM_WKUP_SMARTREFLEX0_CLKCTRL, 2, 14, 2, 14>;
using CM_WKUP_TIMER1_CLKCTRL_REG =
    offset_register<CM_WKUP_TIMER1_CLKCTRL, 2, 14, 2, 14>;
using CM_WKUP_SMARTREFLEX1_CLKCTRL_REG =
    offset_register<CM_WKUP_SMARTREFLEX1_CLKCTRL, 2, 14, 2, 14>;
using CM_L4_WKUP_AON_CLKSTCTRL_REG =
    offset_register<CM_L4_WKUP_AON_CLKSTCTRL, 2, 1, 29>;
using CM_WKUP_WDT1_CLKCTRL_REG =
    offset_register<CM_WKUP_WDT1_CLKCTRL, 2, 14, 2, 14>;
using CM_DIV_M6_DPLL_CORE_REG =
    offset_register<CM_DIV_M6_DPLL_CORE, 5, 1, 2, 1, 1, 2, 1, 19>;

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