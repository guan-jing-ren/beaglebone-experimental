#ifndef _UART_HPP_
#define _UART_HPP_

#include "../fundamental-machines/basic_register.hpp"
#include "offset_register.hpp"

namespace UART {
enum class THR { THR, RESERVED = -1, offset = 0, reset = 0 };
enum class RHR { RHR, RESERVED = -1, offset = 0, reset = 0 };
enum class DLL { CLOCK_LSB, RESERVED = -1, offset = 0, reset = 0 };
enum class IER_IRDA {
  RHRIT,
  THRIT,
  LASTRXBYTEIT,
  RXOVERRUNIT,
  STSFIFOTRIGIT,
  TXSTATUSIT,
  LINESTSIT,
  EOFIT,
  RESERVED = -1,
  offset = 4,
  reset = 0
};
enum class IER_CIR {
  RHRIT,
  THRIT,
  RXSTOPIT,
  RXOVERRUNIT,
  RESERVED0,
  TXSTATUSIT,
  RESERVED = -1,
  offset = 4,
  reset = 0
};
enum class IER_UART {
  RHRIT,
  THRIT,
  LINESTIT,
  MODEMSTSIT,
  SLEEPMODE,
  XOFFIT,
  RTSIT,
  CTSIT,
  RESERVED = -1,
  offset = 4,
  reset = 0
};
enum class DLH { CLOCK_MSB, RESERVED = -1, offset = 0, reset = 0 };
enum class EFR {
  SWFLOWCONTROL,
  ENHANCEDEN,
  SPECIALCHARDETECT,
  AUTORTSEN,
  AUTOCTSEN,
  RESERVED = -1,
  offset = 8,
  reset = 0
};
enum class IIR_UART {
  IT_PENDING,
  IT_TYPE,
  FCR_MIRROR,
  RESERVED = -1,
  offset = 8,
  reset = 1
};
enum class IIR_CIR {
  RHRIT,
  THRIT,
  RXSTOPIT,
  RXOEIT,
  RESERVED0,
  TXSTATUSIT,
  RESERVED = -1,
  offset = 8,
  reset = 0
};
enum class FCR {
  FIFO_EN,
  RX_FIFO_CLEAR,
  TX_FIFO_CLEAR,
  DMA_MODE,
  TX_FIFO_TRIG,
  RX_FIFO_TRIG,
  RESERVED = -1,
  offset = 8,
  reset = 0
};
enum class IIR_IRDA {
  RHR_IT,
  THR_IT,
  RX_FIFO_LAST_BYTE_IT,
  RX_OE_IT,
  STS_FIFO_IT,
  TX_STATUS_IT,
  LINE_STS_IT,
  EOF_IT,
  RESERVED = -1,
  offset = 8,
  reset = 0
};
enum class LCR {
  CHAR_LENGTH,
  NB_STOP,
  PARITY_EN,
  PARITY_TYPE1,
  PARITY_TYPE2,
  BREAK_EN,
  DIV_EN,
  RESERVED = -1,
  offset = 0xC,
  reset = 0
};
enum class MCR {
  DTR,
  RTS,
  RISTSCH,
  CDSTSCH,
  LOOPBACKEN,
  XONEN,
  TCRTLR,
  RESERVED = -1,
  offset = 0x10,
  reset = 0
};
enum class XON1_ADDR1 { XONWORD1, RESERVED = -1, offset = 0x10, reset = 0 };
enum class XON2_ADDR2 { XONWORD2, RESERVED = -1, offset = 0x14, reset = 0 };
enum class LSR_CIR {
  RXFIFOE,
  RESERVED0,
  RXSTOP,
  RESERVED1,
  THREMPTY,
  RESERVED = -1,
  offset = 0x14,
  reset = 0x81
};
enum class LSR_IRDA {
  RX_FIFO_E,
  STS_FIFO_E,
  CRC,
  ABORT,
  FRAME_TOO_LONG,
  RX_LAST_BYTE,
  STS_FIFO_FULL,
  THR_EMPTY,
  RESERVED = -1,
  offset = 0x14,
  reset = 0xA3
};
enum class LSR_UART {
  RXFIFOE,
  RXOE,
  RXPE,
  RXFE,
  RXBI,
  TXFIFOE,
  TXSRE,
  RXFIFOSTS,
  RESERVED = -1,
  offset = 0x14,
  reset = 0x60
};
enum class TCR {
  RXFIFOTRIGHALT,
  RXFIFOTRIGSTART,
  RESERVED = -1,
  offset = 0x18,
  reset = 0
};
enum class MSR {
  CTS_STS,
  DSR_STS,
  RI_STS,
  DCD_STS,
  NCTS_STS,
  NDSR_STS,
  NRI_STS,
  NCD_STS,
  RESERVED = -1,
  offset = 0x18,
  reset = 0
};
enum class XOFF1 { XOFFWORD1, RESERVED = -1, offset = 0x18, reset = 0 };
enum class SPR { SPR_WORD, RESERVED = -1, offset = 0x1C, reset = 0 };
enum class TLR {
  TX_FIFO_TRIG_DMA,
  RX_FIFO_TRIG_DMA,
  RESERVED = -1,
  offset = 0x1C,
  reset = 0
};
enum class XOFF2 { XOFFWORD2, RESERVED = -1, offset = 0x1C, reset = 0 };
enum class MDR1 {
  MODESELECT,
  IRSLEEP,
  SETTXIR,
  SCT,
  SIPMODE,
  FRAMEENDMODE,
  RESERVED = -1,
  offset = 0x20,
  reset = 7
};
enum class MDR2 {
  IRTXUNDERRUN,
  STSFIFOTRIG,
  UARTPULSE,
  CIRPULSEMODE,
  IRRXINVERT,
  SETTXIRALT,
  RESERVED = -1,
  offset = 0x24,
  reset = 0
};
enum class TXFLL { TXFLL, RESERVED = -1, offset = 0x28, reset = 0 };
enum class SFLSR {
  RESERVED0,
  CRC_ERROR,
  ABORT_DETECT,
  FRAME_TOO_LONG_ERROR,
  OE_ERROR,
  RESERVED = -1,
  offset = 0x28,
  reset = 0
};
enum class RESUME { RESUME, RESERVED = -1, offset = 0x2C, reset = 0 };
enum class TXFLH { TXFLH, RESERVED = -1, offset = 0x2C, reset = 0 };
enum class RXFLL { RXFLL, RESERVED = -1, offset = 0x30, reset = 0 };
enum class SFREGL { SFREGL, RESERVED = -1, offset = 0x30, reset = 0 };
enum class SFREGH { SFREGH, RESERVED = -1, offset = 0x34, reset = 0 };
enum class RXFLH { RXFLH, RESERVED = -1, offset = 0x34, reset = 0 };
enum class BLR {
  RESERVED0,
  XBOFTYPE,
  STSFIFORESET,
  RESERVED = -1,
  offset = 0x38,
  reset = 0x40
};
enum class UASR {
  SPEED,
  BITBYCHAR,
  PARITYTYPE,
  RESERVED = -1,
  offset = 0x38,
  reset = 0
};
enum class ACREG {
  EOTEN,
  ABORTEN,
  SCTXEN,
  SENDSIP,
  DISTXUNDERRUN,
  DISIRRX,
  SDMOD,
  PULSETYPE,
  RESERVED = -1,
  offset = 0x3C,
  reset = 0
};
enum class SCR {
  DMAMODECTL,
  DMAMODE2,
  TXEMPTYCTLIT,
  RXCTSDSRWAKEUPENABLE,
  DSRIT,
  TXTRIGGRANU1,
  RXTRIGGRANU1,
  RESERVED = -1,
  offset = 0x40,
  reset = 0
};
enum class SSR {
  TXFIFOFULL,
  RXCTSDSRWAKEUPSTS,
  DMACOUNTERRST,
  RESERVED = -1,
  offset = 0x44,
  reset = 4
};
enum class EBLR { EBLR, RESERVED = -1, offset = 0x48, reset = 0 };
enum class MVR {
  MINORREV,
  RESERVED0,
  MAJORREV,
  RESERVED = -1,
  offset = 0x50,
  reset = 0
};
enum class SYSC {
  AUTOIDLE,
  SOFTRESET,
  ENAWAKEUP,
  IDLEMODE,
  RESERVED = -1,
  offset = 0x54,
  reset = 0
};
enum class SYSS { RESETDONE, RESERVED = -1, offset = 0x58, reset = 0 };
enum class WER {
  CTS_ACTIVITY,
  DSR_ACTIVITY,
  RI_ACTIVITY,
  DCD_ACTIVITY,
  RX_ACTIVITY,
  RHR_INTERRUPT,
  RLS_INTERRUPT,
  TXWAKEUPEN,
  RESERVED = -1,
  offset = 0x5C,
  reset = 0xFF
};
enum class CFPS { CFPS, RESERVED = -1, offset = 0x60, reset = 0x69 };
enum class RXFIFO_LVL { RXFIFO_LVL, RESERVED = -1, offset = 0x64, reset = 0 };
enum class TXFIFO_LVL { TXFIFO_LVL, RESERVED = -1, offset = 0x68, reset = 0 };
enum class IER2 {
  EN_RXFIFO_EMPTY,
  EN_TXFIFO_EMPTY,
  RESERVED = -1,
  offset = 0x6C,
  reset = 0
};
enum class ISR2 {
  RXFIFO_EMPTY_STS,
  TXFIFO_EMPTY_STS,
  RESERVED = -1,
  offset = 0x70,
  reset = 0
};
enum class FREQ_SEL { FREQ_SEL, RESERVED = -1, offset = 0x74, reset = 0 };
enum class MDR3 {
  DISABLE_CIR_RX_DEMOD,
  NONDEFAULT_FREQ,
  SET_DMA_TX_THRESHOLD,
  RESERVED = -1,
  offset = 0x80,
  reset = 0
};
enum class TX_DMA_THRESHOLD {
  TX_DMA_THRESHOLD,
  RESERVED = -1,
  offset = 0x84,
  reset = 0
};

using THR_REG = offset_register<THR, 8, 8>;
using RHR_REG = offset_register<RHR, 8, 8>;
using DLL_REG = offset_register<DLL, 8, 8>;
using IER_IRDA_REG = offset_register<IER_IRDA, 1, 1, 1, 1, 1, 1, 1, 1, 8>;
using IER_CIR_REG = offset_register<IER_CIR, 1, 1, 1, 1, 1, 1, 10>;
using IER_UART_REG = offset_register<IER_UART, 1, 1, 1, 1, 1, 1, 1, 8>;
using DLH_REG = offset_register<DLH, 8, 8>;
using EFR_REG = offset_register<EFR, 4, 1, 1, 1, 1, 8>;
using IIR_UART_REG = offset_register<IIR_UART, 1, 5, 2, 8>;
using IIR_CIR_REG = offset_register<IIR_CIR, 1, 1, 1, 1, 1, 1, 10>;
using FCR_REG = offset_register<FCR, 1, 1, 1, 1, 2, 2, 8>;
using IIR_IRDA_REG = offset_register<IIR_IRDA, 1, 1, 1, 1, 1, 1, 1, 1, 8>;
using LCR_REG = offset_register<LCR, 2, 1, 1, 1, 1, 1, 1, 8>;
using MCR_REG = offset_register<MCR, 1, 1, 1, 1, 1, 1, 1, 9>;
using XON1_ADDR1_REG = offset_register<XON1_ADDR1, 8, 8>;
using XON2_ADDR2_REG = offset_register<XON2_ADDR2, 8, 8>;
using LSR_CIR_REG = offset_register<LSR_CIR, 1, 4, 1, 1, 1, 8>;
using LSR_IRDA_REG = offset_register<LSR_IRDA, 1, 1, 1, 1, 1, 1, 1, 1, 8>;
using LSR_UART_REG = offset_register<LSR_UART, 1, 1, 1, 1, 1, 1, 1, 1, 8>;
using TCR_REG = offset_register<TCR, 4, 4, 8>;
using MSR_REG = offset_register<MSR, 1, 1, 1, 1, 1, 1, 1, 1, 8>;
using XOFF1_REG = offset_register<XOFF1, 8, 8>;
using SPR_REG = offset_register<SPR, 8, 8>;
using TLR_REG = offset_register<TLR, 4, 4, 8>;
using XOFF2_REG = offset_register<XOFF2, 8, 8>;
using MDR1_REG = offset_register<MDR1, 3, 1, 1, 1, 1, 1, 8>;
using MDR2_REG = offset_register<MDR2, 1, 2, 1, 2, 1, 1, 8>;
using TXFLL_REG = offset_register<TXFLL, 8, 8>;
using SFLSR_REG = offset_register<SFLSR, 5, 11>;
using RESUME_REG = offset_register<RESUME, 8, 8>;
using TXFLH_REG = offset_register<TXFLH, 5, 11>;
using RXFLL_REG = offset_register<RXFLL, 8, 8>;
using SFREGL_REG = offset_register<SFREGL, 8, 8>;
using SFREGH_REG = offset_register<SFREGH, 4, 12>;
using RXFLH_REG = offset_register<RXFLH, 4, 12>;
using BLR_REG = offset_register<BLR, 6, 1, 1, 8>;
using UASR_REG = offset_register<UASR, 5, 1, 2, 8>;
using ACREG_REG = offset_register<ACREG, 1, 1, 1, 1, 1, 1, 1, 1, 8>;
using SCR_REG = offset_register<SCR, 1, 1, 1, 1, 1, 1, 1, 1, 8>;
using SSR_REG = offset_register<SSR, 1, 1, 1, 13>;
using EBLR_REG = offset_register<EBLR, 8, 8>;
using MVR_REG = offset_register<MVR, 6, 2, 3, 5>;
using SYSC_REG = offset_register<SYSC, 1, 1, 1, 2, 11>;
using SYSS_REG = offset_register<SYSS, 1, 15>;
using WER_REG = offset_register<WER, 1, 1, 1, 1, 1, 1, 1, 1, 1, 8>;
using CFPS_REG = offset_register<CFPS, 8, 8>;
using RXFIFO_LVL_REG = offset_register<RXFIFO_LVL, 8, 8>;
using TXFIFO_LVL_REG = offset_register<TXFIFO_LVL, 8, 8>;
using IER2_REG = offset_register<IER2, 1, 1, 14>;
using ISR2_REG = offset_register<ISR2, 1, 1, 14>;
using FREQ_SEL_REG = offset_register<FREQ_SEL, 8, 8>;
using MDR3_REG = offset_register<MDR3, 1, 1, 1, 12>;
using TX_DMA_THRESHOLD_REG = offset_register<TX_DMA_THRESHOLD, 6, 10>;
}

#endif