FROM ubuntu:18.04
MAINTAINER "dobigthing"

RUN apt-get -y update && apt-get -y upgrade
RUN apt-get -y install gdb bison flex git make cmake build-essential gcc-multilib g++-multilib xinetd libreadline-dev zlib1g-dev 
RUN useradd -ms /bin/bash mysql
RUN apt-get -y install clang libssl-dev libncurses5-dev clang-9
RUN apt install pkg-config

USER mysql
WORKDIR /home/mysql
RUN git clone https://github.com/google/AFL.git

WORKDIR /home/mysql/AFL 
RUN sed -i  's/#define MAP_SIZE_POW2       16/#define MAP_SIZE_POW2       18/' config.h
RUN make
#WORKDIR /home/mysql/AFL/llvm_mode
#RUN make 

WORKDIR /home/mysql
RUN git clone https://github.com/MariaDB/server.git mariadb
RUN mkdir bld
USER root
RUN apt-get -y install software-properties-common devscripts equivs
RUN apt-key adv --recv-keys --keyserver hkp://keyserver.ubuntu.com:80 0xF1656F24C74CD1D8
RUN add-apt-repository --update --yes --enable-source 'deb [arch=amd64] http://nyc2.mirrors.digitalocean.com/mariadb/repo/10.3/ubuntu '$(lsb_release -sc)' main'
RUN apt-get -y update
RUN apt-get -y build-dep mariadb-10.3

USER mysql
WORKDIR /home/mysql/bld
ENV CC=/home/mysql/AFL/afl-clang
ENV CXX=/home/mysql/AFL/afl-clang++
#ENV LLVM_CONFIG=llvm-config-6
#ENTRYPOINT bash
RUN cmake ../mariadb -DWITH_ASAN=ON && make -j20
USER root
RUN make install


USER mysql
WORKDIR /home/mysql
RUN git clone https://github.com/mysql/mysql-server.git
RUN mkdir /home/mysql/fuzzing/
RUN mkdir /home/mysql/mysql-server/bld_orignal/ 
WORKDIR /home/mysql/mysql-server/bld_orignal/
ENV CC=
ENV CXX=
RUN cmake .. -DDOWNLOAD_BOOST=1 -DWITH_BOOST=../boost -DCPACK_MONOLITHIC_INSTALL=1 && make -j20

USER root 
RUN chown -R mysql /usr/local/mysql/
WORKDIR /usr/local/mysql/
RUN scripts/mysql_install_db --user=mysql --auth-root-authentication-method=normal
RUN apt-get -y update
RUN apt-get install -y vim tmux python-pip

USER mysql
COPY afl-fuzz /home/mysql/fuzzing/afl-fuzz
COPY init_lib/ /home/mysql/fuzzing/fuzz_root/init_lib/
COPY input/ /home/mysql/fuzzing/fuzz_root/crashes/
COPY init_lib/ /home/mysql/fuzzing/fuzz_root/mysql_initlib/
COPY global_data_lib_mysql /home/mysql/fuzzing/fuzz_root/
COPY safe_generate_type_mysql /home/mysql/fuzzing/fuzz_root/
COPY run.py /home/mysql/fuzzing/fuzz_root/run.py

USER root
RUN chown -R mysql:mysql /home/mysql/fuzzing/
ENV LC_ALL="en_US.UTF-8"
USER mysql
RUN pip install libtmux
WORKDIR /home/mysql/fuzzing/fuzz_root
ENTRYPOINT bash
#ENTRYPOINT python run.py

#ENTRYPOINT ../afl-fuzz -t 2000 -m 2000 -i ./crashes -o ../output /usr/local/pgsql/bin/postgres --single -D /usr/local/pgsql/data main 

