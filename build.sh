#!/usr/bin/env bash

echo "start to build client"
cd ./source/client
rm -rf build/
echo "make dir:build"
mkdir build
echo "enter build"
cd build/
echo "start to cmake client"
cmake ..
echo "start to make client"
make

echo "start to build server"
cd ../../server
rm -rf build/
echo "make dir:build"
mkdir build
echo "enter build"
cd build
echo "start to cmake server"
cmake ..
echo "start to make server"
make
#echo "delete build"
#cd ..
#rm -rf build/
