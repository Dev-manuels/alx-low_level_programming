#!/bin/bash
wget -qO /tmp/libpay.so https://github.com/Dev-manuels/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libpay.so
export LD_PRELOAD=./tmp/libpay.so
