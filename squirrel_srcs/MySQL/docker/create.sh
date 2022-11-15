#!/bin/bash
/usr/local/pgsql/bin/postgres --single -D /usr/local/pgsql/data << EOF
create database main
EOF
