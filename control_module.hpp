#ifndef _CONTROL_MODULE_HPP_
#define _CONTROL_MODULE_HPP_

#include "offset_register.hpp"

namespace control_module {
enum class control_revision { RESERVED = -1, offset = 0, reset = 0 };
enum class control_hwinfo { RESERVED = -1, offset = 4, reset = 0 };
enum class control_sysconfig { RESERVED = -1, offset = 0x10, reset = 0 };
enum class control_status { RESERVED = -1, offset = 0x40, reset = 0 };
enum class control_emif_sdram_config {
  RESERVED = -1,
  offset = 0x110,
  reset = 0
};
enum class core_sldo_ctrl { RESERVED = -1, offset = 0x428, reset = 0 };
enum class mpu_sldo_ctrl { RESERVED = -1, offset = 0x42C, reset = 0 };
enum class clk32kdivratio_ctrl { RESERVED = -1, offset = 0x444, reset = 0 };
enum class bandgap_ctrl { RESERVED = -1, offset = 0x448, reset = 0 };
enum class bandgap_trim { RESERVED = -1, offset = 0x44C, reset = 0 };
enum class pll_clkinpulow_ctrl { RESERVED = -1, offset = 0x458, reset = 0 };
enum class mosc_ctrl { RESERVED = -1, offset = 0x468, reset = 0 };
enum class deepsleep_ctrl { RESERVED = -1, offset = 0x470, reset = 0 };
enum class dpll_pwr_sw_status { RESERVED = -1, offset = 0x50C, reset = 0 };
enum class device_id { RESERVED = -1, offset = 0x600, reset = 0 };
enum class dev_feature { RESERVED = -1, offset = 0x604, reset = 0 };
enum class init_priority_0 { RESERVED = -1, offset = 0x608, reset = 0 };
enum class init_priority_1 { RESERVED = -1, offset = 0x60C, reset = 0 };
enum class tptc_cfg { RESERVED = -1, offset = 0x614, reset = 0 };
enum class usb_ctrl0 { RESERVED = -1, offset = 0x620, reset = 0 };
enum class usb_sts0 { RESERVED = -1, offset = 0x624, reset = 0 };
enum class usb_ctrl1 { RESERVED = -1, offset = 0x628, reset = 0 };
enum class usb_sts1 { RESERVED = -1, offset = 0x62C, reset = 0 };
enum class mac_id0_lo { RESERVED = -1, offset = 0x630, reset = 0 };
enum class mac_id0_hi { RESERVED = -1, offset = 0x634, reset = 0 };
enum class mac_id1_lo { RESERVED = -1, offset = 0x638, reset = 0 };
enum class mac_id1_hi { RESERVED = -1, offset = 0x63C, reset = 0 };
enum class dcan_raminit { RESERVED = -1, offset = 0x644, reset = 0 };
enum class usb_wkup_ctrl { RESERVED = -1, offset = 0x648, reset = 0 };
enum class gmii_sel { RESERVED = -1, offset = 0x650, reset = 0 };
enum class pwmss_ctrl { RESERVED = -1, offset = 0x664, reset = 0 };
enum class mreqprio_0 { RESERVED = -1, offset = 0x670, reset = 0 };
enum class mreqprio_1 { RESERVED = -1, offset = 0x674, reset = 0 };
enum class hw_event_sel_grp1 { RESERVED = -1, offset = 0x690, reset = 0 };
enum class hw_event_sel_grp2 { RESERVED = -1, offset = 0x694, reset = 0 };
enum class hw_event_sel_grp3 { RESERVED = -1, offset = 0x698, reset = 0 };
enum class hw_event_sel_grp4 { RESERVED = -1, offset = 0x69C, reset = 0 };
enum class smrt_ctrl { RESERVED = -1, offset = 0x6A0, reset = 0 };
enum class mpuss_hw_debug_sel { RESERVED = -1, offset = 0x6A4, reset = 0 };
enum class mpuss_hw_dbg_info { RESERVED = -1, offset = 0x6A8, reset = 0 };
enum class vdd_mpu_opp_050 { RESERVED = -1, offset = 0x770, reset = 0 };
enum class vdd_mpu_opp_100 { RESERVED = -1, offset = 0x774, reset = 0 };
enum class vdd_mpu_opp_120 { RESERVED = -1, offset = 0x778, reset = 0 };
enum class vdd_mpu_opp_turbo { RESERVED = -1, offset = 0x77C, reset = 0 };
enum class vdd_core_opp_050 { RESERVED = -1, offset = 0x7B8, reset = 0 };
enum class vdd_core_opp_100 { RESERVED = -1, offset = 0x7BC, reset = 0 };
enum class bb_scale { RESERVED = -1, offset = 0x7D0, reset = 0 };
enum class usb_vid_pid { RESERVED = -1, offset = 0x7F4, reset = 0 };
enum class efuse_sma { RESERVED = -1, offset = 0x7FC, reset = 0 };
enum class conf_conf_gpmc_ad0_gpmc {
  conf_gpmc_ad0_mmode,
  conf_gpmc_ad0_puden,
  conf_gpmc_ad0_putypesel,
  conf_gpmc_ad0_rxactive,
  conf_gpmc_ad0_slewctrl,
  RESERVED = -1,
  offset = 0x800,
  reset = 0
};
enum class conf_conf_gpmc_ad1_gpmc {
  conf_gpmc_ad1_mmode,
  conf_gpmc_ad1_puden,
  conf_gpmc_ad1_putypesel,
  conf_gpmc_ad1_rxactive,
  conf_gpmc_ad1_slewctrl,
  RESERVED = -1,
  offset = 0x804,
  reset = 0
};
enum class conf_conf_gpmc_ad2_gpmc {
  conf_gpmc_ad2_mmode,
  conf_gpmc_ad2_puden,
  conf_gpmc_ad2_putypesel,
  conf_gpmc_ad2_rxactive,
  conf_gpmc_ad2_slewctrl,
  RESERVED = -1,
  offset = 0x808,
  reset = 0
};
enum class conf_conf_gpmc_ad3_gpmc {
  conf_gpmc_ad3_mmode,
  conf_gpmc_ad3_puden,
  conf_gpmc_ad3_putypesel,
  conf_gpmc_ad3_rxactive,
  conf_gpmc_ad3_slewctrl,
  RESERVED = -1,
  offset = 0x80C,
  reset = 0
};
enum class conf_conf_gpmc_ad4_gpmc {
  conf_gpmc_ad4_mmode,
  conf_gpmc_ad4_puden,
  conf_gpmc_ad4_putypesel,
  conf_gpmc_ad4_rxactive,
  conf_gpmc_ad4_slewctrl,
  RESERVED = -1,
  offset = 0x810,
  reset = 0
};
enum class conf_conf_gpmc_ad5_gpmc {
  conf_gpmc_ad5_mmode,
  conf_gpmc_ad5_puden,
  conf_gpmc_ad5_putypesel,
  conf_gpmc_ad5_rxactive,
  conf_gpmc_ad5_slewctrl,
  RESERVED = -1,
  offset = 0x814,
  reset = 0
};
enum class conf_conf_gpmc_ad6_gpmc {
  conf_gpmc_ad6_mmode,
  conf_gpmc_ad6_puden,
  conf_gpmc_ad6_putypesel,
  conf_gpmc_ad6_rxactive,
  conf_gpmc_ad6_slewctrl,
  RESERVED = -1,
  offset = 0x818,
  reset = 0
};
enum class conf_conf_gpmc_ad7_gpmc {
  conf_gpmc_ad7_mmode,
  conf_gpmc_ad7_puden,
  conf_gpmc_ad7_putypesel,
  conf_gpmc_ad7_rxactive,
  conf_gpmc_ad7_slewctrl,
  RESERVED = -1,
  offset = 0x81C,
  reset = 0
};
enum class conf_conf_gpmc_ad8_gpmc {
  conf_gpmc_ad8_mmode,
  conf_gpmc_ad8_puden,
  conf_gpmc_ad8_putypesel,
  conf_gpmc_ad8_rxactive,
  conf_gpmc_ad8_slewctrl,
  RESERVED = -1,
  offset = 0x820,
  reset = 0
};
enum class conf_conf_gpmc_ad9_gpmc {
  conf_gpmc_ad9_mmode,
  conf_gpmc_ad9_puden,
  conf_gpmc_ad9_putypesel,
  conf_gpmc_ad9_rxactive,
  conf_gpmc_ad9_slewctrl,
  RESERVED = -1,
  offset = 0x824,
  reset = 0
};
enum class conf_conf_gpmc_ad10_gpmc {
  conf_gpmc_ad10_mmode,
  conf_gpmc_ad10_puden,
  conf_gpmc_ad10_putypesel,
  conf_gpmc_ad10_rxactive,
  conf_gpmc_ad10_slewctrl,
  RESERVED = -1,
  offset = 0x828,
  reset = 0
};
enum class conf_conf_gpmc_ad11_gpmc {
  conf_gpmc_ad11_mmode,
  conf_gpmc_ad11_puden,
  conf_gpmc_ad11_putypesel,
  conf_gpmc_ad11_rxactive,
  conf_gpmc_ad11_slewctrl,
  RESERVED = -1,
  offset = 0x82C,
  reset = 0
};
enum class conf_conf_gpmc_ad12_gpmc {
  conf_gpmc_ad12_mmode,
  conf_gpmc_ad12_puden,
  conf_gpmc_ad12_putypesel,
  conf_gpmc_ad12_rxactive,
  conf_gpmc_ad12_slewctrl,
  RESERVED = -1,
  offset = 0x830,
  reset = 0
};
enum class conf_conf_gpmc_ad13_gpmc {
  conf_gpmc_ad13_mmode,
  conf_gpmc_ad13_puden,
  conf_gpmc_ad13_putypesel,
  conf_gpmc_ad13_rxactive,
  conf_gpmc_ad13_slewctrl,
  RESERVED = -1,
  offset = 0x834,
  reset = 0
};
enum class conf_conf_gpmc_ad14_gpmc {
  conf_gpmc_ad14_mmode,
  conf_gpmc_ad14_puden,
  conf_gpmc_ad14_putypesel,
  conf_gpmc_ad14_rxactive,
  conf_gpmc_ad14_slewctrl,
  RESERVED = -1,
  offset = 0x838,
  reset = 0
};
enum class conf_conf_gpmc_ad15_gpmc {
  conf_gpmc_ad15_mmode,
  conf_gpmc_ad15_puden,
  conf_gpmc_ad15_putypesel,
  conf_gpmc_ad15_rxactive,
  conf_gpmc_ad15_slewctrl,
  RESERVED = -1,
  offset = 0x83C,
  reset = 0
};
enum class conf_conf_gpmc_a0_gpmc {
  conf_gpmc_a0_mmode,
  conf_gpmc_a0_puden,
  conf_gpmc_a0_putypesel,
  conf_gpmc_a0_rxactive,
  conf_gpmc_a0_slewctrl,
  RESERVED = -1,
  offset = 0x840,
  reset = 0
};
enum class conf_conf_gpmc_a1_gpmc {
  conf_gpmc_a1_mmode,
  conf_gpmc_a1_puden,
  conf_gpmc_a1_putypesel,
  conf_gpmc_a1_rxactive,
  conf_gpmc_a1_slewctrl,
  RESERVED = -1,
  offset = 0x844,
  reset = 0
};
enum class conf_conf_gpmc_a2_gpmc {
  conf_gpmc_a2_mmode,
  conf_gpmc_a2_puden,
  conf_gpmc_a2_putypesel,
  conf_gpmc_a2_rxactive,
  conf_gpmc_a2_slewctrl,
  RESERVED = -1,
  offset = 0x848,
  reset = 0
};
enum class conf_conf_gpmc_a3_gpmc {
  conf_gpmc_a3_mmode,
  conf_gpmc_a3_puden,
  conf_gpmc_a3_putypesel,
  conf_gpmc_a3_rxactive,
  conf_gpmc_a3_slewctrl,
  RESERVED = -1,
  offset = 0x84C,
  reset = 0
};
enum class conf_conf_gpmc_a4_gpmc {
  conf_gpmc_a4_mmode,
  conf_gpmc_a4_puden,
  conf_gpmc_a4_putypesel,
  conf_gpmc_a4_rxactive,
  conf_gpmc_a4_slewctrl,
  RESERVED = -1,
  offset = 0x850,
  reset = 0
};
enum class conf_conf_gpmc_a5_gpmc {
  conf_gpmc_a5_mmode,
  conf_gpmc_a5_puden,
  conf_gpmc_a5_putypesel,
  conf_gpmc_a5_rxactive,
  conf_gpmc_a5_slewctrl,
  RESERVED = -1,
  offset = 0x854,
  reset = 0
};
enum class conf_conf_gpmc_a6_gpmc {
  conf_gpmc_a6_mmode,
  conf_gpmc_a6_puden,
  conf_gpmc_a6_putypesel,
  conf_gpmc_a6_rxactive,
  conf_gpmc_a6_slewctrl,
  RESERVED = -1,
  offset = 0x858,
  reset = 0
};
enum class conf_conf_gpmc_a7_gpmc {
  conf_gpmc_a7_mmode,
  conf_gpmc_a7_puden,
  conf_gpmc_a7_putypesel,
  conf_gpmc_a7_rxactive,
  conf_gpmc_a7_slewctrl,
  RESERVED = -1,
  offset = 0x85C,
  reset = 0
};
enum class conf_conf_gpmc_a8_gpmc {
  conf_gpmc_a8_mmode,
  conf_gpmc_a8_puden,
  conf_gpmc_a8_putypesel,
  conf_gpmc_a8_rxactive,
  conf_gpmc_a8_slewctrl,
  RESERVED = -1,
  offset = 0x860,
  reset = 0
};
enum class conf_conf_gpmc_a9_gpmc {
  conf_gpmc_a9_mmode,
  conf_gpmc_a9_puden,
  conf_gpmc_a9_putypesel,
  conf_gpmc_a9_rxactive,
  conf_gpmc_a9_slewctrl,
  RESERVED = -1,
  offset = 0x864,
  reset = 0
};
enum class conf_conf_gpmc_a10_gpmc {
  conf_gpmc_a10_mmode,
  conf_gpmc_a10_puden,
  conf_gpmc_a10_putypesel,
  conf_gpmc_a10_rxactive,
  conf_gpmc_a10_slewctrl,
  RESERVED = -1,
  offset = 0x868,
  reset = 0
};
enum class conf_conf_gpmc_a11_gpmc {
  conf_gpmc_a11_mmode,
  conf_gpmc_a11_puden,
  conf_gpmc_a11_putypesel,
  conf_gpmc_a11_rxactive,
  conf_gpmc_a11_slewctrl,
  RESERVED = -1,
  offset = 0x86C,
  reset = 0
};
enum class conf_conf_gpmc_wait0_gpmc {
  conf_gpmc_wait0_mmode,
  conf_gpmc_wait0_puden,
  conf_gpmc_wait0_putypesel,
  conf_gpmc_wait0_rxactive,
  conf_gpmc_wait0_slewctrl,
  RESERVED = -1,
  offset = 0x870,
  reset = 0
};
enum class conf_conf_gpmc_wpn_gpmc {
  conf_gpmc_wpn_mmode,
  conf_gpmc_wpn_puden,
  conf_gpmc_wpn_putypesel,
  conf_gpmc_wpn_rxactive,
  conf_gpmc_wpn_slewctrl,
  RESERVED = -1,
  offset = 0x874,
  reset = 0
};
enum class conf_conf_gpmc_ben1_gpmc {
  conf_gpmc_ben1_mmode,
  conf_gpmc_ben1_puden,
  conf_gpmc_ben1_putypesel,
  conf_gpmc_ben1_rxactive,
  conf_gpmc_ben1_slewctrl,
  RESERVED = -1,
  offset = 0x878,
  reset = 0
};
enum class conf_conf_gpmc_csn0_gpmc {
  conf_gpmc_csn0_mmode,
  conf_gpmc_csn0_puden,
  conf_gpmc_csn0_putypesel,
  conf_gpmc_csn0_rxactive,
  conf_gpmc_csn0_slewctrl,
  RESERVED = -1,
  offset = 0x87C,
  reset = 0
};
enum class conf_conf_gpmc_csn1_gpmc {
  conf_gpmc_csn1_mmode,
  conf_gpmc_csn1_puden,
  conf_gpmc_csn1_putypesel,
  conf_gpmc_csn1_rxactive,
  conf_gpmc_csn1_slewctrl,
  RESERVED = -1,
  offset = 0x880,
  reset = 0
};
enum class conf_conf_gpmc_csn2_gpmc {
  conf_gpmc_csn2_mmode,
  conf_gpmc_csn2_puden,
  conf_gpmc_csn2_putypesel,
  conf_gpmc_csn2_rxactive,
  conf_gpmc_csn2_slewctrl,
  RESERVED = -1,
  offset = 0x884,
  reset = 0
};
enum class conf_conf_gpmc_csn3_gpmc {
  conf_gpmc_csn3_mmode,
  conf_gpmc_csn3_puden,
  conf_gpmc_csn3_putypesel,
  conf_gpmc_csn3_rxactive,
  conf_gpmc_csn3_slewctrl,
  RESERVED = -1,
  offset = 0x888,
  reset = 0
};
enum class conf_conf_gpmc_clk_gpmc {
  conf_gpmc_clk_mmode,
  conf_gpmc_clk_puden,
  conf_gpmc_clk_putypesel,
  conf_gpmc_clk_rxactive,
  conf_gpmc_clk_slewctrl,
  RESERVED = -1,
  offset = 0x88C,
  reset = 0
};
enum class conf_conf_gpmc_advn_ale_gpmc {
  conf_gpmc_advn_ale_mmode,
  conf_gpmc_advn_ale_puden,
  conf_gpmc_advn_ale_putypesel,
  conf_gpmc_advn_ale_rxactive,
  conf_gpmc_advn_ale_slewctrl,
  RESERVED = -1,
  offset = 0x890,
  reset = 0
};
enum class conf_conf_gpmc_oen_ren_gpmc {
  conf_gpmc_oen_ren_mmode,
  conf_gpmc_oen_ren_puden,
  conf_gpmc_oen_ren_putypesel,
  conf_gpmc_oen_ren_rxactive,
  conf_gpmc_oen_ren_slewctrl,
  RESERVED = -1,
  offset = 0x894,
  reset = 0
};
enum class conf_conf_gpmc_wen_gpmc {
  conf_gpmc_wen_mmode,
  conf_gpmc_wen_puden,
  conf_gpmc_wen_putypesel,
  conf_gpmc_wen_rxactive,
  conf_gpmc_wen_slewctrl,
  RESERVED = -1,
  offset = 0x898,
  reset = 0
};
enum class conf_conf_gpmc_ben0_cle_gpmc {
  conf_gpmc_ben0_cle_mmode,
  conf_gpmc_ben0_cle_puden,
  conf_gpmc_ben0_cle_putypesel,
  conf_gpmc_ben0_cle_rxactive,
  conf_gpmc_ben0_cle_slewctrl,
  RESERVED = -1,
  offset = 0x89C,
  reset = 0
};
enum class conf_conf_lcd_data0_lcd {
  conf_lcd_data0_mmode,
  conf_lcd_data0_puden,
  conf_lcd_data0_putypesel,
  conf_lcd_data0_rxactive,
  conf_lcd_data0_slewctrl,
  RESERVED = -1,
  offset = 0x8A0,
  reset = 0
};
enum class conf_conf_lcd_data1_lcd {
  conf_lcd_data1_mmode,
  conf_lcd_data1_puden,
  conf_lcd_data1_putypesel,
  conf_lcd_data1_rxactive,
  conf_lcd_data1_slewctrl,
  RESERVED = -1,
  offset = 0x8A4,
  reset = 0
};
enum class conf_conf_lcd_data2_lcd {
  conf_lcd_data2_mmode,
  conf_lcd_data2_puden,
  conf_lcd_data2_putypesel,
  conf_lcd_data2_rxactive,
  conf_lcd_data2_slewctrl,
  RESERVED = -1,
  offset = 0x8A8,
  reset = 0
};
enum class conf_conf_lcd_data3_lcd {
  conf_lcd_data3_mmode,
  conf_lcd_data3_puden,
  conf_lcd_data3_putypesel,
  conf_lcd_data3_rxactive,
  conf_lcd_data3_slewctrl,
  RESERVED = -1,
  offset = 0x8AC,
  reset = 0
};
enum class conf_conf_lcd_data4_lcd {
  conf_lcd_data4_mmode,
  conf_lcd_data4_puden,
  conf_lcd_data4_putypesel,
  conf_lcd_data4_rxactive,
  conf_lcd_data4_slewctrl,
  RESERVED = -1,
  offset = 0x8B0,
  reset = 0
};
enum class conf_conf_lcd_data5_lcd {
  conf_lcd_data5_mmode,
  conf_lcd_data5_puden,
  conf_lcd_data5_putypesel,
  conf_lcd_data5_rxactive,
  conf_lcd_data5_slewctrl,
  RESERVED = -1,
  offset = 0x8B4,
  reset = 0
};
enum class conf_conf_lcd_data6_lcd {
  conf_lcd_data6_mmode,
  conf_lcd_data6_puden,
  conf_lcd_data6_putypesel,
  conf_lcd_data6_rxactive,
  conf_lcd_data6_slewctrl,
  RESERVED = -1,
  offset = 0x8B8,
  reset = 0
};
enum class conf_conf_lcd_data7_lcd {
  conf_lcd_data7_mmode,
  conf_lcd_data7_puden,
  conf_lcd_data7_putypesel,
  conf_lcd_data7_rxactive,
  conf_lcd_data7_slewctrl,
  RESERVED = -1,
  offset = 0x8BC,
  reset = 0
};
enum class conf_conf_lcd_data8_lcd {
  conf_lcd_data8_mmode,
  conf_lcd_data8_puden,
  conf_lcd_data8_putypesel,
  conf_lcd_data8_rxactive,
  conf_lcd_data8_slewctrl,
  RESERVED = -1,
  offset = 0x8C0,
  reset = 0
};
enum class conf_conf_lcd_data9_lcd {
  conf_lcd_data9_mmode,
  conf_lcd_data9_puden,
  conf_lcd_data9_putypesel,
  conf_lcd_data9_rxactive,
  conf_lcd_data9_slewctrl,
  RESERVED = -1,
  offset = 0x8C4,
  reset = 0
};
enum class conf_conf_lcd_data10_lcd {
  conf_lcd_data10_mmode,
  conf_lcd_data10_puden,
  conf_lcd_data10_putypesel,
  conf_lcd_data10_rxactive,
  conf_lcd_data10_slewctrl,
  RESERVED = -1,
  offset = 0x8C8,
  reset = 0
};
enum class conf_conf_lcd_data11_lcd {
  conf_lcd_data11_mmode,
  conf_lcd_data11_puden,
  conf_lcd_data11_putypesel,
  conf_lcd_data11_rxactive,
  conf_lcd_data11_slewctrl,
  RESERVED = -1,
  offset = 0x8CC,
  reset = 0
};
enum class conf_conf_lcd_data12_lcd {
  conf_lcd_data12_mmode,
  conf_lcd_data12_puden,
  conf_lcd_data12_putypesel,
  conf_lcd_data12_rxactive,
  conf_lcd_data12_slewctrl,
  RESERVED = -1,
  offset = 0x8D0,
  reset = 0
};
enum class conf_conf_lcd_data13_lcd {
  conf_lcd_data13_mmode,
  conf_lcd_data13_puden,
  conf_lcd_data13_putypesel,
  conf_lcd_data13_rxactive,
  conf_lcd_data13_slewctrl,
  RESERVED = -1,
  offset = 0x8D4,
  reset = 0
};
enum class conf_conf_lcd_data14_lcd {
  conf_lcd_data14_mmode,
  conf_lcd_data14_puden,
  conf_lcd_data14_putypesel,
  conf_lcd_data14_rxactive,
  conf_lcd_data14_slewctrl,
  RESERVED = -1,
  offset = 0x8D8,
  reset = 0
};
enum class conf_conf_lcd_data15_lcd {
  conf_lcd_data15_mmode,
  conf_lcd_data15_puden,
  conf_lcd_data15_putypesel,
  conf_lcd_data15_rxactive,
  conf_lcd_data15_slewctrl,
  RESERVED = -1,
  offset = 0x8DC,
  reset = 0
};
enum class conf_conf_lcd_vsync_lcd {
  conf_lcd_vsync_mmode,
  conf_lcd_vsync_puden,
  conf_lcd_vsync_putypesel,
  conf_lcd_vsync_rxactive,
  conf_lcd_vsync_slewctrl,
  RESERVED = -1,
  offset = 0x8E0,
  reset = 0
};
enum class conf_conf_lcd_hsync_lcd {
  conf_lcd_hsync_mmode,
  conf_lcd_hsync_puden,
  conf_lcd_hsync_putypesel,
  conf_lcd_hsync_rxactive,
  conf_lcd_hsync_slewctrl,
  RESERVED = -1,
  offset = 0x8E4,
  reset = 0
};
enum class conf_conf_lcd_pclk_lcd {
  conf_lcd_pclk_mmode,
  conf_lcd_pclk_puden,
  conf_lcd_pclk_putypesel,
  conf_lcd_pclk_rxactive,
  conf_lcd_pclk_slewctrl,
  RESERVED = -1,
  offset = 0x8E8,
  reset = 0
};
enum class conf_conf_lcd_ac_bias_en_lcd {
  conf_lcd_ac_bias_en_mmode,
  conf_lcd_ac_bias_en_puden,
  conf_lcd_ac_bias_en_putypesel,
  conf_lcd_ac_bias_en_rxactive,
  conf_lcd_ac_bias_en_slewctrl,
  RESERVED = -1,
  offset = 0x8EC,
  reset = 0
};
enum class conf_conf_mmc0_dat3_mmc0 {
  conf_mmc0_dat3_mmode,
  conf_mmc0_dat3_puden,
  conf_mmc0_dat3_putypesel,
  conf_mmc0_dat3_rxactive,
  conf_mmc0_dat3_slewctrl,
  RESERVED = -1,
  offset = 0x8F0,
  reset = 0
};
enum class conf_conf_mmc0_dat2_mmc0 {
  conf_mmc0_dat2_mmode,
  conf_mmc0_dat2_puden,
  conf_mmc0_dat2_putypesel,
  conf_mmc0_dat2_rxactive,
  conf_mmc0_dat2_slewctrl,
  RESERVED = -1,
  offset = 0x8F4,
  reset = 0
};
enum class conf_conf_mmc0_dat1_mmc0 {
  conf_mmc0_dat1_mmode,
  conf_mmc0_dat1_puden,
  conf_mmc0_dat1_putypesel,
  conf_mmc0_dat1_rxactive,
  conf_mmc0_dat1_slewctrl,
  RESERVED = -1,
  offset = 0x8F8,
  reset = 0
};
enum class conf_conf_mmc0_dat0_mmc0 {
  conf_mmc0_dat0_mmode,
  conf_mmc0_dat0_puden,
  conf_mmc0_dat0_putypesel,
  conf_mmc0_dat0_rxactive,
  conf_mmc0_dat0_slewctrl,
  RESERVED = -1,
  offset = 0x8FC,
  reset = 0
};
enum class conf_conf_mmc0_clk_mmc0 {
  conf_mmc0_clk_mmode,
  conf_mmc0_clk_puden,
  conf_mmc0_clk_putypesel,
  conf_mmc0_clk_rxactive,
  conf_mmc0_clk_slewctrl,
  RESERVED = -1,
  offset = 0x900,
  reset = 0
};
enum class conf_conf_mmc0_cmd_mmc0 {
  conf_mmc0_cmd_mmode,
  conf_mmc0_cmd_puden,
  conf_mmc0_cmd_putypesel,
  conf_mmc0_cmd_rxactive,
  conf_mmc0_cmd_slewctrl,
  RESERVED = -1,
  offset = 0x904,
  reset = 0
};
enum class conf_conf_mii1_col_mii1 {
  conf_mii1_col_mmode,
  conf_mii1_col_puden,
  conf_mii1_col_putypesel,
  conf_mii1_col_rxactive,
  conf_mii1_col_slewctrl,
  RESERVED = -1,
  offset = 0x908,
  reset = 0
};
enum class conf_conf_mii1_crs_mii1 {
  conf_mii1_crs_mmode,
  conf_mii1_crs_puden,
  conf_mii1_crs_putypesel,
  conf_mii1_crs_rxactive,
  conf_mii1_crs_slewctrl,
  RESERVED = -1,
  offset = 0x90C,
  reset = 0
};
enum class conf_conf_mii1_rx_er_mii1 {
  conf_mii1_rx_er_mmode,
  conf_mii1_rx_er_puden,
  conf_mii1_rx_er_putypesel,
  conf_mii1_rx_er_rxactive,
  conf_mii1_rx_er_slewctrl,
  RESERVED = -1,
  offset = 0x910,
  reset = 0
};
enum class conf_conf_mii1_tx_en_mii1 {
  conf_mii1_tx_en_mmode,
  conf_mii1_tx_en_puden,
  conf_mii1_tx_en_putypesel,
  conf_mii1_tx_en_rxactive,
  conf_mii1_tx_en_slewctrl,
  RESERVED = -1,
  offset = 0x914,
  reset = 0
};
enum class conf_conf_mii1_rx_dv_mii1 {
  conf_mii1_rx_dv_mmode,
  conf_mii1_rx_dv_puden,
  conf_mii1_rx_dv_putypesel,
  conf_mii1_rx_dv_rxactive,
  conf_mii1_rx_dv_slewctrl,
  RESERVED = -1,
  offset = 0x918,
  reset = 0
};
enum class conf_conf_mii1_txd3_mii1 {
  conf_mii1_txd3_mmode,
  conf_mii1_txd3_puden,
  conf_mii1_txd3_putypesel,
  conf_mii1_txd3_rxactive,
  conf_mii1_txd3_slewctrl,
  RESERVED = -1,
  offset = 0x91C,
  reset = 0
};
enum class conf_conf_mii1_txd2_mii1 {
  conf_mii1_txd2_mmode,
  conf_mii1_txd2_puden,
  conf_mii1_txd2_putypesel,
  conf_mii1_txd2_rxactive,
  conf_mii1_txd2_slewctrl,
  RESERVED = -1,
  offset = 0x920,
  reset = 0
};
enum class conf_conf_mii1_txd1_mii1 {
  conf_mii1_txd1_mmode,
  conf_mii1_txd1_puden,
  conf_mii1_txd1_putypesel,
  conf_mii1_txd1_rxactive,
  conf_mii1_txd1_slewctrl,
  RESERVED = -1,
  offset = 0x924,
  reset = 0
};
enum class conf_conf_mii1_txd0_mii1 {
  conf_mii1_txd0_mmode,
  conf_mii1_txd0_puden,
  conf_mii1_txd0_putypesel,
  conf_mii1_txd0_rxactive,
  conf_mii1_txd0_slewctrl,
  RESERVED = -1,
  offset = 0x928,
  reset = 0
};
enum class conf_conf_mii1_tx_clk_mii1 {
  conf_mii1_tx_clk_mmode,
  conf_mii1_tx_clk_puden,
  conf_mii1_tx_clk_putypesel,
  conf_mii1_tx_clk_rxactive,
  conf_mii1_tx_clk_slewctrl,
  RESERVED = -1,
  offset = 0x92C,
  reset = 0
};
enum class conf_conf_mii1_rx_clk_mii1 {
  conf_mii1_rx_clk_mmode,
  conf_mii1_rx_clk_puden,
  conf_mii1_rx_clk_putypesel,
  conf_mii1_rx_clk_rxactive,
  conf_mii1_rx_clk_slewctrl,
  RESERVED = -1,
  offset = 0x930,
  reset = 0
};
enum class conf_conf_mii1_rxd3_mii1 {
  conf_mii1_rxd3_mmode,
  conf_mii1_rxd3_puden,
  conf_mii1_rxd3_putypesel,
  conf_mii1_rxd3_rxactive,
  conf_mii1_rxd3_slewctrl,
  RESERVED = -1,
  offset = 0x934,
  reset = 0
};
enum class conf_conf_mii1_rxd2_mii1 {
  conf_mii1_rxd2_mmode,
  conf_mii1_rxd2_puden,
  conf_mii1_rxd2_putypesel,
  conf_mii1_rxd2_rxactive,
  conf_mii1_rxd2_slewctrl,
  RESERVED = -1,
  offset = 0x938,
  reset = 0
};
enum class conf_conf_mii1_rxd1_mii1 {
  conf_mii1_rxd1_mmode,
  conf_mii1_rxd1_puden,
  conf_mii1_rxd1_putypesel,
  conf_mii1_rxd1_rxactive,
  conf_mii1_rxd1_slewctrl,
  RESERVED = -1,
  offset = 0x93C,
  reset = 0
};
enum class conf_conf_mii1_rxd0_mii1 {
  conf_mii1_rxd0_mmode,
  conf_mii1_rxd0_puden,
  conf_mii1_rxd0_putypesel,
  conf_mii1_rxd0_rxactive,
  conf_mii1_rxd0_slewctrl,
  RESERVED = -1,
  offset = 0x940,
  reset = 0
};
enum class conf_conf_rmii1_ref_clk_rmii1 {
  conf_rmii1_ref_clk_mmode,
  conf_rmii1_ref_clk_puden,
  conf_rmii1_ref_clk_putypesel,
  conf_rmii1_ref_clk_rxactive,
  conf_rmii1_ref_clk_slewctrl,
  RESERVED = -1,
  offset = 0x944,
  reset = 0
};
enum class conf_mdio { RESERVED = -1, offset = 0x948, reset = 0 };
enum class conf_mdc { RESERVED = -1, offset = 0x94C, reset = 0 };
enum class conf_conf_spi0_sclk_spi0 {
  conf_spi0_sclk_mmode,
  conf_spi0_sclk_puden,
  conf_spi0_sclk_putypesel,
  conf_spi0_sclk_rxactive,
  conf_spi0_sclk_slewctrl,
  RESERVED = -1,
  offset = 0x950,
  reset = 0
};
enum class conf_conf_spi0_d0_spi0 {
  conf_spi0_d0_mmode,
  conf_spi0_d0_puden,
  conf_spi0_d0_putypesel,
  conf_spi0_d0_rxactive,
  conf_spi0_d0_slewctrl,
  RESERVED = -1,
  offset = 0x954,
  reset = 0
};
enum class conf_conf_spi0_d1_spi0 {
  conf_spi0_d1_mmode,
  conf_spi0_d1_puden,
  conf_spi0_d1_putypesel,
  conf_spi0_d1_rxactive,
  conf_spi0_d1_slewctrl,
  RESERVED = -1,
  offset = 0x958,
  reset = 0
};
enum class conf_conf_spi0_cs0_spi0 {
  conf_spi0_cs0_mmode,
  conf_spi0_cs0_puden,
  conf_spi0_cs0_putypesel,
  conf_spi0_cs0_rxactive,
  conf_spi0_cs0_slewctrl,
  RESERVED = -1,
  offset = 0x95C,
  reset = 0
};
enum class conf_conf_spi0_cs1_spi0 {
  conf_spi0_cs1_mmode,
  conf_spi0_cs1_puden,
  conf_spi0_cs1_putypesel,
  conf_spi0_cs1_rxactive,
  conf_spi0_cs1_slewctrl,
  RESERVED = -1,
  offset = 0x960,
  reset = 0
};
enum class conf_conf_ecap0_in_pwm0_out_ecap0 {
  conf_ecap0_in_pwm0_out_mmode,
  conf_ecap0_in_pwm0_out_puden,
  conf_ecap0_in_pwm0_out_putypesel,
  conf_ecap0_in_pwm0_out_rxactive,
  conf_ecap0_in_pwm0_out_slewctrl,
  RESERVED = -1,
  offset = 0x964,
  reset = 0
};
enum class conf_conf_uart0_ctsn_uart0 {
  conf_uart0_ctsn_mmode,
  conf_uart0_ctsn_puden,
  conf_uart0_ctsn_putypesel,
  conf_uart0_ctsn_rxactive,
  conf_uart0_ctsn_slewctrl,
  RESERVED = -1,
  offset = 0x968,
  reset = 0
};
enum class conf_conf_uart0_rtsn_uart0 {
  conf_uart0_rtsn_mmode,
  conf_uart0_rtsn_puden,
  conf_uart0_rtsn_putypesel,
  conf_uart0_rtsn_rxactive,
  conf_uart0_rtsn_slewctrl,
  RESERVED = -1,
  offset = 0x96C,
  reset = 0
};
enum class conf_conf_uart0_rxd_uart0 {
  conf_uart0_rxd_mmode,
  conf_uart0_rxd_puden,
  conf_uart0_rxd_putypesel,
  conf_uart0_rxd_rxactive,
  conf_uart0_rxd_slewctrl,
  RESERVED = -1,
  offset = 0x970,
  reset = 0
};
enum class conf_conf_uart0_txd_uart0 {
  conf_uart0_txd_mmode,
  conf_uart0_txd_puden,
  conf_uart0_txd_putypesel,
  conf_uart0_txd_rxactive,
  conf_uart0_txd_slewctrl,
  RESERVED = -1,
  offset = 0x974,
  reset = 0
};
enum class conf_conf_uart1_ctsn_uart1 {
  conf_uart1_ctsn_mmode,
  conf_uart1_ctsn_puden,
  conf_uart1_ctsn_putypesel,
  conf_uart1_ctsn_rxactive,
  conf_uart1_ctsn_slewctrl,
  RESERVED = -1,
  offset = 0x978,
  reset = 0
};
enum class conf_conf_uart1_rtsn_uart1 {
  conf_uart1_rtsn_mmode,
  conf_uart1_rtsn_puden,
  conf_uart1_rtsn_putypesel,
  conf_uart1_rtsn_rxactive,
  conf_uart1_rtsn_slewctrl,
  RESERVED = -1,
  offset = 0x97C,
  reset = 0
};
enum class conf_conf_uart1_rxd_uart1 {
  conf_uart1_rxd_mmode,
  conf_uart1_rxd_puden,
  conf_uart1_rxd_putypesel,
  conf_uart1_rxd_rxactive,
  conf_uart1_rxd_slewctrl,
  RESERVED = -1,
  offset = 0x980,
  reset = 0
};
enum class conf_conf_uart1_txd_uart1 {
  conf_uart1_txd_mmode,
  conf_uart1_txd_puden,
  conf_uart1_txd_putypesel,
  conf_uart1_txd_rxactive,
  conf_uart1_txd_slewctrl,
  RESERVED = -1,
  offset = 0x984,
  reset = 0
};
enum class conf_conf_i2c0_sda_i2c0 {
  conf_i2c0_sda_mmode,
  conf_i2c0_sda_puden,
  conf_i2c0_sda_putypesel,
  conf_i2c0_sda_rxactive,
  conf_i2c0_sda_slewctrl,
  RESERVED = -1,
  offset = 0x988,
  reset = 0
};
enum class conf_conf_i2c0_scl_i2c0 {
  conf_i2c0_scl_mmode,
  conf_i2c0_scl_puden,
  conf_i2c0_scl_putypesel,
  conf_i2c0_scl_rxactive,
  conf_i2c0_scl_slewctrl,
  RESERVED = -1,
  offset = 0x98C,
  reset = 0
};
enum class conf_conf_mcasp0_aclkx_mcasp0 {
  conf_mcasp0_aclkx_mmode,
  conf_mcasp0_aclkx_puden,
  conf_mcasp0_aclkx_putypesel,
  conf_mcasp0_aclkx_rxactive,
  conf_mcasp0_aclkx_slewctrl,
  RESERVED = -1,
  offset = 0x990,
  reset = 0
};
enum class conf_conf_mcasp0_fsx_mcasp0 {
  conf_mcasp0_fsx_mmode,
  conf_mcasp0_fsx_puden,
  conf_mcasp0_fsx_putypesel,
  conf_mcasp0_fsx_rxactive,
  conf_mcasp0_fsx_slewctrl,
  RESERVED = -1,
  offset = 0x994,
  reset = 0
};
enum class conf_conf_mcasp0_axr0_mcasp0 {
  conf_mcasp0_axr0_mmode,
  conf_mcasp0_axr0_puden,
  conf_mcasp0_axr0_putypesel,
  conf_mcasp0_axr0_rxactive,
  conf_mcasp0_axr0_slewctrl,
  RESERVED = -1,
  offset = 0x998,
  reset = 0
};
enum class conf_conf_mcasp0_ahclkr_mcasp0 {
  conf_mcasp0_ahclkr_mmode,
  conf_mcasp0_ahclkr_puden,
  conf_mcasp0_ahclkr_putypesel,
  conf_mcasp0_ahclkr_rxactive,
  conf_mcasp0_ahclkr_slewctrl,
  RESERVED = -1,
  offset = 0x99C,
  reset = 0
};
enum class conf_conf_mcasp0_aclkr_mcasp0 {
  conf_mcasp0_aclkr_mmode,
  conf_mcasp0_aclkr_puden,
  conf_mcasp0_aclkr_putypesel,
  conf_mcasp0_aclkr_rxactive,
  conf_mcasp0_aclkr_slewctrl,
  RESERVED = -1,
  offset = 0x9A0,
  reset = 0
};
enum class conf_conf_mcasp0_fsr_mcasp0 {
  conf_mcasp0_fsr_mmode,
  conf_mcasp0_fsr_puden,
  conf_mcasp0_fsr_putypesel,
  conf_mcasp0_fsr_rxactive,
  conf_mcasp0_fsr_slewctrl,
  RESERVED = -1,
  offset = 0x9A4,
  reset = 0
};
enum class conf_conf_mcasp0_axr1_mcasp0 {
  conf_mcasp0_axr1_mmode,
  conf_mcasp0_axr1_puden,
  conf_mcasp0_axr1_putypesel,
  conf_mcasp0_axr1_rxactive,
  conf_mcasp0_axr1_slewctrl,
  RESERVED = -1,
  offset = 0x9A8,
  reset = 0
};
enum class conf_conf_mcasp0_ahclkx_mcasp0 {
  conf_mcasp0_ahclkx_mmode,
  conf_mcasp0_ahclkx_puden,
  conf_mcasp0_ahclkx_putypesel,
  conf_mcasp0_ahclkx_rxactive,
  conf_mcasp0_ahclkx_slewctrl,
  RESERVED = -1,
  offset = 0x9AC,
  reset = 0
};
enum class conf_conf_xdma_event_intr0_xdma {
  conf_xdma_event_intr0_mmode,
  conf_xdma_event_intr0_puden,
  conf_xdma_event_intr0_putypesel,
  conf_xdma_event_intr0_rxactive,
  conf_xdma_event_intr0_slewctrl,
  RESERVED = -1,
  offset = 0x9B0,
  reset = 0
};
enum class conf_conf_xdma_event_intr1_xdma {
  conf_xdma_event_intr1_mmode,
  conf_xdma_event_intr1_puden,
  conf_xdma_event_intr1_putypesel,
  conf_xdma_event_intr1_rxactive,
  conf_xdma_event_intr1_slewctrl,
  RESERVED = -1,
  offset = 0x9B4,
  reset = 0
};
enum class conf_warmrstn { RESERVED = -1, offset = 0x9B8, reset = 0 };
enum class conf_nnmi { RESERVED = -1, offset = 0x9C0, reset = 0 };
enum class conf_tms { RESERVED = -1, offset = 0x9D0, reset = 0 };
enum class conf_tdi { RESERVED = -1, offset = 0x9D4, reset = 0 };
enum class conf_tdo { RESERVED = -1, offset = 0x9D8, reset = 0 };
enum class conf_tck { RESERVED = -1, offset = 0x9DC, reset = 0 };
enum class conf_trstn { RESERVED = -1, offset = 0x9E0, reset = 0 };
enum class conf_emu0 { RESERVED = -1, offset = 0x9E4, reset = 0 };
enum class conf_emu1 { RESERVED = -1, offset = 0x9E8, reset = 0 };
enum class conf_conf_rtc_pwronrstn_rtc {
  conf_rtc_pwronrstn_mmode,
  conf_rtc_pwronrstn_puden,
  conf_rtc_pwronrstn_putypesel,
  conf_rtc_pwronrstn_rxactive,
  conf_rtc_pwronrstn_slewctrl,
  RESERVED = -1,
  offset = 0x9F8,
  reset = 0
};
enum class conf_conf_pmic_power_en_pmic {
  conf_pmic_power_en_mmode,
  conf_pmic_power_en_puden,
  conf_pmic_power_en_putypesel,
  conf_pmic_power_en_rxactive,
  conf_pmic_power_en_slewctrl,
  RESERVED = -1,
  offset = 0x9FC,
  reset = 0
};
enum class conf_conf_ext_wakeup_ext {
  conf_ext_wakeup_mmode,
  conf_ext_wakeup_puden,
  conf_ext_wakeup_putypesel,
  conf_ext_wakeup_rxactive,
  conf_ext_wakeup_slewctrl,
  RESERVED = -1,
  offset = 0xA00,
  reset = 0
};
enum class conf_conf_usb0_drvvbus_usb0 {
  conf_usb0_drvvbus_mmode,
  conf_usb0_drvvbus_puden,
  conf_usb0_drvvbus_putypesel,
  conf_usb0_drvvbus_rxactive,
  conf_usb0_drvvbus_slewctrl,
  RESERVED = -1,
  offset = 0xA1C,
  reset = 0
};
enum class conf_conf_usb1_drvvbus_usb1 {
  conf_usb1_drvvbus_mmode,
  conf_usb1_drvvbus_puden,
  conf_usb1_drvvbus_putypesel,
  conf_usb1_drvvbus_rxactive,
  conf_usb1_drvvbus_slewctrl,
  RESERVED = -1,
  offset = 0xA34,
  reset = 0
};
enum class cqdetect_status { RESERVED = -1, offset = 0xE00, reset = 0 };
enum class ddr_io_ctrl { RESERVED = -1, offset = 0xE04, reset = 0 };
enum class vtp_ctrl { RESERVED = -1, offset = 0xE0C, reset = 0 };
enum class vref_ctrl { RESERVED = -1, offset = 0xE14, reset = 0 };
enum class tpcc_evt_mux_0_3 {
  evt_mux_0,
  RESERVED0,
  evt_mux_1,
  RESERVED1,
  evt_mux_2,
  RESERVED2,
  evt_mux_3,
  RESERVED = -1,
  offset = 0xF90,
  reset = 0
};
enum class tpcc_evt_mux_4_7 {
  evt_mux_4,
  RESERVED0,
  evt_mux_5,
  RESERVED1,
  evt_mux_6,
  RESERVED2,
  evt_mux_7,
  RESERVED = -1,
  offset = 0xF94,
  reset = 0
};
enum class tpcc_evt_mux_8_11 {
  evt_mux_8,
  RESERVED0,
  evt_mux_9,
  RESERVED1,
  evt_mux_10,
  RESERVED2,
  evt_mux_11,
  RESERVED = -1,
  offset = 0xF98,
  reset = 0
};
enum class tpcc_evt_mux_12_15 {
  evt_mux_12,
  RESERVED0,
  evt_mux_13,
  RESERVED1,
  evt_mux_14,
  RESERVED2,
  evt_mux_15,
  RESERVED = -1,
  offset = 0xF9C,
  reset = 0
};
enum class tpcc_evt_mux_16_19 {
  evt_mux_16,
  RESERVED0,
  evt_mux_17,
  RESERVED1,
  evt_mux_18,
  RESERVED2,
  evt_mux_19,
  RESERVED = -1,
  offset = 0xFA0,
  reset = 0
};
enum class tpcc_evt_mux_20_23 {
  evt_mux_20,
  RESERVED0,
  evt_mux_21,
  RESERVED1,
  evt_mux_22,
  RESERVED2,
  evt_mux_23,
  RESERVED = -1,
  offset = 0xFA4,
  reset = 0
};
enum class tpcc_evt_mux_24_27 {
  evt_mux_24,
  RESERVED0,
  evt_mux_25,
  RESERVED1,
  evt_mux_26,
  RESERVED2,
  evt_mux_27,
  RESERVED = -1,
  offset = 0xFA8,
  reset = 0
};
enum class tpcc_evt_mux_28_31 {
  evt_mux_28,
  RESERVED0,
  evt_mux_29,
  RESERVED1,
  evt_mux_30,
  RESERVED2,
  evt_mux_31,
  RESERVED = -1,
  offset = 0xFAC,
  reset = 0
};
enum class tpcc_evt_mux_32_35 {
  evt_mux_32,
  RESERVED0,
  evt_mux_33,
  RESERVED1,
  evt_mux_34,
  RESERVED2,
  evt_mux_35,
  RESERVED = -1,
  offset = 0xFB0,
  reset = 0
};
enum class tpcc_evt_mux_36_39 {
  evt_mux_36,
  RESERVED0,
  evt_mux_37,
  RESERVED1,
  evt_mux_38,
  RESERVED2,
  evt_mux_39,
  RESERVED = -1,
  offset = 0xFB4,
  reset = 0
};
enum class tpcc_evt_mux_40_43 {
  evt_mux_40,
  RESERVED0,
  evt_mux_41,
  RESERVED1,
  evt_mux_42,
  RESERVED2,
  evt_mux_43,
  RESERVED = -1,
  offset = 0xFB8,
  reset = 0
};
enum class tpcc_evt_mux_44_47 {
  evt_mux_44,
  RESERVED0,
  evt_mux_45,
  RESERVED1,
  evt_mux_46,
  RESERVED2,
  evt_mux_47,
  RESERVED = -1,
  offset = 0xFBC,
  reset = 0
};
enum class tpcc_evt_mux_48_51 {
  evt_mux_48,
  RESERVED0,
  evt_mux_49,
  RESERVED1,
  evt_mux_50,
  RESERVED2,
  evt_mux_51,
  RESERVED = -1,
  offset = 0xFC0,
  reset = 0
};
enum class tpcc_evt_mux_52_55 {
  evt_mux_52,
  RESERVED0,
  evt_mux_53,
  RESERVED1,
  evt_mux_54,
  RESERVED2,
  evt_mux_55,
  RESERVED = -1,
  offset = 0xFC4,
  reset = 0
};
enum class tpcc_evt_mux_56_59 {
  evt_mux_56,
  RESERVED0,
  evt_mux_57,
  RESERVED1,
  evt_mux_58,
  RESERVED2,
  evt_mux_59,
  RESERVED = -1,
  offset = 0xFC8,
  reset = 0
};
enum class tpcc_evt_mux_60_63 {
  evt_mux_60,
  RESERVED0,
  evt_mux_61,
  RESERVED1,
  evt_mux_62,
  RESERVED2,
  evt_mux_63,
  RESERVED = -1,
  offset = 0xFCC,
  reset = 0
};
enum class timer_evt_capt { RESERVED = -1, offset = 0xFD0, reset = 0 };
enum class ecap_evt_capt { RESERVED = -1, offset = 0xFD4, reset = 0 };
enum class adc_evt_capt { RESERVED = -1, offset = 0xFD8, reset = 0 };
enum class reset_iso { RESERVED = -1, offset = 0x1000, reset = 0 };
enum class dpll_pwr_sw_ctrl { RESERVED = -1, offset = 0x1318, reset = 0 };
enum class ddr_cke_ctrl { RESERVED = -1, offset = 0x131C, reset = 0 };
enum class sma2 { RESERVED = -1, offset = 0x1320, reset = 0 };
enum class m3_txev_eoi { RESERVED = -1, offset = 0x1324, reset = 0 };
enum class ipc_msg_reg0 {
  ipc_msg_reg0,
  RESERVED = -1,
  offset = 0x1328,
  reset = 0
};
enum class ipc_msg_reg1 {
  ipc_msg_reg1,
  RESERVED = -1,
  offset = 0x132C,
  reset = 0
};
enum class ipc_msg_reg2 {
  ipc_msg_reg2,
  RESERVED = -1,
  offset = 0x1330,
  reset = 0
};
enum class ipc_msg_reg3 {
  ipc_msg_reg3,
  RESERVED = -1,
  offset = 0x1334,
  reset = 0
};
enum class ipc_msg_reg4 {
  ipc_msg_reg4,
  RESERVED = -1,
  offset = 0x1338,
  reset = 0
};
enum class ipc_msg_reg5 {
  ipc_msg_reg5,
  RESERVED = -1,
  offset = 0x133C,
  reset = 0
};
enum class ipc_msg_reg6 {
  ipc_msg_reg6,
  RESERVED = -1,
  offset = 0x1340,
  reset = 0
};
enum class ipc_msg_reg7 {
  ipc_msg_reg7,
  RESERVED = -1,
  offset = 0x1344,
  reset = 0
};
enum class ddr_cmd0_ioctrl { RESERVED = -1, offset = 0x1404, reset = 0 };
enum class ddr_cmd1_ioctrl { RESERVED = -1, offset = 0x1408, reset = 0 };
enum class ddr_cmd2_ioctrl { RESERVED = -1, offset = 0x140C, reset = 0 };
enum class ddr_data0_ioctrl { RESERVED = -1, offset = 0x1440, reset = 0 };
enum class ddr_data1_ioctrl { RESERVED = -1, offset = 0x1444, reset = 0 };

using control_revision_REG = offset_register<control_revision, 1>;
using control_hwinfo_REG = offset_register<control_hwinfo, 1>;
using control_sysconfig_REG = offset_register<control_sysconfig, 1>;
using control_status_REG = offset_register<control_status, 1>;
using control_emif_sdram_config_REG =
    offset_register<control_emif_sdram_config, 1>;
using core_sldo_ctrl_REG = offset_register<core_sldo_ctrl, 1>;
using mpu_sldo_ctrl_REG = offset_register<mpu_sldo_ctrl, 1>;
using clk32kdivratio_ctrl_REG = offset_register<clk32kdivratio_ctrl, 1>;
using bandgap_ctrl_REG = offset_register<bandgap_ctrl, 1>;
using bandgap_trim_REG = offset_register<bandgap_trim, 1>;
using pll_clkinpulow_ctrl_REG = offset_register<pll_clkinpulow_ctrl, 1>;
using mosc_ctrl_REG = offset_register<mosc_ctrl, 1>;
using deepsleep_ctrl_REG = offset_register<deepsleep_ctrl, 1>;
using dpll_pwr_sw_status_REG = offset_register<dpll_pwr_sw_status, 1>;
using device_id_REG = offset_register<device_id, 1>;
using dev_feature_REG = offset_register<dev_feature, 1>;
using init_priority_0_REG = offset_register<init_priority_0, 1>;
using init_priority_1_REG = offset_register<init_priority_1, 1>;
using tptc_cfg_REG = offset_register<tptc_cfg, 1>;
using usb_ctrl0_REG = offset_register<usb_ctrl0, 1>;
using usb_sts0_REG = offset_register<usb_sts0, 1>;
using usb_ctrl1_REG = offset_register<usb_ctrl1, 1>;
using usb_sts1_REG = offset_register<usb_sts1, 1>;
using mac_id0_lo_REG = offset_register<mac_id0_lo, 1>;
using mac_id0_hi_REG = offset_register<mac_id0_hi, 1>;
using mac_id1_lo_REG = offset_register<mac_id1_lo, 1>;
using mac_id1_hi_REG = offset_register<mac_id1_hi, 1>;
using dcan_raminit_REG = offset_register<dcan_raminit, 1>;
using usb_wkup_ctrl_REG = offset_register<usb_wkup_ctrl, 1>;
using gmii_sel_REG = offset_register<gmii_sel, 1>;
using pwmss_ctrl_REG = offset_register<pwmss_ctrl, 1>;
using mreqprio_0_REG = offset_register<mreqprio_0, 1>;
using mreqprio_1_REG = offset_register<mreqprio_1, 1>;
using hw_event_sel_grp1_REG = offset_register<hw_event_sel_grp1, 1>;
using hw_event_sel_grp2_REG = offset_register<hw_event_sel_grp2, 1>;
using hw_event_sel_grp3_REG = offset_register<hw_event_sel_grp3, 1>;
using hw_event_sel_grp4_REG = offset_register<hw_event_sel_grp4, 1>;
using smrt_ctrl_REG = offset_register<smrt_ctrl, 1>;
using mpuss_hw_debug_sel_REG = offset_register<mpuss_hw_debug_sel, 1>;
using mpuss_hw_dbg_info_REG = offset_register<mpuss_hw_dbg_info, 1>;
using vdd_mpu_opp_050_REG = offset_register<vdd_mpu_opp_050, 1>;
using vdd_mpu_opp_100_REG = offset_register<vdd_mpu_opp_100, 1>;
using vdd_mpu_opp_120_REG = offset_register<vdd_mpu_opp_120, 1>;
using vdd_mpu_opp_turbo_REG = offset_register<vdd_mpu_opp_turbo, 1>;
using vdd_core_opp_050_REG = offset_register<vdd_core_opp_050, 1>;
using vdd_core_opp_100_REG = offset_register<vdd_core_opp_100, 1>;
using bb_scale_REG = offset_register<bb_scale, 1>;
using usb_vid_pid_REG = offset_register<usb_vid_pid, 1>;
using efuse_sma_REG = offset_register<efuse_sma, 1>;
using conf_gpmc_ad0_REG = offset_register<conf_gpmc_ad0, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_ad1_REG = offset_register<conf_gpmc_ad1, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_ad2_REG = offset_register<conf_gpmc_ad2, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_ad3_REG = offset_register<conf_gpmc_ad3, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_ad4_REG = offset_register<conf_gpmc_ad4, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_ad5_REG = offset_register<conf_gpmc_ad5, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_ad6_REG = offset_register<conf_gpmc_ad6, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_ad7_REG = offset_register<conf_gpmc_ad7, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_ad8_REG = offset_register<conf_gpmc_ad8, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_ad9_REG = offset_register<conf_gpmc_ad9, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_ad10_REG = offset_register<conf_gpmc_ad10, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_ad11_REG = offset_register<conf_gpmc_ad11, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_ad12_REG = offset_register<conf_gpmc_ad12, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_ad13_REG = offset_register<conf_gpmc_ad13, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_ad14_REG = offset_register<conf_gpmc_ad14, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_ad15_REG = offset_register<conf_gpmc_ad15, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_a0_REG = offset_register<conf_gpmc_a0, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_a1_REG = offset_register<conf_gpmc_a1, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_a2_REG = offset_register<conf_gpmc_a2, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_a3_REG = offset_register<conf_gpmc_a3, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_a4_REG = offset_register<conf_gpmc_a4, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_a5_REG = offset_register<conf_gpmc_a5, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_a6_REG = offset_register<conf_gpmc_a6, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_a7_REG = offset_register<conf_gpmc_a7, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_a8_REG = offset_register<conf_gpmc_a8, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_a9_REG = offset_register<conf_gpmc_a9, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_a10_REG = offset_register<conf_gpmc_a10, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_a11_REG = offset_register<conf_gpmc_a11, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_wait0_REG = offset_register<conf_gpmc_wait0, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_wpn_REG = offset_register<conf_gpmc_wpn, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_ben1_REG = offset_register<conf_gpmc_ben1, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_csn0_REG = offset_register<conf_gpmc_csn0, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_csn1_REG = offset_register<conf_gpmc_csn1, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_csn2_REG = offset_register<conf_gpmc_csn2, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_csn3_REG = offset_register<conf_gpmc_csn3, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_clk_REG = offset_register<conf_gpmc_clk, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_advn_ale_REG =
    offset_register<conf_gpmc_advn_ale, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_oen_ren_REG =
    offset_register<conf_gpmc_oen_ren, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_wen_REG = offset_register<conf_gpmc_wen, 3, 1, 1, 1, 1, 25>;
using conf_gpmc_ben0_cle_REG =
    offset_register<conf_gpmc_ben0_cle, 3, 1, 1, 1, 1, 25>;
using conf_lcd_data0_REG = offset_register<conf_lcd_data0, 3, 1, 1, 1, 1, 25>;
using conf_lcd_data1_REG = offset_register<conf_lcd_data1, 3, 1, 1, 1, 1, 25>;
using conf_lcd_data2_REG = offset_register<conf_lcd_data2, 3, 1, 1, 1, 1, 25>;
using conf_lcd_data3_REG = offset_register<conf_lcd_data3, 3, 1, 1, 1, 1, 25>;
using conf_lcd_data4_REG = offset_register<conf_lcd_data4, 3, 1, 1, 1, 1, 25>;
using conf_lcd_data5_REG = offset_register<conf_lcd_data5, 3, 1, 1, 1, 1, 25>;
using conf_lcd_data6_REG = offset_register<conf_lcd_data6, 3, 1, 1, 1, 1, 25>;
using conf_lcd_data7_REG = offset_register<conf_lcd_data7, 3, 1, 1, 1, 1, 25>;
using conf_lcd_data8_REG = offset_register<conf_lcd_data8, 3, 1, 1, 1, 1, 25>;
using conf_lcd_data9_REG = offset_register<conf_lcd_data9, 3, 1, 1, 1, 1, 25>;
using conf_lcd_data10_REG = offset_register<conf_lcd_data10, 3, 1, 1, 1, 1, 25>;
using conf_lcd_data11_REG = offset_register<conf_lcd_data11, 3, 1, 1, 1, 1, 25>;
using conf_lcd_data12_REG = offset_register<conf_lcd_data12, 3, 1, 1, 1, 1, 25>;
using conf_lcd_data13_REG = offset_register<conf_lcd_data13, 3, 1, 1, 1, 1, 25>;
using conf_lcd_data14_REG = offset_register<conf_lcd_data14, 3, 1, 1, 1, 1, 25>;
using conf_lcd_data15_REG = offset_register<conf_lcd_data15, 3, 1, 1, 1, 1, 25>;
using conf_lcd_vsync_REG = offset_register<conf_lcd_vsync, 3, 1, 1, 1, 1, 25>;
using conf_lcd_hsync_REG = offset_register<conf_lcd_hsync, 3, 1, 1, 1, 1, 25>;
using conf_lcd_pclk_REG = offset_register<conf_lcd_pclk, 3, 1, 1, 1, 1, 25>;
using conf_lcd_ac_bias_en_REG =
    offset_register<conf_lcd_ac_bias_en, 3, 1, 1, 1, 1, 25>;
using conf_mmc0_dat3_REG = offset_register<conf_mmc0_dat3, 3, 1, 1, 1, 1, 25>;
using conf_mmc0_dat2_REG = offset_register<conf_mmc0_dat2, 3, 1, 1, 1, 1, 25>;
using conf_mmc0_dat1_REG = offset_register<conf_mmc0_dat1, 3, 1, 1, 1, 1, 25>;
using conf_mmc0_dat0_REG = offset_register<conf_mmc0_dat0, 3, 1, 1, 1, 1, 25>;
using conf_mmc0_clk_REG = offset_register<conf_mmc0_clk, 3, 1, 1, 1, 1, 25>;
using conf_mmc0_cmd_REG = offset_register<conf_mmc0_cmd, 3, 1, 1, 1, 1, 25>;
using conf_mii1_col_REG = offset_register<conf_mii1_col, 3, 1, 1, 1, 1, 25>;
using conf_mii1_crs_REG = offset_register<conf_mii1_crs, 3, 1, 1, 1, 1, 25>;
using conf_mii1_rx_er_REG = offset_register<conf_mii1_rx_er, 3, 1, 1, 1, 1, 25>;
using conf_mii1_tx_en_REG = offset_register<conf_mii1_tx_en, 3, 1, 1, 1, 1, 25>;
using conf_mii1_rx_dv_REG = offset_register<conf_mii1_rx_dv, 3, 1, 1, 1, 1, 25>;
using conf_mii1_txd3_REG = offset_register<conf_mii1_txd3, 3, 1, 1, 1, 1, 25>;
using conf_mii1_txd2_REG = offset_register<conf_mii1_txd2, 3, 1, 1, 1, 1, 25>;
using conf_mii1_txd1_REG = offset_register<conf_mii1_txd1, 3, 1, 1, 1, 1, 25>;
using conf_mii1_txd0_REG = offset_register<conf_mii1_txd0, 3, 1, 1, 1, 1, 25>;
using conf_mii1_tx_clk_REG =
    offset_register<conf_mii1_tx_clk, 3, 1, 1, 1, 1, 25>;
using conf_mii1_rx_clk_REG =
    offset_register<conf_mii1_rx_clk, 3, 1, 1, 1, 1, 25>;
using conf_mii1_rxd3_REG = offset_register<conf_mii1_rxd3, 3, 1, 1, 1, 1, 25>;
using conf_mii1_rxd2_REG = offset_register<conf_mii1_rxd2, 3, 1, 1, 1, 1, 25>;
using conf_mii1_rxd1_REG = offset_register<conf_mii1_rxd1, 3, 1, 1, 1, 1, 25>;
using conf_mii1_rxd0_REG = offset_register<conf_mii1_rxd0, 3, 1, 1, 1, 1, 25>;
using conf_rmii1_ref_clk_REG =
    offset_register<conf_rmii1_ref_clk, 3, 1, 1, 1, 1, 25>;
using conf_mdio_REG = offset_register<conf_mdio, 3, 1, 1, 1, 1, 25>;
using conf_mdc_REG = offset_register<conf_mdc, 3, 1, 1, 1, 1, 25>;
using conf_spi0_sclk_REG = offset_register<conf_spi0_sclk, 3, 1, 1, 1, 1, 25>;
using conf_spi0_d0_REG = offset_register<conf_spi0_d0, 3, 1, 1, 1, 1, 25>;
using conf_spi0_d1_REG = offset_register<conf_spi0_d1, 3, 1, 1, 1, 1, 25>;
using conf_spi0_cs0_REG = offset_register<conf_spi0_cs0, 3, 1, 1, 1, 1, 25>;
using conf_spi0_cs1_REG = offset_register<conf_spi0_cs1, 3, 1, 1, 1, 1, 25>;
using conf_ecap0_in_pwm0_out_REG =
    offset_register<conf_ecap0_in_pwm0_out, 3, 1, 1, 1, 1, 25>;
using conf_uart0_ctsn_REG = offset_register<conf_uart0_ctsn, 3, 1, 1, 1, 1, 25>;
using conf_uart0_rtsn_REG = offset_register<conf_uart0_rtsn, 3, 1, 1, 1, 1, 25>;
using conf_uart0_rxd_REG = offset_register<conf_uart0_rxd, 3, 1, 1, 1, 1, 25>;
using conf_uart0_txd_REG = offset_register<conf_uart0_txd, 3, 1, 1, 1, 1, 25>;
using conf_uart1_ctsn_REG = offset_register<conf_uart1_ctsn, 3, 1, 1, 1, 1, 25>;
using conf_uart1_rtsn_REG = offset_register<conf_uart1_rtsn, 3, 1, 1, 1, 1, 25>;
using conf_uart1_rxd_REG = offset_register<conf_uart1_rxd, 3, 1, 1, 1, 1, 25>;
using conf_uart1_txd_REG = offset_register<conf_uart1_txd, 3, 1, 1, 1, 1, 25>;
using conf_i2c0_sda_REG = offset_register<conf_i2c0_sda, 3, 1, 1, 1, 1, 25>;
using conf_i2c0_scl_REG = offset_register<conf_i2c0_scl, 3, 1, 1, 1, 1, 25>;
using conf_mcasp0_aclkx_REG =
    offset_register<conf_mcasp0_aclkx, 3, 1, 1, 1, 1, 25>;
using conf_mcasp0_fsx_REG = offset_register<conf_mcasp0_fsx, 3, 1, 1, 1, 1, 25>;
using conf_mcasp0_axr0_REG =
    offset_register<conf_mcasp0_axr0, 3, 1, 1, 1, 1, 25>;
using conf_mcasp0_ahclkr_REG =
    offset_register<conf_mcasp0_ahclkr, 3, 1, 1, 1, 1, 25>;
using conf_mcasp0_aclkr_REG =
    offset_register<conf_mcasp0_aclkr, 3, 1, 1, 1, 1, 25>;
using conf_mcasp0_fsr_REG = offset_register<conf_mcasp0_fsr, 3, 1, 1, 1, 1, 25>;
using conf_mcasp0_axr1_REG =
    offset_register<conf_mcasp0_axr1, 3, 1, 1, 1, 1, 25>;
using conf_mcasp0_ahclkx_REG =
    offset_register<conf_mcasp0_ahclkx, 3, 1, 1, 1, 1, 25>;
using conf_xdma_event_intr0_REG =
    offset_register<conf_xdma_event_intr0, 3, 1, 1, 1, 1, 25>;
using conf_xdma_event_intr1_REG =
    offset_register<conf_xdma_event_intr1, 3, 1, 1, 1, 1, 25>;
using conf_warmrstn_REG = offset_register<conf_warmrstn, 3, 1, 1, 1, 1, 25>;
using conf_nnmi_REG = offset_register<conf_nnmi, 3, 1, 1, 1, 1, 25>;
using conf_tms_REG = offset_register<conf_tms, 3, 1, 1, 1, 1, 25>;
using conf_tdi_REG = offset_register<conf_tdi, 3, 1, 1, 1, 1, 25>;
using conf_tdo_REG = offset_register<conf_tdo, 3, 1, 1, 1, 1, 25>;
using conf_tck_REG = offset_register<conf_tck, 3, 1, 1, 1, 1, 25>;
using conf_trstn_REG = offset_register<conf_trstn, 3, 1, 1, 1, 1, 25>;
using conf_emu0_REG = offset_register<conf_emu0, 3, 1, 1, 1, 1, 25>;
using conf_emu1_REG = offset_register<conf_emu1, 3, 1, 1, 1, 1, 25>;
using conf_rtc_pwronrstn_REG =
    offset_register<conf_rtc_pwronrstn, 3, 1, 1, 1, 1, 25>;
using conf_pmic_power_en_REG =
    offset_register<conf_pmic_power_en, 3, 1, 1, 1, 1, 25>;
using conf_ext_wakeup_REG = offset_register<conf_ext_wakeup, 3, 1, 1, 1, 1, 25>;
using conf_usb0_drvvbus_REG =
    offset_register<conf_usb0_drvvbus, 3, 1, 1, 1, 1, 25>;
using conf_usb1_drvvbus_REG =
    offset_register<conf_usb1_drvvbus, 3, 1, 1, 1, 1, 25>;
using cqdetect_status_REG = offset_register<cqdetect_status, 1>;
using ddr_io_ctrl_REG = offset_register<ddr_io_ctrl, 1>;
using vtp_ctrl_REG = offset_register<vtp_ctrl, 1>;
using vref_ctrl_REG = offset_register<vref_ctrl, 1>;
using tpcc_evt_mux_0_3_REG =
    offset_register<tpcc_evt_mux_0_3, 6, 2, 6, 2, 6, 2, 6, 2>;
using tpcc_evt_mux_4_7_REG =
    offset_register<tpcc_evt_mux_4_7, 6, 2, 6, 2, 6, 2, 6, 2>;
using tpcc_evt_mux_8_11_REG =
    offset_register<tpcc_evt_mux_8_11, 6, 2, 6, 2, 6, 2, 6, 2>;
using tpcc_evt_mux_12_15_REG =
    offset_register<tpcc_evt_mux_12_15, 6, 2, 6, 2, 6, 2, 6, 2>;
using tpcc_evt_mux_16_19_REG =
    offset_register<tpcc_evt_mux_16_19, 6, 2, 6, 2, 6, 2, 6, 2>;
using tpcc_evt_mux_20_23_REG =
    offset_register<tpcc_evt_mux_20_23, 6, 2, 6, 2, 6, 2, 6, 2>;
using tpcc_evt_mux_24_27_REG =
    offset_register<tpcc_evt_mux_24_27, 6, 2, 6, 2, 6, 2, 6, 2>;
using tpcc_evt_mux_28_31_REG =
    offset_register<tpcc_evt_mux_28_31, 6, 2, 6, 2, 6, 2, 6, 2>;
using tpcc_evt_mux_32_35_REG =
    offset_register<tpcc_evt_mux_32_35, 6, 2, 6, 2, 6, 2, 6, 2>;
using tpcc_evt_mux_36_39_REG =
    offset_register<tpcc_evt_mux_36_39, 6, 2, 6, 2, 6, 2, 6, 2>;
using tpcc_evt_mux_40_43_REG =
    offset_register<tpcc_evt_mux_40_43, 6, 2, 6, 2, 6, 2, 6, 2>;
using tpcc_evt_mux_44_47_REG =
    offset_register<tpcc_evt_mux_44_47, 6, 2, 6, 2, 6, 2, 6, 2>;
using tpcc_evt_mux_48_51_REG =
    offset_register<tpcc_evt_mux_48_51, 6, 2, 6, 2, 6, 2, 6, 2>;
using tpcc_evt_mux_52_55_REG =
    offset_register<tpcc_evt_mux_52_55, 6, 2, 6, 2, 6, 2, 6, 2>;
using tpcc_evt_mux_56_59_REG =
    offset_register<tpcc_evt_mux_56_59, 6, 2, 6, 2, 6, 2, 6, 2>;
using tpcc_evt_mux_60_63_REG =
    offset_register<tpcc_evt_mux_60_63, 6, 2, 6, 2, 6, 2, 6, 2>;
using timer_evt_capt_REG = offset_register<timer_evt_capt, 1>;
using ecap_evt_capt_REG = offset_register<ecap_evt_capt, 1>;
using adc_evt_capt_REG = offset_register<adc_evt_capt, 1>;
using reset_iso_REG = offset_register<reset_iso, 1>;
using dpll_pwr_sw_ctrl_REG = offset_register<dpll_pwr_sw_ctrl, 1>;
using ddr_cke_ctrl_REG = offset_register<ddr_cke_ctrl, 1>;
using sma2_REG = offset_register<sma2, 1>;
using m3_txev_eoi_REG = offset_register<m3_txev_eoi, 1>;
using ipc_msg_reg0_REG = offset_register<ipc_msg_reg0, 32>;
using ipc_msg_reg1_REG = offset_register<ipc_msg_reg1, 32>;
using ipc_msg_reg2_REG = offset_register<ipc_msg_reg2, 32>;
using ipc_msg_reg3_REG = offset_register<ipc_msg_reg3, 32>;
using ipc_msg_reg4_REG = offset_register<ipc_msg_reg4, 32>;
using ipc_msg_reg5_REG = offset_register<ipc_msg_reg5, 32>;
using ipc_msg_reg6_REG = offset_register<ipc_msg_reg6, 32>;
using ipc_msg_reg7_REG = offset_register<ipc_msg_reg7, 32>;
using ddr_cmd0_ioctrl_REG = offset_register<ddr_cmd0_ioctrl, 1>;
using ddr_cmd1_ioctrl_REG = offset_register<ddr_cmd1_ioctrl, 1>;
using ddr_cmd2_ioctrl_REG = offset_register<ddr_cmd2_ioctrl, 1>;
using ddr_data0_ioctrl_REG = offset_register<ddr_data0_ioctrl, 1>;
using ddr_data1_ioctrl_REG = offset_register<ddr_data1_ioctrl, 1>;
}
#endif