#include <cstdint>

// AM335x Rev O 26.1.7.5.5.1 p.4988-4989
volatile unsigned char configuration_header_toc[] = {
    0,    0,    0,    4,                                        // Start
    0,    0,    0,    0xC,                                      // Size
    0,    0,    0,    0,                                        // Reserved
    0,    0,    0,    0,                                        // Reserved
    0,    0,    0,    0,                                        // Reserved
    'C',  'H',  'S',  'E',  'T', 'T', 'I', 'N', 'G', 'S', 0, 0, // Filename
    0xFF, 0xFF, 0xFF, 0xFF,                                     // Closing item
    0xFF, 0xFF, 0xFF, 0xFF,                                     // Closing item
    0xFF, 0xFF, 0xFF, 0xFF,                                     // Closing item
    0xFF, 0xFF, 0xFF, 0xFF,                                     // Closing item
    0xFF, 0xFF, 0xFF, 0xFF,                                     // Closing item
    0xFF, 0xFF, 0xFF, 0xFF,                                     // Closing item
    0xFF, 0xFF, 0xFF, 0xFF,                                     // Closing item
    0xFF, 0xFF, 0xFF, 0xFF,                                     // Closing item
};

// AM335x Rev O 26.1.7.5.5.1 p.4989
volatile unsigned char configuration_header_settings[] = {
    0xC0, 0xC0, 0xC0, 0xC1,                // Section keys
    0,                                     // Valid
    1,                                     // Version
    0,    0,    0,    0,    0, 0, 0, 0, 0, // Reserved
};

// AM335x Rev O 26.1.9.2 p.5007
volatile std::uint32_t size = 42;
volatile std::uint32_t destination = 43;
extern "C" void start() { size = size + destination; }