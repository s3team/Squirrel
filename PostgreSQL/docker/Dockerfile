FROM ubuntu:16.04
MAINTAINER "dobigthing"

RUN apt-get -y update && apt-get -y upgrade
RUN apt-get -y install bison flex git make cmake build-essential gcc-multilib g++-multilib xinetd libreadline-dev zlib1g-dev 
RUN apt-get -y install gdb vim tmux python-pip
RUN useradd -ms /bin/bash postgres
USER postgres
RUN pip install libtmux

WORKDIR /home/postgres
RUN git clone https://github.com/google/AFL.git

WORKDIR /home/postgres/AFL
RUN sed -i  's/#define MAP_SIZE_POW2       16/#define MAP_SIZE_POW2       18/' config.h
RUN make

WORKDIR /home/postgres
RUN git clone https://github.com/postgres/postgres.git

WORKDIR /home/postgres/postgres/ 
RUN mkdir /home/postgres/postgres/bld
run mkdir /home/postgres/postgres/original_bld

USER root 
WORKDIR /home/postgres/postgres/bld
ENV CXX=/home/postgres/AFL/afl-g++
ENV CC=/home/postgres/AFL/afl-gcc
RUN ../configure && make -j20 && make install
RUN mkdir /usr/local/pgsql/data && chown postgres /usr/local/pgsql/data

USER postgres
WORKDIR /home/postgres/postgres/original_bld
ENV CC=
ENV CXX=
RUN ../configure && make -j20
RUN make install DESTDIR=/home/postgres/original_bin

RUN /usr/local/pgsql/bin/initdb -D /usr/local/pgsql/data 
RUN mkdir /home/postgres/fuzzing/
RUN mkdir /home/postgres/fuzzing/fuzz_root
COPY afl-fuzz /home/postgres/fuzzing/afl-fuzz
COPY init_lib/ /home/postgres/fuzzing/fuzz_root/postgre_initlib/
COPY safe_generate_type /home/postgres/fuzzing/fuzz_root/
COPY global_data_lib /home/postgres/fuzzing/fuzz_root/
COPY input/ /home/postgres/fuzzing/fuzz_root/crashes/
COPY create.sh /home/postgres/fuzzing/fuzz_root/
COPY run.py /home/postgres/fuzzing/fuzz_root/

USER root
RUN chmod +x /home/postgres/fuzzing/fuzz_root/create.sh
RUN chown -R postgres:postgres /home/postgres/fuzzing/

USER postgres
RUN /home/postgres/fuzzing/fuzz_root/create.sh
WORKDIR /home/postgres/fuzzing/fuzz_root
RUN sed -i 's/\#statement\_timeout = 0/statement\_timeout = 10000/' /usr/local/pgsql/data/postgresql.conf
ENTRYPOINT bash
#ENTRYPOINT ../afl-fuzz -t 2000 -m 2000 -i ./crashes -o ../output /usr/local/pgsql/bin/postgres --single -D /usr/local/pgsql/data main 

