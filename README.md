# alx-drv
The `WOL` support was removed from alx 3 July, 2013.

This repo contains source code of alx driver frome Linux kernel 3.10.84 that still supports `WOL`.

# Usage
Just execute `make`, and you can get the `alx.ko` file.

# Command Refs
- `sudo ethtool eth0 | grep Wake`
- `sudo ethtool -s eth0 wol g`
