"""
Run a fuzzing instance.
"""
import os
import fire
import uuid
from pathlib import Path

DBMS = ["sqlite", "mysql", "mariadb", "postgresql"]
ROOTPATH = Path(os.path.dirname(os.path.realpath(__file__))).parent.parent

def get_mutator_so_path(database):
    return f"{ROOTPATH}/build/lib{database}_mutator.so"

def get_config_path(database):
    return f"{ROOTPATH}/data/config_{database}.yml"

def set_env(database):
    os.environ["AFL_CUSTOM_MUTATOR_ONLY"] = "1"
    os.environ["AFL_DISABLE_TRIM"] = "1"
    os.environ["AFL_CUSTOM_MUTATOR_LIBRARY"] = get_mutator_so_path(database)
    os.environ["SQUIRREL_CONFIG"] = get_config_path(database)

def run(database, input_dir, output_dir=None, config_file=None, fuzzer=None):
    # Precondition checks
    if database not in DBMS:
        print(f"Unsupported database. The supported ones are {DBMS}")
        return
    # Alias
    if database == "mariadb":
        database = "mysql"

    if not output_dir:
        output_dir = "/tmp/fuzz"

    if not config_file:
        config_file = get_config_path(database)
    if not fuzzer:
        fuzzer = f"{ROOTPATH}/AFLplusplus/afl-fuzz"
    if not os.path.exists(config_file):
        print("Invalid path for config file")
    if not os.path.exists(fuzzer):
        print("Invalid path for afl-fuzz")


    set_env(database)

    output_id = str(uuid.uuid4())[:10]
    if database == "sqlite":
        cmd = f"{fuzzer} -i {input_dir} -o {output_dir} -M {output_id} -- /home/ossfuzz @@"
    else:
        cmd = f"{fuzzer} -i {input_dir} -o {output_dir} -M {output_id} -t 10000 -- {ROOTPATH}/build/db_driver"

    os.system(cmd)



if __name__ == "__main__":
    fire.Fire(run)
