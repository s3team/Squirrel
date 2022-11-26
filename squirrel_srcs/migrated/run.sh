export AFL_CUSTOM_MUTATOR_ONLY=1
export AFL_CUSTOM_MUTATOR_LIBRARY=`pwd`/build/libmysql_mutator.so
#export AFL_CUSTOM_MUTATOR_LIBRARY=`pwd`/build/libsqlite_mutator.so
export AFL_DISABLE_TRIM=1
export AFL_AUTORESUME=1
#export AFL_DEBUG=1
#export AFL_NO_UI=1
../../afl-fuzz -i fuzz_root/mysql_input -H ./config_test.yml -o output -S $1 -- ./build/db_driver ./config_test.yml
