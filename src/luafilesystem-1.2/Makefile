# $Id: Makefile,v 1.26 2005/06/27 17:06:01 tomas Exp $

T= lfs
V= 1.2
CONFIG= ./config

include $(CONFIG)_include.$(PLATFORM)
include $(CONFIG)

SRCS= src/$T.c
OBJS= src/$T.o


lib: src/$(LIBNAME)

src/$(LIBNAME): $(OBJS)
	$(CC) $(CFLAGS) $(LIB_OPTION) -o src/$(LIBNAME) $(OBJS)

install: src/$(LIBNAME)
	mkdir -p $(LUA_LIBDIR)
	cp src/$(LIBNAME) $(LUA_LIBDIR)
	cd $(LUA_LIBDIR); rm $T.so; ln -s $(LIBNAME) $T.so

clean:
	rm -f src/$(LIBNAME) $(OBJS)
