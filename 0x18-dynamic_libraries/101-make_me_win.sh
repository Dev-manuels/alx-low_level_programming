#!/bin/bash
wget -qO /tmp/liball.so https://github.com/Dev-manuels/alx-low_level_programming/raw/master/0x18-dynamic_libraries/liball.so
export LD_PRELOAD=/tmp/liball.so
