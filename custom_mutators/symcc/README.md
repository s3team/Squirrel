# custum mutator: symcc

This uses the symcc to find new paths into the target.

Note that this is a just a proof of concept example! It is better to use
the fuzzing helpers of symcc, symqemu, Fuzzolic, etc. rather than this.

To use this custom mutator follow the steps in the symcc repository 
[https://github.com/eurecom-s3/symcc/](https://github.com/eurecom-s3/symcc/) 
on how to build symcc and how to instrument a target binary (the same target
that you are fuzzing).

The target program compiled with symcc has to be pointed to with the
`SYMCC_TARGET` environment variable.

just type `make` to build this custom mutator.

```SYMCC_TARGET=/prg/to/symcc/compiled/target AFL_CUSTOM_MUTATOR_LIBRARY=custom_mutators/symcc/symcc-mutator.so afl-fuzz ...```
