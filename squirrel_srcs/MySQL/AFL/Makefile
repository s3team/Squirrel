#
# american fuzzy lop - makefile
# -----------------------------
#
# Written and maintained by Michal Zalewski <lcamtuf@google.com>
# 
# Copyright 2013, 2014, 2015, 2016, 2017 Google LLC All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at:
# 
#   http://www.apache.org/licenses/LICENSE-2.0
#

PROGNAME    = afl
VERSION     = $(shell grep '^\#define VERSION ' config.h | cut -d '"' -f2)

MYSQL_SRC_PATH = /mnt/raidhhd/mysql-server#REPLACE WITH YOUR PATH
MYSQL_INSTALL_PATH =  /mnt/raidhhd/mysql-server/bld_no_asan#REPLACE WITH YOUR PATH
MYSQL_LIB_PATH   = $(MYSQL_INSTALL_PATH)/lib 
MYSQL_HEADER_PATH = $(MYSQL_SRC_PATH)/include
MYSQL_INSTALL_HEADER_PATH = $(MYSQL_INSTALL_PATH)/include
PREFIX     ?= /usr/local
BIN_PATH    = $(PREFIX)/bin
HELPER_PATH = $(PREFIX)/lib/afl
DOC_PATH    = $(PREFIX)/share/doc/afl
MISC_PATH   = $(PREFIX)/share/afl
DEPEN_PATH  = ../src/*.cpp  ../parser/bison_parser.cpp ../parser/flex_lexer.cpp

# PROGS intentionally omit afl-as, which gets installed elsewhere.

PROGS       = afl-fuzz

CC         = g++
CFLAGS     ?= -fpermissive --std=c++17
CFLAGS     += -g -w \
	      -DAFL_PATH=\"$(HELPER_PATH)\" -DDOC_PATH=\"$(DOC_PATH)\" \
	      -DBIN_PATH=\"$(BIN_PATH)\"

ifneq "$(filter Linux GNU%,$(shell uname))" ""
  LDFLAGS  += -ldl
endif

ifeq "$(findstring clang, $(shell $(CC) --version 2>/dev/null))" ""
  TEST_CC   = afl-gcc
else
  TEST_CC   = afl-clang
endif

COMM_HDR    = alloc-inl.h config.h debug.h types.h

all: afl-fuzz


afl-fuzz: afl-fuzz.c $(COMM_HDR)
	$(CC) $(CFLAGS) -L$(MYSQL_LIB_PATH) -I$(MYSQL_HEADER_PATH) -I$(MYSQL_INSTALL_HEADER_PATH) -g $@.c $(DEPEN_PATH) -o $@ $(LDFLAGS)  -lmysqlclient 

.NOTPARALLEL: clean

clean:
	rm -f $(PROGS) afl-as as afl-g++ afl-clang afl-clang++ *.o *~ a.out core core.[1-9][0-9]* *.stackdump test .test test-instr .test-instr0 .test-instr1 qemu_mode/qemu-2.10.0.tar.bz2 afl-qemu-trace