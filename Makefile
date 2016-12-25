include ../automation/diag.mk 
include ../automation/lang.mk

CC = /home/kykwan/gcc-arm-none-eabi-5_4-2016q3/bin/arm-none-eabi-g++ -O3
COPY = ~/gcc-arm-none-eabi-5_4-2016q3/bin/arm-none-eabi-objcopy
LINK_FLAGS = -ffreestanding -nostartfiles -nodefaultlibs -fno-rtti -static -T experiment.ld
DEBUG_FLAGS = -gsplit-dwarf -g3 -gdwarf-4 -fdump-translation-unit
ARCH_FLAGS =  -march=armv7-a -mtune=cortex-a8 -mlittle-endian

bootimagetest: bootimagetest.cpp ../fundamental-machines/basic_register.hpp offset_register.hpp gpio.hpp uart.hpp clocks.hpp experiment.ld
	$(CC) $(LANG_VER) $(DIAG_FLAGS) $(LINK_FLAGS) $(DEBUG_FLAGS) $(ARCH_FLAGS) -o $@ bootimagetest.cpp

bootimagetest.bin: bootimagetest
	# $(COPY) -O binary -j .data -j .text --pad-to 111616 bootimagetest $@
	$(COPY) -O binary -j .text bootimagetest $@