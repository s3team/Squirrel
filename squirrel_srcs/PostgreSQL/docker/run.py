import libtmux
import re
import time
import os

server = libtmux.Server()
session = server.new_session(session_name="fuzzing")
create_database_window = session.new_window(attach=False, window_name="create_database")
pane = create_database_window.attached_pane

afl_window = session.new_window(attach=False, window_name="afl")
afl_pane = afl_window.attached_pane
afl_pane.send_keys("export LD_LIBRARY_PATH=/home/postgres/original_bin/usr/local/pgsql/lib/")
afl_pane.send_keys("../afl-fuzz -i crashes -o ../fuzz_output aaa")
time.sleep(15)
result = afl_pane.cmd("capture-pane", "-p").stdout

shm_str = ""
for s in result:
    if(s.startswith("SHM_ENV_VAR")):
            shm_str = s[s.find(":")+2:]

print shm_str
env_str = "export __AFL_SHM_ID=%s" % shm_str

server_window = session.new_window(attach=False, window_name="mysqld")
server_pane = server_window.attached_pane
server_pane.send_keys(env_str)
server_pane.send_keys("/usr/local/pgsql/bin/postgres -D /usr/local/pgsql/data")

afl_pane.send_keys("")
time.sleep(10)
