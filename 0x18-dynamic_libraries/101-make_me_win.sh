#!/bin/bash
wget -P /tmp/ https://github.com/Ezralx/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libezra_rand.so
export LD_PRELOAD='/tmp/libezra_rand.so'
