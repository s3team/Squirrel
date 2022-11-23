mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))
ROOT_DIR:=$(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))
squirrel_path := ${ROOT_DIR}/../../

all:
	@echo ${squirrel_path}
	clang++ -fsanitize=address -g -O3 -I ${squirrel_path}/include -shared -fPIC -o custom_mutator.so custom_mutator.cc src/*.cpp ./parser/bison_parser.cpp  ./parser/flex_lexer.cpp
