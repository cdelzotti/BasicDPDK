#!/bin/bash

# PKG-CONFIG CONFIG
PKG_CONFIG_PATH=$PKG_CONFIG_PATH:/home/clement/dpdk/build/meson-private/
# CONFIG LINKER
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/clement/dpdk/build/lib/
sudo ldconfig
