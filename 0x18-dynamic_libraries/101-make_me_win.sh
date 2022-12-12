#!/bin/bash
wget -P /tmp/ https://github.com/Boomni/alx-low_level_programming/blob/main/0x18-dynamic_libraries/rand_n.so
export LD_PRELOAD=/tmp/rand_n.so
