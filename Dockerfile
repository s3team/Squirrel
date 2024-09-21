FROM ubuntu:22.04
LABEL maintainer="Squirrel"

# 공통 설정과 기본 패키지 설치 (변경이 거의 없으므로 캐시 활용 가능)
RUN apt-get update && \
    apt-get -y install make cmake build-essential vim sudo git \
    clang libmysqlclient-dev ninja-build pkg-config clang-format \
    libpq-dev libyaml-cpp-dev lld llvm bison python3-fire apt-transport-https \
    curl software-properties-common gnutls-dev ltrace

# 사용자 및 그룹 생성 (변경이 적으므로 캐시 사용 가능)
RUN mkdir -p /home && \
    groupadd QueryHouse && \
    useradd -l -K UMASK=0000 -d /home -g QueryHouse QueryHouse && \
    chown QueryHouse:QueryHouse /home && \
    echo "QueryHouse:QueryHouse" | chpasswd && \
    usermod -a -G sudo QueryHouse && \
    chmod +w /etc/sudoers && \
    echo "%QueryHouse   ALL=(ALL:ALL)NOPASSWD:ALL" >> /etc/sudoers && \
    chmod -w /etc/sudoers

# QueryHouse 사용자로 전환
USER QueryHouse
WORKDIR /home

# MySQL 소스 클론 (변경되지 않으므로 캐시 사용 가능)
# RUN git clone --depth=1 https://github.com/mysql/mysql-server.git mysql
COPY --chown=QueryHouse:QueryHouse ./mysql /home/mysql

# AFL++ 빌드 (MySQL 컴파일에 필요하므로 먼저 수행)
WORKDIR /home/Squirrel
# RUN git clone --depth=1 https://github.com/AFLplusplus/AFLplusplus.git
COPY --chown=QueryHouse:QueryHouse ./AFLplusplus /home/Squirrel/AFLplusplus
WORKDIR /home/Squirrel/AFLplusplus
RUN LLVM_CONFIG=llvm-config-14 make -j

# MySQL 빌드 (AFL 설정 이후에 실행)
RUN mkdir /home/Squirrel/bld
WORKDIR /home/Squirrel/bld
RUN CC=/home/Squirrel/AFLplusplus/afl-clang-fast CXX=/home/Squirrel/AFLplusplus/afl-clang-fast++ \
    cmake /home/mysql/ -DDOWNLOAD_BOOST=1 -DWITH_BOOST=../boost -DWITH_DEBUG=1 -DCPACK_MONOLITHIC_INSTALL=1 -DWITH_UNIT_TESTS=OFF

RUN make -j
RUN sudo cmake --install . --prefix /usr/local/mysql/

# MySQL 초기화 및 권한 설정
RUN sudo chown QueryHouse:QueryHouse /usr/local/mysql/ -R
WORKDIR /usr/local/mysql/
RUN mkdir mysql-files && chmod 750 mysql-files
RUN AFL_IGNORE_PROBLEMS=1 bin/mysqld --initialize-insecure --user=QueryHouse

# AFL 맵 사이즈 계산 (변경되지 않는 부분이므로 캐시 활용 가능)
RUN AFL_DEBUG=1 __AFL_SHM_ID=1234 /usr/local/mysql/bin/mysqld 2>&1 | grep "__afl_map_size" | tail -n 1 | cut -d"," -f8 | cut -d" " -f 3 > /tmp/mapsize

# Squirrel 관련 작업 (변경이 자주 발생할 수 있는 부분을 마지막에 배치)
WORKDIR /home/Squirrel

# Squirrel 폴더 복사 (이 부분은 자주 변경되므로 캐시 무효화 발생)
COPY --chown=QueryHouse:QueryHouse ./Squirrel /home/Squirrel

# Squirrel 빌드 (이 부분도 자주 변경되므로 하단에 배치)
RUN git submodule update --init
RUN cmake -S . -B build -DCMAKE_BUILD_TYPE=Release -Wno-dev -DMYSQL=ON
RUN cmake --build build -j

# 엔트리포인트 설정
WORKDIR /home/Squirrel/scripts/utils
ENTRYPOINT AFL_IGNORE_PROBLEMS=1 AFL_MAP_SIZE=$(cat /tmp/mapsize) python3 run.py mysql ../../data/fuzz_root/mysql_input/
