from ubuntu:22.04
LABEL maintainer="Squirrel"

# common config
RUN apt-get update
RUN apt-get -y install make cmake build-essential vim sudo git \
    clang libmysqlclient-dev ninja-build pkg-config clang-format \
    libpq-dev libyaml-cpp-dev lld python3-fire

RUN mkdir -p /home && \
    groupadd dobigthing && \
    useradd -l -K UMASK=0000 -d /home -g dobigthing dobigthing && \
    chown dobigthing:dobigthing /home

RUN	echo "dobigthing:dobigthing" | chpasswd && usermod -a -G sudo dobigthing
RUN chmod +w /etc/sudoers && \
    echo "%dobigthing   ALL=(ALL:ALL)NOPASSWD:ALL" >> /etc/sudoers && \
    chmod -w /etc/sudoers

# install mariadb-server
RUN apt-get -y install apt-transport-https curl software-properties-common gnutls-dev
RUN curl -o /etc/apt/trusted.gpg.d/mariadb_release_signing_key.asc \
    'https://mariadb.org/mariadb_release_signing_key.asc'
RUN echo "deb https://ftp.osuosl.org/pub/mariadb/repo/10.10/ubuntu jammy main" >> /etc/apt/sources.list
RUN echo "deb-src https://ftp.osuosl.org/pub/mariadb/repo/10.10/ubuntu jammy main" >> /etc/apt/sources.list
RUN apt-get update && apt-get -y build-dep mariadb

USER dobigthing
WORKDIR /home

RUN git clone https://github.com/Dobigthing666/Squirrel.git && \
    cd Squirrel && git submodule update --init && \
    cmake -S . -B build -DCMAKE_BUILD_TYPE=Release && \
    cmake --build build -j && \
    cd AFLplusplus/ && LLVM_CONFIG=llvm-config-14 make -j20

RUN git clone --depth=1 https://github.com/MariaDB/server.git mariadb && \
    mkdir bld && cd bld/ && \
    CC=/home/Squirrel/AFLplusplus/afl-clang-fast CXX=/home/Squirrel/AFLplusplus/afl-clang-fast++ cmake ../mariadb/ && \
    make -j20 && sudo cmake --install . --prefix /usr/local/mysql/

RUN sudo chown dobigthing:dobigthing /usr/local/mysql/ -R && \
    cd /usr/local/mysql/ && \
    scripts/mysql_install_db --user=dobigthing

# Get map size and save it to /tmp/mapsize
RUN AFL_DEBUG=1 __AFL_SHM_ID=1234 /usr/local/mysql/bin/mariadbd 2>&1 | tail -n 1 | cut -d"," -f8 | cut -d" " -f 3 > /tmp/mapsize
WORKDIR /home/Squirrel/scripts/utils
ENTRYPOINT AFL_MAP_SIZE=$(cat /tmp/mapsize) python3 run.py mariadb ../../data/fuzz_root/mysql_input/
