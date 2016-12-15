#ifndef _CLOCKS_HPP
#define _CLOCKS_HPP

namespace clocks {
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