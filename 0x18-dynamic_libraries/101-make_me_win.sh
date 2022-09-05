#!/bin/bash
wget -P /tmp/ https://raw.github.com/Kenthouky/alx-low_level_programming/master/0x18-dynamic_libraries/goal.so
export LD_PRELOAD=/tmp/goal.so
