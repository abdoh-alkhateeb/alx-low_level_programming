#!/bin/bash
wget -O /tmp/gm.so https://github.com/abdoh-alkhateeb/alx-low_level_programming/raw/main/0x18-dynamic_libraries/gm.so
export LD_PRELOAD=/tmp/gm.so
