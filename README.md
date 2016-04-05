
Installation of the pre-built binaries
======================================

After installing the xc32 v1.40 from Microchip, download those files and copy them to `C:\Program Files (x86)\Microchip\xc32\v1.40\bin\bin\gcc\pic32mx\4.8.3`:

* [https://github.com/cepr/xc32/raw/master/build-i586-mingw32msvc/cc1.exe cc1.exe]
* [https://github.com/cepr/xc32/raw/master/build-i586-mingw32msvc/cc1plus.exe cc1plus.exe]
* [https://github.com/cepr/xc32/raw/master/build-i586-mingw32msvc/lto1.exe lto1.exe]

Compilation
===========

From a Debian/Ubuntu computer:

    sudo apt-get install mingw32
    ./microchip_configure

Note: This build fails before the end, but the needed binaries are generated in `build-i586-mingw32msvc`.

