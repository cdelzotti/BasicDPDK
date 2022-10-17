# Basic DPDK

This is a basic DPDK application meant as a learning exercice. it includes

- A Client sending messages
- A Server receiving them and printing payloads

## Config

You can edit `env.h` to configure the project as you like.

## Build

First, you need to be sure to link DPDK correctly. To do so, you might want to use the following commands :

```bash
# PKG-CONFIG CONFIG
PKG_CONFIG_PATH=$PKG_CONFIG_PATH:/path/to/libdpdk.pc/
# Example : PKG_CONFIG_PATH=$PKG_CONFIG_PATH:/home/clement/dpdk/build/meson-private/
# CONFIG LINKER
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/path/to/dpdk/folder/build/lib/
# Example : export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/clement/dpdk/build/lib/
sudo ldconfig
```

Then just go within `server/` and `client/` and run :

```bash
make static
```
