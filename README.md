# dwmblocks
[![GitHub](https://img.shields.io/github/license/beiertu-mms/dwmblocks?style=for-the-badge)](https://github.com/beiertu-mms/dwmblocks/blob/master/LICENSE)

A fork of [torrinfail's modular status bar][1] for [suckless' dwm][2] written in C.

## Installation
Run
```sh
sudo make clean install
```

## Usage
Add
```sh
# Start dwmblocks. Has to be started before dwm.
dwmblocks 2>&1 >/dev/null &

exec dwm
```
to **.xinitrc** file.  

## Configuration
The statusbar is made from text output from commandline programs.  
Blocks are added and removed by editing the **config.h** header file.  
After modifying that file, run `make clean install` to apply the changes.  

## License
This software is distributed under the terms of [ISC license][3].  

[1]: https://github.com/torrinfail/dwmblocks
[2]: https://dwm.suckless.org/
[3]: ./LICENSE
