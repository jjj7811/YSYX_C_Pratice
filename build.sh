#!/bin/bash
if [ ! -d "bin" ]; then
    mkdir bin
fi
gcc ./pra18/src/ex18.c -g -o ./pra18/ex18　 #默认为release模式，-g表示debud模式，如果编译c程序,g++改成gcc