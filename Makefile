include ../automation/compiler.mk 
include ../automation/diag.mk 
include ../automation/lang.mk

bootimagetest: bootimagetest.cpp experiment.ld
	$(CC) $(LANG_VER) $(DIAG_FLAGS) -ffreestanding -nostartfiles -nodefaultlibs -fno-rtti -static -o bootimagetest -T experiment.ld bootimagetest.cpp