import libtmux
import re
import time
import os

server = libtmux.Server()
session = server.new_session(session_name="fuzzing")
create_database_window = session.new_window(attach=False, window_name="create_database")
pane = create_database_window.attached_pane

pane.send_keys("cd /usr/local/mysql/")
pane.send_keys("/usr/local/mysql/bin/mysqld --basedir=/usr/local/mysql --datadir=/usr/local/mysql/data --log-error=fuckerr.err --pid-file=fuckpid.pid &")
time.sleep(10)
create_database_window_client = session.new_window(attach=False, window_name="create_database_client")
pane_client = create_database_window_client.attached_pane
pane_client.send_keys("/usr/local/mysql/bin/mysql -u root -e \"create database if not exists test1; create database if not exists fuck;\"")
time.sleep(5)
#create_database_window.kill_window()
#create_database_window_client.kill_window()
os.system("kill -9 `pidof mysqld`")

afl_window = session.new_window(attach=False, window_name="afl")
afl_pane = afl_window.attached_pane
afl_pane.send_keys("export LD_LIBRARY_PATH=/home/mysql/mysql-server/bld_orignal/lib")
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
server_pane.send_keys("/usr/local/mysql/bin/mysqld --basedir=/usr/local/mysql --datadir=/usr/local/mysql/data --log-error=fuckerr.err --pid-file=fuckpid.pid --max_statement_time=1")

afl_pane.send_keys("")
time.sleep(20)
