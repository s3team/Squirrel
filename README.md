# Squirrel, a coverage-guided DBMS fuzzer.
[![build](https://github.com/Changochen/Squirrel/actions/workflows/build.yml/badge.svg)](https://github.com/Changochen/Squirrel/actions/workflows/build.yml)

`Squirrel` is a fuzzer for database managment systems (DBMSs).

`Squirrel` was first built on [AFL](https://github.com/google/AFL) and then migrated to [AFLplusplus](https://github.com/AFLplusplus/AFLplusplus) to enjoy the improvement of state-of-the-art fuzzing strategies.

## Feature
TODO

## Currently supported DBMSs
1. SQLite
2. PostgreSQL
3. MySQL
4. MariaDB

## Build Instruction

### Prerequisite

For ubuntu:
```
sudo apt install libmysqlclient-dev cmake ninja-build clang pkg-config clang-format libpq-dev
```

### Build Squirrel
1. Clone this repo and run `git submodule update --init`.
2. `cmake -S . -B build -DCMAKE_BUILD_TYPE=Release`.
3. `cmake --build build -j`, the binaries are in `build/`.


### Build AFLplusplus and DBMSs
1. Build aflplusplus.
2. Use `afl-cc` and `afl-c++` to instrument your database.


## Run

### Mormal Mode
TODO

### Client/Server Mode
TODO

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
