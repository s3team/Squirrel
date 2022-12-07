# Squirrel, a coverage-guided DBMS fuzzer.
[![build](https://github.com/s3team/Squirrel/actions/workflows/build.yml/badge.svg)](https://github.com/s3team/Squirrel/actions/workflows/build.yml)

`Squirrel` is a fuzzer for database managment systems (DBMSs).

`Squirrel` was first built on [AFL](https://github.com/google/AFL) and then migrated to [AFLplusplus](https://github.com/AFLplusplus/AFLplusplus) to enjoy the improvement of state-of-the-art fuzzing strategies.

## Currently supported DBMSs
1. SQLite
2. PostgreSQL
3. MySQL
4. MariaDB

## Build Instruction

### Prerequisite

For ubuntu 22.04:
```
sudo apt install libmysqlclient-dev cmake ninja-build clang pkg-config clang-format libpq-dev libyaml-cpp-dev
```

### Build Squirrel
1. Clone this repo and run `git submodule update --init`.
2. `cmake -S . -B build -DCMAKE_BUILD_TYPE=Release -Wno-dev`. If you want to compile only the mutator for the specific databases, add `-DXXXXX=ON`, `XXXXX` can be `SQLITE`, `MYSQL` and `POSTGRESQL`. `Mariadb` share the same interface with `MySQL`.
3. `cmake --build build -j`, the binaries are in `build/`.


### Build AFLplusplus and DBMSs
1. Build aflplusplus: `cd AFLplusplus && make -j && cd ..`.
2. Use `afl-cc` and `afl-c++` to instrument your database.


## Run

### Configuration

1. Set up a configuration file in `yaml`. Examples can be found in `data/*.yml`.
2. Set the enviroment variable 
```bash
export SQUIRREL_CONFIG=/path/to/config.yml
export AFL_CUSTOM_MUTATOR_ONLY=1
export AFL_CUSTOM_MUTATOR_LIBRARY= REPO_DIR/build/libxxxx_mutator.so
export AFL_DISABLE_TRIM=1
```

### Normal Mode (SQLite)

Same as AFLplusplus: `afl-fuzz -i input -o output -- sqlite_harness`.

### Client/Server Mode (MySQL/MariaDB/PostgreSQL)

(To improve)
1. `export AFL_FORKSRV_INIT_TMOUT=1000000`
2. Run `afl-fuzz -i input -o output -- ./build/db_driver`, it will print the share memory id and wait for 30 seconds.
3. Start the databse server with `export __AFL_SHM_ID=xxxx`.

## Publications
<a href="https://arxiv.org/pdf/2006.02398.pdf"><img src="https://huhong789.github.io/images/squirrel.png" align="right" width="250"></a>

More details can be found in our [CCS 2020 paper](http://arxiv.org/abs/2006.02398). And the bugs found by `Squirrel` can be found in [here](https://github.com/s3team/Squirrel/wiki/Bug-List).

```
SQUIRREL: Testing Database Management Systems with Language Validity and Coverage Feedback

@inproceedings{zhong:squirrel,
  title        = {{SQUIRREL: Testing Database Management Systems with Language Validity and Coverage Feedback}},
  author       = {Rui Zhong and Yongheng Chen and Hong Hu and Hangfan Zhang and Wenke Lee and Dinghao Wu},
  booktitle    = {Proceedings of the 27th ACM Conference on Computer and Communications Security (CCS)},
  month        = nov,
  year         = 2020,
  address      = {Orlando, USA},
}
```

## Special Thanks
1. Roel Van de Paar ([@mariadb-RoelVandePaar](https://github.com/mariadb-RoelVandePaar)): For his helpful feedback for improving Squirrel.

