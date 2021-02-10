# dwmblocks
![GitHub](https://img.shields.io/github/license/beiertu-mms/dwmblocks)

A fork of [torrinfail's modular status bar][1] for [dwm][2] written in C.

## Installation
Run
```sh
sudo make clean install
```

## Usage
Add `dwmblocks 2>&1 >/dev/null &` to **.xinitrc** before `exec dwm`.

## Modifying blocks
The statusbar is made from text output from commandline programs.  
Blocks are added and removed by editing the **blocks.def.h** header file.  
After modifying that file, remove the **blocks.h** file  
and run `make clean install` again to apply the changes.  

## License
This software is distributed under the terms of [ISC license][3].  

[1]: https://github.com/torrinfail/dwmblocks
[2]: https://dwm.suckless.org/
[3]: ./LICENSE
