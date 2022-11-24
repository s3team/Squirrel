export AFL_CUSTOM_MUTATOR_ONLY=1
export AFL_CUSTOM_MUTATOR_LIBRARY=`pwd`/build/libsqlite_mutator.so
export AFL_DISABLE_TRIM=1
export AFL_AUTORESUME=1
../../afl-fuzz -i fuzz_root/input -H ./config.yml -o output -S $1 -- ./harness
