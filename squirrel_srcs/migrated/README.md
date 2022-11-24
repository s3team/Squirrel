1. Write a driver that works similarly as the afl-proxy:
    a. start the forkserver so that it can communitate with afl-fuzz
    b. start the db server in background, set up the shared memory.
    c. Every time it receives a test case from afl-fuzz, send it to the db
    d. Check the status of the db, report it to the afl-fuzz

Pros:
1. Client and mutator are decoupled.
2. No need to modify the afl-fuzz.
3. Can restart the db automatically.

Cons:
1. Hard to monitor the running status.

