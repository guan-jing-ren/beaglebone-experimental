#ifndef _WATCHDOG_HPP_
#define _WATCHDOG_HPP_

#include "offset_register.hpp"

namespace watchdog {
// AM335x Rev O 20.4.4.1 p.4502-4519
enum class WDT_WIDR { REVISION, RESERVED = -1, offset = 0, reset = 0 };
enum class WDT_WDSC {
  RESERVED0,
  SOFTRESET,
  RESERVED1,
  IDLEMODE,
  EMUFREE,
  RESERVED = -1,
  offset = 0x10,
  reset = 0
};
enum class WDT_WDST { RESETDONE, RESERVED = -1, offset = 0x14, reset = 1 };
enum class WDT_WISR {
  OVF_IT_FLAG,
  DLY_IT_FLAG,
  RESERVED = -1,
  offset = 0x18,
  reset = 0
};
enum class WDT_WIER {
  OVF_IT_ENA,
  DLY_IT_ENA,
  RESERVED = -1,
  offset = 0x1C,
  reset = 0
};
enum class WDT_WCLR {
  RESERVED0,
  PTV,
  PRE,
  RESERVED = -1,
  offset = 0x24,
  reset = 0x20
};
enum class WDT_WCRR { TIMER_COUNTER, RESERVED = -1, offset = 0x28, reset = 0 };
enum class WDT_WLDR { TIMER_LOAD, RESERVED = -1, offset = 0x2C, reset = 0 };
enum class WDT_WTGR { TTGR_VALUE, RESERVED = -1, offset = 0x30, reset = 0 };
enum class WDT_WWPS {
  W_PEND_WCLR,
  W_PEND_WCRR,
  W_PEND_WLDR,
  W_PEND_WTGR,
  W_PEND_WSPR,
  W_PEND_WDLY,
  RESERVED = -1,
  offset = 0x34,
  reset = 0
};
enum class WDT_WDLY { WDLY_VALUE, RESERVED = -1, offset = 0x44, reset = 0 };
enum class WDT_WSPR { WSPR_VALUE, RESERVED = -1, offset = 0x48, reset = 0 };
enum class WDT_WIRQSTATRAW {
  EVENT_OVF,
  EVENT_DLY,
  RESERVED = -1,
  offset = 0x54,
  reset = 0
};
enum class WDT_WIRQSTAT {
  EVENT_OVF,
  EVENT_DLY,
  RESERVED = -1,
  offset = 0x58,
  reset = 0
};
enum class WDT_WIRQENSET {
  ENABLE_OVF,
  ENABLE_DLY,
  RESERVED = -1,
  offset = 0x5C,
  reset = 0
};
enum class WDT_WIRQENCLR {
  ENABLE_OVF,
  ENABLE_DLY,
  RESERVED = -1,
  offset = 0x60,
  reset = 0
};

using WDT_WIDR_REG = offset_register<WDT_WIDR, 32>;
using WDT_WDSC_REG = offset_register<WDT_WDSC, 1, 1, 1, 2, 1, 26>;
using WDT_WDST_REG = offset_register<WDT_WDST, 1, 31>;
using WDT_WISR_REG = offset_register<WDT_WISR, 1, 1, 30>;
using WDT_WIER_REG = offset_register<WDT_WIER, 1, 1, 30>;
using WDT_WCLR_REG = offset_register<WDT_WCLR, 2, 3, 1, 26>;
using WDT_WCRR_REG = offset_register<WDT_WCRR, 32>;
using WDT_WLDR_REG = offset_register<WDT_WLDR, 32>;
using WDT_WTGR_REG = offset_register<WDT_WTGR, 32>;
using WDT_WWPS_REG = offset_register<WDT_WWPS, 1, 1, 1, 1, 1, 1, 26>;
using WDT_WDLY_REG = offset_register<WDT_WDLY, 32>;
using WDT_WSPR_REG = offset_register<WDT_WSPR, 32>;
using WDT_WIRQSTATRAW_REG = offset_register<WDT_WIRQSTATRAW, 1, 1, 30>;
using WDT_WIRQSTAT_REG = offset_register<WDT_WIRQSTAT, 1, 1, 30>;
using WDT_WIRQENSET_REG = offset_register<WDT_WIRQENSET, 1, 1, 30>;
using WDT_WIRQENCLR_REG = offset_register<WDT_WIRQENCLR, 1, 1, 30>;
}

#endif