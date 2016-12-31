#ifndef _WATCHDOG_HPP_
#define _WATCHDOG_HPP_

#include "offset_register.hpp"

namespace watchdog {
enum class WDT_WIDR { RESERVED = -1, offset = 0, reset = 0 };
enum class WDT_WDSC { RESERVED = -1, offset = 0x10, reset = 0 };
enum class WDT_WDST { RESERVED = -1, offset = 0x14, reset = 0 };
enum class WDT_WISR { RESERVED = -1, offset = 0x18, reset = 0 };
enum class WDT_WIER { RESERVED = -1, offset = 0x1C, reset = 0 };
enum class WDT_WCLR { RESERVED = -1, offset = 0x24, reset = 0 };
enum class WDT_WCRR { RESERVED = -1, offset = 0x28, reset = 0 };
enum class WDT_WLDR { RESERVED = -1, offset = 0x2C, reset = 0 };
enum class WDT_WTGR { RESERVED = -1, offset = 0x30, reset = 0 };
enum class WDT_WWPS { RESERVED = -1, offset = 0x34, reset = 0 };
enum class WDT_WDLY { RESERVED = -1, offset = 0x44, reset = 0 };
enum class WDT_WSPR { RESERVED = -1, offset = 0x48, reset = 0 };
enum class WDT_WIRQSTATRAW { RESERVED = -1, offset = 0x54, reset = 0 };
enum class WDT_WIRQSTAT { RESERVED = -1, offset = 0x58, reset = 0 };
enum class WDT_WIRQENSET { RESERVED = -1, offset = 0x5C, reset = 0 };
enum class WDT_WIRQENCLR { RESERVED = -1, offset = 0x60, reset = 0 };

using WDT_WIDR_REG = offset_register<WDT_WIDR, 1>;
using WDT_WDSC_REG = offset_register<WDT_WDSC, 1>;
using WDT_WDST_REG = offset_register<WDT_WDST, 1>;
using WDT_WISR_REG = offset_register<WDT_WISR, 1>;
using WDT_WIER_REG = offset_register<WDT_WIER, 1>;
using WDT_WCLR_REG = offset_register<WDT_WCLR, 1>;
using WDT_WCRR_REG = offset_register<WDT_WCRR, 1>;
using WDT_WLDR_REG = offset_register<WDT_WLDR, 1>;
using WDT_WTGR_REG = offset_register<WDT_WTGR, 1>;
using WDT_WWPS_REG = offset_register<WDT_WWPS, 1>;
using WDT_WDLY_REG = offset_register<WDT_WDLY, 1>;
using WDT_WSPR_REG = offset_register<WDT_WSPR, 1>;
using WDT_WIRQSTATRAW_REG = offset_register<WDT_WIRQSTATRAW, 1>;
using WDT_WIRQSTAT_REG = offset_register<WDT_WIRQSTAT, 1>;
using WDT_WIRQENSET_REG = offset_register<WDT_WIRQENSET, 1>;
using WDT_WIRQENCLR_REG = offset_register<WDT_WIRQENCLR, 1>;
}

#endif