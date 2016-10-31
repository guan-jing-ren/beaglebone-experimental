#include <cstdint>

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
        0x4030B800 - 0x402F0400;            // AM335x Rev O 26.1.3.2 p.4957
    std::uint32_t destination = 0x402F0400; // AM335x Rev O 26.1.3.2 p.4957
  } gp_header;

} volatile boot_header;

namespace GPIO {
namespace detail {
template <std::uint32_t O, std::uint32_t R = 0> struct pins {
  enum class spec : std::uint32_t {
    _0,
    _1,
    _2,
    _3,
    _4,
    _5,
    _6,
    _7,
    _8,
    _9,
    _10,
    _11,
    _12,
    _13,
    _14,
    _15,
    _16,
    _17,
    _18,
    _19,
    _20,
    _21,
    _22,
    _23,
    _24,
    _25,
    _26,
    _27,
    _28,
    _29,
    _30,
    _31,
    offset = O,
    reset = R
  };
};
}

enum class REVISION {
  MINOR,
  CUSTOM,
  MAJOR,
  RTL,
  FUNC,
  RESERVED = -1,
  SCHEME,
  offset = 0,
  reset = 0x50600801
};
enum class SYSCONFIG {
  AUTOIDLE,
  SOFTRESET,
  ENAWAKEUP,
  IDLEMODE,
  RESERVED = -1,
  offset = 0x10,
  reset = 0
};
enum class EOI { DMAEvent_Ack, RESERVED, offset = 0x20, reset = 0 };
using IRQSTATUS_RAW_0 = detail::pins<0x24>::spec;
using IRQSTATUS_RAW_1 = detail::pins<0x28>::spec;
using IRQSTATUS_0 = detail::pins<0x2C>::spec;
using IRQSTATUS_1 = detail::pins<0x30>::spec;
using IRQSTATUS_SET_0 = detail::pins<0x34>::spec;
using IRQSTATUS_SET_1 = detail::pins<0x38>::spec;
using IRQSTATUS_CLR_0 = detail::pins<0x3C>::spec;
using IRQSTATUS_CLR_1 = detail::pins<0x40>::spec;
using IRQWAKEN_0 = detail::pins<0x44>::spec;
using IRQWAKEN_1 = detail::pins<0x48>::spec;
enum class SYSSTATUS { RESETDONE, RESERVED = -1, offset = 0x114, reset = 0 };
enum class CTRL {
  DISABLEMODULE,
  GATINGRATION,
  RESERVED = -1,
  offset = 0x130,
  reset = 0
};
using OE = detail::pins<0x134, 0xFFFFFFFF>::spec;
using DATAIN = detail::pins<0x138>::spec;
using DATAOUT = detail::pins<0x13C>::spec;
using LEVELDETECT_0 = detail::pins<0x140>::spec;
using LEVELDETECT_1 = detail::pins<0x144>::spec;
using RISINGDETECT_0 = detail::pins<0x148>::spec;
using FALLINGDETECT_1 = detail::pins<0x14C>::spec;
using DEBOUNCENABLE = detail::pins<0x150>::spec;
enum class DEBOUNCINGTIME { DEBOUNCETIME, offset = 0x154, reset = 0 };
using CLEARDATAOUT = detail::pins<0x190>::spec;
using SETDATAOUT = detail::pins<0x194>::spec;
}

extern "C" void start() {}