#!/bin/bash
wget -P /tmp/ https://github.com/Ezralx/alx-low_level_programming/raw/master/0x18-dynamic_libraries/giga_millions/libezra_rand.so
export LD_PRELOAD='/tmp/libezra_rand.so'
