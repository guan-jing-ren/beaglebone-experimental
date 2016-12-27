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
enum class conf_gpmc_ad0 { RESERVED = -1, offset = 0x800, reset = 0 };
enum class conf_gpmc_ad1 { RESERVED = -1, offset = 0x804, reset = 0 };
enum class conf_gpmc_ad2 { RESERVED = -1, offset = 0x808, reset = 0 };
enum class conf_gpmc_ad3 { RESERVED = -1, offset = 0x80C, reset = 0 };
enum class conf_gpmc_ad4 { RESERVED = -1, offset = 0x810, reset = 0 };
enum class conf_gpmc_ad5 { RESERVED = -1, offset = 0x814, reset = 0 };
enum class conf_gpmc_ad6 { RESERVED = -1, offset = 0x818, reset = 0 };
enum class conf_gpmc_ad7 { RESERVED = -1, offset = 0x81C, reset = 0 };
enum class conf_gpmc_ad8 { RESERVED = -1, offset = 0x820, reset = 0 };
enum class conf_gpmc_ad9 { RESERVED = -1, offset = 0x824, reset = 0 };
enum class conf_gpmc_ad10 { RESERVED = -1, offset = 0x828, reset = 0 };
enum class conf_gpmc_ad11 { RESERVED = -1, offset = 0x82C, reset = 0 };
enum class conf_gpmc_ad12 { RESERVED = -1, offset = 0x830, reset = 0 };
enum class conf_gpmc_ad13 { RESERVED = -1, offset = 0x834, reset = 0 };
enum class conf_gpmc_ad14 { RESERVED = -1, offset = 0x838, reset = 0 };
enum class conf_gpmc_ad15 { RESERVED = -1, offset = 0x83C, reset = 0 };
enum class conf_gpmc_a0 { RESERVED = -1, offset = 0x840, reset = 0 };
enum class conf_gpmc_a1 { RESERVED = -1, offset = 0x844, reset = 0 };
enum class conf_gpmc_a2 { RESERVED = -1, offset = 0x848, reset = 0 };
enum class conf_gpmc_a3 { RESERVED = -1, offset = 0x84C, reset = 0 };
enum class conf_gpmc_a4 { RESERVED = -1, offset = 0x850, reset = 0 };
enum class conf_gpmc_a5 { RESERVED = -1, offset = 0x854, reset = 0 };
enum class conf_gpmc_a6 { RESERVED = -1, offset = 0x858, reset = 0 };
enum class conf_gpmc_a7 { RESERVED = -1, offset = 0x85C, reset = 0 };
enum class conf_gpmc_a8 { RESERVED = -1, offset = 0x860, reset = 0 };
enum class conf_gpmc_a9 { RESERVED = -1, offset = 0x864, reset = 0 };
enum class conf_gpmc_a10 { RESERVED = -1, offset = 0x868, reset = 0 };
enum class conf_gpmc_a11 { RESERVED = -1, offset = 0x86C, reset = 0 };
enum class conf_gpmc_wait0 { RESERVED = -1, offset = 0x870, reset = 0 };
enum class conf_gpmc_wpn { RESERVED = -1, offset = 0x874, reset = 0 };
enum class conf_gpmc_ben1 { RESERVED = -1, offset = 0x878, reset = 0 };
enum class conf_gpmc_csn0 { RESERVED = -1, offset = 0x87C, reset = 0 };
enum class conf_gpmc_csn1 { RESERVED = -1, offset = 0x880, reset = 0 };
enum class conf_gpmc_csn2 { RESERVED = -1, offset = 0x884, reset = 0 };
enum class conf_gpmc_csn3 { RESERVED = -1, offset = 0x888, reset = 0 };
enum class conf_gpmc_clk { RESERVED = -1, offset = 0x88C, reset = 0 };
enum class conf_gpmc_advn_ale { RESERVED = -1, offset = 0x890, reset = 0 };
enum class conf_gpmc_oen_ren { RESERVED = -1, offset = 0x894, reset = 0 };
enum class conf_gpmc_wen { RESERVED = -1, offset = 0x898, reset = 0 };
enum class conf_gpmc_ben0_cle { RESERVED = -1, offset = 0x89C, reset = 0 };
enum class conf_lcd_data0 { RESERVED = -1, offset = 0x8A0, reset = 0 };
enum class conf_lcd_data1 { RESERVED = -1, offset = 0x8A4, reset = 0 };
enum class conf_lcd_data2 { RESERVED = -1, offset = 0x8A8, reset = 0 };
enum class conf_lcd_data3 { RESERVED = -1, offset = 0x8AC, reset = 0 };
enum class conf_lcd_data4 { RESERVED = -1, offset = 0x8B0, reset = 0 };
enum class conf_lcd_data5 { RESERVED = -1, offset = 0x8B4, reset = 0 };
enum class conf_lcd_data6 { RESERVED = -1, offset = 0x8B8, reset = 0 };
enum class conf_lcd_data7 { RESERVED = -1, offset = 0x8BC, reset = 0 };
enum class conf_lcd_data8 { RESERVED = -1, offset = 0x8C0, reset = 0 };
enum class conf_lcd_data9 { RESERVED = -1, offset = 0x8C4, reset = 0 };
enum class conf_lcd_data10 { RESERVED = -1, offset = 0x8C8, reset = 0 };
enum class conf_lcd_data11 { RESERVED = -1, offset = 0x8CC, reset = 0 };
enum class conf_lcd_data12 { RESERVED = -1, offset = 0x8D0, reset = 0 };
enum class conf_lcd_data13 { RESERVED = -1, offset = 0x8D4, reset = 0 };
enum class conf_lcd_data14 { RESERVED = -1, offset = 0x8D8, reset = 0 };
enum class conf_lcd_data15 { RESERVED = -1, offset = 0x8DC, reset = 0 };
enum class conf_lcd_vsync { RESERVED = -1, offset = 0x8E0, reset = 0 };
enum class conf_lcd_hsync { RESERVED = -1, offset = 0x8E4, reset = 0 };
enum class conf_lcd_pclk { RESERVED = -1, offset = 0x8E8, reset = 0 };
enum class conf_lcd_ac_bias_en { RESERVED = -1, offset = 0x8EC, reset = 0 };
enum class conf_mmc0_dat3 { RESERVED = -1, offset = 0x8F0, reset = 0 };
enum class conf_mmc0_dat2 { RESERVED = -1, offset = 0x8F4, reset = 0 };
enum class conf_mmc0_dat1 { RESERVED = -1, offset = 0x8F8, reset = 0 };
enum class conf_mmc0_dat0 { RESERVED = -1, offset = 0x8FC, reset = 0 };
enum class conf_mmc0_clk { RESERVED = -1, offset = 0x900, reset = 0 };
enum class conf_mmc0_cmd { RESERVED = -1, offset = 0x904, reset = 0 };
enum class conf_mii1_col { RESERVED = -1, offset = 0x908, reset = 0 };
enum class conf_mii1_crs { RESERVED = -1, offset = 0x90C, reset = 0 };
enum class conf_mii1_rx_er { RESERVED = -1, offset = 0x910, reset = 0 };
enum class conf_mii1_tx_en { RESERVED = -1, offset = 0x914, reset = 0 };
enum class conf_mii1_rx_dv { RESERVED = -1, offset = 0x918, reset = 0 };
enum class conf_mii1_txd3 { RESERVED = -1, offset = 0x91C, reset = 0 };
enum class conf_mii1_txd2 { RESERVED = -1, offset = 0x920, reset = 0 };
enum class conf_mii1_txd1 { RESERVED = -1, offset = 0x924, reset = 0 };
enum class conf_mii1_txd0 { RESERVED = -1, offset = 0x928, reset = 0 };
enum class conf_mii1_tx_clk { RESERVED = -1, offset = 0x92C, reset = 0 };
enum class conf_mii1_rx_clk { RESERVED = -1, offset = 0x930, reset = 0 };
enum class conf_mii1_rxd3 { RESERVED = -1, offset = 0x934, reset = 0 };
enum class conf_mii1_rxd2 { RESERVED = -1, offset = 0x938, reset = 0 };
enum class conf_mii1_rxd1 { RESERVED = -1, offset = 0x93C, reset = 0 };
enum class conf_mii1_rxd0 { RESERVED = -1, offset = 0x940, reset = 0 };
enum class conf_rmii1_ref_clk { RESERVED = -1, offset = 0x944, reset = 0 };
enum class conf_mdio { RESERVED = -1, offset = 0x948, reset = 0 };
enum class conf_mdc { RESERVED = -1, offset = 0x94C, reset = 0 };
enum class conf_spi0_sclk { RESERVED = -1, offset = 0x950, reset = 0 };
enum class conf_spi0_d0 { RESERVED = -1, offset = 0x954, reset = 0 };
enum class conf_spi0_d1 { RESERVED = -1, offset = 0x958, reset = 0 };
enum class conf_spi0_cs0 { RESERVED = -1, offset = 0x95C, reset = 0 };
enum class conf_spi0_cs1 { RESERVED = -1, offset = 0x960, reset = 0 };
enum class conf_ecap0_in_pwm0_out { RESERVED = -1, offset = 0x964, reset = 0 };
enum class conf_uart0_ctsn { RESERVED = -1, offset = 0x968, reset = 0 };
enum class conf_uart0_rtsn { RESERVED = -1, offset = 0x96C, reset = 0 };
enum class conf_uart0_rxd { RESERVED = -1, offset = 0x970, reset = 0 };
enum class conf_uart0_txd { RESERVED = -1, offset = 0x974, reset = 0 };
enum class conf_uart1_ctsn { RESERVED = -1, offset = 0x978, reset = 0 };
enum class conf_uart1_rtsn { RESERVED = -1, offset = 0x97C, reset = 0 };
enum class conf_uart1_rxd { RESERVED = -1, offset = 0x980, reset = 0 };
enum class conf_uart1_txd { RESERVED = -1, offset = 0x984, reset = 0 };
enum class conf_i2c0_sda { RESERVED = -1, offset = 0x988, reset = 0 };
enum class conf_i2c0_scl { RESERVED = -1, offset = 0x98C, reset = 0 };
enum class conf_mcasp0_aclkx { RESERVED = -1, offset = 0x990, reset = 0 };
enum class conf_mcasp0_fsx { RESERVED = -1, offset = 0x994, reset = 0 };
enum class conf_mcasp0_axr0 { RESERVED = -1, offset = 0x998, reset = 0 };
enum class conf_mcasp0_ahclkr { RESERVED = -1, offset = 0x99C, reset = 0 };
enum class conf_mcasp0_aclkr { RESERVED = -1, offset = 0x9A0, reset = 0 };
enum class conf_mcasp0_fsr { RESERVED = -1, offset = 0x9A4, reset = 0 };
enum class conf_mcasp0_axr1 { RESERVED = -1, offset = 0x9A8, reset = 0 };
enum class conf_mcasp0_ahclkx { RESERVED = -1, offset = 0x9AC, reset = 0 };
enum class conf_xdma_event_intr0 { RESERVED = -1, offset = 0x9B0, reset = 0 };
enum class conf_xdma_event_intr1 { RESERVED = -1, offset = 0x9B4, reset = 0 };
enum class conf_warmrstn { RESERVED = -1, offset = 0x9B8, reset = 0 };
enum class conf_nnmi { RESERVED = -1, offset = 0x9C0, reset = 0 };
enum class conf_tms { RESERVED = -1, offset = 0x9D0, reset = 0 };
enum class conf_tdi { RESERVED = -1, offset = 0x9D4, reset = 0 };
enum class conf_tdo { RESERVED = -1, offset = 0x9D8, reset = 0 };
enum class conf_tck { RESERVED = -1, offset = 0x9DC, reset = 0 };
enum class conf_trstn { RESERVED = -1, offset = 0x9E0, reset = 0 };
enum class conf_emu0 { RESERVED = -1, offset = 0x9E4, reset = 0 };
enum class conf_emu1 { RESERVED = -1, offset = 0x9E8, reset = 0 };
enum class conf_rtc_pwronrstn { RESERVED = -1, offset = 0x9F8, reset = 0 };
enum class conf_pmic_power_en { RESERVED = -1, offset = 0x9FC, reset = 0 };
enum class conf_ext_wakeup { RESERVED = -1, offset = 0xA00, reset = 0 };
enum class conf_usb0_drvvbus { RESERVED = -1, offset = 0xA1C, reset = 0 };
enum class conf_usb1_drvvbus { RESERVED = -1, offset = 0xA34, reset = 0 };
enum class cqdetect_status { RESERVED = -1, offset = 0xE00, reset = 0 };
enum class ddr_io_ctrl { RESERVED = -1, offset = 0xE04, reset = 0 };
enum class vtp_ctrl { RESERVED = -1, offset = 0xE0C, reset = 0 };
enum class vref_ctrl { RESERVED = -1, offset = 0xE14, reset = 0 };
enum class tpcc_evt_mux_0_3 { RESERVED = -1, offset = 0xF90, reset = 0 };
enum class tpcc_evt_mux_4_7 { RESERVED = -1, offset = 0xF94, reset = 0 };
enum class tpcc_evt_mux_8_11 { RESERVED = -1, offset = 0xF98, reset = 0 };
enum class tpcc_evt_mux_12_15 { RESERVED = -1, offset = 0xF9C, reset = 0 };
enum class tpcc_evt_mux_16_19 { RESERVED = -1, offset = 0xFA0, reset = 0 };
enum class tpcc_evt_mux_20_23 { RESERVED = -1, offset = 0xFA4, reset = 0 };
enum class tpcc_evt_mux_24_27 { RESERVED = -1, offset = 0xFA8, reset = 0 };
enum class tpcc_evt_mux_28_31 { RESERVED = -1, offset = 0xFAC, reset = 0 };
enum class tpcc_evt_mux_32_35 { RESERVED = -1, offset = 0xFB0, reset = 0 };
enum class tpcc_evt_mux_36_39 { RESERVED = -1, offset = 0xFB4, reset = 0 };
enum class tpcc_evt_mux_40_43 { RESERVED = -1, offset = 0xFB8, reset = 0 };
enum class tpcc_evt_mux_44_47 { RESERVED = -1, offset = 0xFBC, reset = 0 };
enum class tpcc_evt_mux_48_51 { RESERVED = -1, offset = 0xFC0, reset = 0 };
enum class tpcc_evt_mux_52_55 { RESERVED = -1, offset = 0xFC4, reset = 0 };
enum class tpcc_evt_mux_56_59 { RESERVED = -1, offset = 0xFC8, reset = 0 };
enum class tpcc_evt_mux_60_63 { RESERVED = -1, offset = 0xFCC, reset = 0 };
enum class timer_evt_capt { RESERVED = -1, offset = 0xFD0, reset = 0 };
enum class ecap_evt_capt { RESERVED = -1, offset = 0xFD4, reset = 0 };
enum class adc_evt_capt { RESERVED = -1, offset = 0xFD8, reset = 0 };
enum class reset_iso { RESERVED = -1, offset = 0x1000, reset = 0 };
enum class dpll_pwr_sw_ctrl { RESERVED = -1, offset = 0x1318, reset = 0 };
enum class ddr_cke_ctrl { RESERVED = -1, offset = 0x131C, reset = 0 };
enum class sma2 { RESERVED = -1, offset = 0x1320, reset = 0 };
enum class m3_txev_eoi { RESERVED = -1, offset = 0x1324, reset = 0 };
enum class ipc_msg_reg0 { RESERVED = -1, offset = 0x1328, reset = 0 };
enum class ipc_msg_reg1 { RESERVED = -1, offset = 0x132C, reset = 0 };
enum class ipc_msg_reg2 { RESERVED = -1, offset = 0x1330, reset = 0 };
enum class ipc_msg_reg3 { RESERVED = -1, offset = 0x1334, reset = 0 };
enum class ipc_msg_reg4 { RESERVED = -1, offset = 0x1338, reset = 0 };
enum class ipc_msg_reg5 { RESERVED = -1, offset = 0x133C, reset = 0 };
enum class ipc_msg_reg6 { RESERVED = -1, offset = 0x1340, reset = 0 };
enum class ipc_msg_reg7 { RESERVED = -1, offset = 0x1344, reset = 0 };
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