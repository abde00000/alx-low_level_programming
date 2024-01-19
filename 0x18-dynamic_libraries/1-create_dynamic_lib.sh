#!/bin/bash
gcc -c -fPIC *.c
gcc -shared *.o -o liball.so
chmod +x 1-create_dynamic_lib.sh
