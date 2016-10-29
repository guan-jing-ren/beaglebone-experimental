include ../automation/compiler.mk 
include ../automation/diag.mk 
include ../automation/lang.mk

LINK_FLAGS = -ffreestanding -nostartfiles -nodefaultlibs -fno-rtti -static -T experiment.ld
DEBUG_FLAGS = -gsplit-dwarf -g3 -gdwarf-4

bootimagetest: bootimagetest.cpp experiment.ld
	$(CC) $(LANG_VER) $(DIAG_FLAGS) $(LINK_FLAGS) $(DEBUG_FLAGS) -o $@ bootimagetest.cpp