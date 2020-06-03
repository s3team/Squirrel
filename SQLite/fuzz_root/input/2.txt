CREATE TABLE t0(c0 AS ((c4, 9, c4) < ('a', c1, 1)), c1 AS (1) NOT NULL, c2, c3 CHECK  ((x'56', 0) = (c1, 0)), c4 NOT NULL);
PRAGMA integrity_check;
INSERT INTO t0 VALUES (0, 0, 0), (0, 0, 0);
