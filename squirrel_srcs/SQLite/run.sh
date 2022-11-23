export AFL_CUSTOM_MUTATOR_ONLY=1
export AFL_CUSTOM_MUTATOR_LIBRARY=`pwd`/custom_mutator.so
export AFL_DISABLE_TRIM=1
../../afl-fuzz -i fuzz_root/input -H fuzz_root/init_lib -o output -- ./harness
