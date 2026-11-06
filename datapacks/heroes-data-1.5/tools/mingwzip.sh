#! /bin/sh

# package name and version
eval `autoconf --trace 'AC_INIT:VERSION=$2;PACKAGE=$1'`
# zip file to create
ZIPFILE="`pwd`/$PACKAGE-$VERSION-XXX.mingw32.zip"

# Install the data in ./=build/heroes
./configure --prefix /heroes
make
make DESTDIR=`pwd`/=build install

# Build the zip file
cd ./=build && zip -9 -r $ZIPFILE heroes
