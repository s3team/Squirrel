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

PGSQL_INSTALL_PATH = /mnt/raidhhd/postgrebin_no_instru# Replace with your own path
PGSQL_LIB_PATH = $(PGSQL_INSTALL_PATH)/usr/local/pgsql/lib
PGSQL_INCLUDE_PATH = $(PGSQL_INSTALL_PATH)/usr/local/pgsql/include
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

COMM_HDR    = alloc-inl.h config.h debug.h types.h

all: $(PROGS)

afl-fuzz: afl-fuzz.c $(COMM_HDR)
	$(CC) $(CFLAGS) -I$(PGSQL_INCLUDE_PATH) -L$(PGSQL_LIB_PATH) -g $@.c $(DEPEN_PATH) -o $@ $(LDFLAGS) -ldl -lpq -pg 

clean:
	rm -f afl-fuzz
