## Squirrel


Squirrel is a fuzzer that aims at finding memory corruption issues in database managment systems (DBMSs). It is built on [AFL](https://github.com/google/AFL). More details can be found in our [CCS 2020 paper])(https://changochen.github.io/publication/squirrel_ccs2020.pdf).

Currently supported DBMSs:
1. SQLite
2. PostgreSQL
3. MySQL
4. MariaDB

This repo is imcomplete yet.

## Build Instruction
`Requirements:` Headers and libary of `MySQL`, `PostgreSQL` and `MariaDB` if you want to test them.

```
git clone 
cd Squirrel/DBNAME/AFL
make
```

## RUN
```
SQLite:

cd fuzz_root
./afl-fuzz -i input -o output -- /path/to/sqlite3 --bail

Others: to do
```
