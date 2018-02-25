To compile windows app on linux
================================

Install mxe
-----------
```
git clone https://github.com/mxe/mxe.git /mxe
```

Add qrencode
------------
```
cd /mxe/src
wget https://github.com/nohea/mxe/blob/2a189cdaea56421fe61584adcab5a67116938f00/src/qrencode.mk
```

Install dependencies
--------------------
```
cd /mxe
make db miniupnpc boost qrencode protobuf qt5
```

Setup environment
-----------------
```
export PATH=/mxe/usr/bin:/mxe/usr/i686-w64-mingw32.static/bin:/mxe/usr/i686-w64-mingw32.static/qt5/bin:/mxe/usr/bin:/mxe/usr/x86_64-pc-linux-gnu/bin:$PATH
export PKG_CONFIG=/mxe/usr/bin/i686-w64-mingw32.static-pkg-config
```

Configure and build
---------
```
cd /cryply
./autogen.sh
./configure --host=i686-w64-mingw32.static --with-incompatible-bdb --with-boost-system=boost_system-mt --with-boost-filesystem=boost_filesystem-mt --with-boost-program-options=boost_program_options-mt --with-boost-thread=boost_thread_win32-mt --with-boost-chrono=boost_chrono-mt --disable-tests
make
```
