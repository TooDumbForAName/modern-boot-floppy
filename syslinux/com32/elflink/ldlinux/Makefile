## -----------------------------------------------------------------------
##
##   Copyright 2011-2013 Intel Corporation - All Rights Reserved
##
##   This program is free software; you can redistribute it and/or modify
##   it under the terms of the GNU General Public License as published by
##   the Free Software Foundation, Inc., 53 Temple Place Ste 330,
##   Boston MA 02111-1307, USA; either version 2 of the License, or
##   (at your option) any later version; incorporated herein by reference.
##
## -----------------------------------------------------------------------

topdir = ../../..
MAKEDIR = $(topdir)/mk
include $(MAKEDIR)/elf.mk

CFLAGS += -I$(topdir)/core/elflink -I$(topdir)/core/include -I$(topdir)/com32/lib -fvisibility=hidden
LIBS = --whole-archive $(com32)/lib/libcom32min.a

BTARGET = ldlinux.c32

all: $(BTARGET) ldlinux_lnx.a

ldlinux.elf : ldlinux.o cli.o readconfig.o refstr.o colors.o getadv.o \
		adv.o execute.o chainboot.o kernel.o get_key.o \
		advwrite.o setadv.o loadhigh.o msg.o
	$(LD) $(LDFLAGS) -soname $(patsubst %.elf,%.c32,$(@F)) -o $@ $^ $(LIBS)

LNXCFLAGS += -D__export='__attribute__((visibility("default")))'
LNXLIBOBJS = get_key.lo
ldlinux_lnx.a: $(LNXLIBOBJS)
	rm -f $@
	$(AR) cq $@ $(LNXLIBOBJS)
	$(RANLIB) $@

tidy dist:
	rm -f *.o *.lo *.a *.lst .*.d 

clean: tidy
	rm -f *.lss *.lnx *.com

spotless: clean
	rm -f *~ \#* $(BTARGET)

install: all
	mkdir -m 755 -p $(INSTALLROOT)$(AUXDIR)
	install -m 644 $(BTARGET) $(INSTALLROOT)$(AUXDIR)


-include .*.d
