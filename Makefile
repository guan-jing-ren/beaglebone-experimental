include ../automation/compiler.mk 
include ../automation/diag.mk 
include ../automation/lang.mk

bootimagetest: bootimagetest.cpp
	$(CC) $(LANG_VER) $(DIAG_FLAGS) -ffreestanding -nostartfiles -nodefaultlibs -fno-rtti -static -o bootimagetest bootimagetest.cpp