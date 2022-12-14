from ubuntu:22.04
LABEL maintainer="Squirrel"

ENV DEBIAN_FRONTEND noninteractive

# common config
RUN apt-get update
RUN apt-get -y install make cmake build-essential vim sudo git tcl8.6 tcl8.6-tdbc-sqlite3\
    clang ninja-build pkg-config clang-format \
    libpq-dev libyaml-cpp-dev lld llvm

RUN mkdir -p /home && \
    groupadd dobigthing && \
    useradd -l -K UMASK=0000 -d /home -g dobigthing dobigthing && \
    chown dobigthing:dobigthing /home

RUN	echo "dobigthing:dobigthing" | chpasswd && usermod -a -G sudo dobigthing
RUN chmod +w /etc/sudoers && \
    echo "%dobigthing   ALL=(ALL:ALL)NOPASSWD:ALL" >> /etc/sudoers && \
    chmod -w /etc/sudoers

USER dobigthing
WORKDIR /home

RUN git clone https://github.com/s3team/Squirrel.git && \
    cd Squirrel && git submodule update --init && \
    cmake -S . -B build -DCMAKE_BUILD_TYPE=Release -DSQLITE=ON && \
    cmake --build build -j && \
    cd AFLplusplus/ && LLVM_CONFIG=llvm-config-14 make -j20

ARG CFLAGS="-DSQLITE_MAX_LENGTH=128000000 -DSQLITE_MAX_SQL_LENGTH=128000000 -DSQLITE_MAX_MEMORY=25000000 -DSQLITE_PRINTF_PRECISION_LIMIT=1048576 -DSQLITE_DEBUG=1 -DSQLITE_MAX_PAGE_COUNT=16384"

RUN git clone https://github.com/sqlite/sqlite sqlite3/ && cd sqlite3 && mkdir bld

WORKDIR /home/sqlite3/bld

ENV CC=/home/Squirrel/AFLplusplus/afl-cc
ENV CXX=/home/Squirrel/AFLplusplus/afl-c++
RUN ../configure && make -j && make sqlite3.c

RUN $CC $CFLAGS -I. -c \
    /home/sqlite3/test/ossfuzz.c -o /home/sqlite3/test/ossfuzz.o
RUN $CC $CFLAGS -I. -c \
    /home/sqlite3/test/ossshell.c -o /home/sqlite3/test/ossshell.o

RUN $CXX $CXXFLAGS \
    /home/sqlite3/test/ossfuzz.o /home/sqlite3/test/ossshell.o -o /home/ossfuzz \
   ./sqlite3.o -ldl -pthread

ENTRYPOINT bash
