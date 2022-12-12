#!/bin/bash
wget -P /tmp/ https://raw.github.com/boomni/alx-low_level_programming/master/0x18-dynamic_libraries/rand_n.so
export LD_PRELOAD=/tmp/rand_n.so
