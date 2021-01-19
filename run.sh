#!/bin/bash
if [ $# -eq 0 ];
then
	echo need folled by cpp file.
	exit
fi
g++ -std=c++11 "$1" -lpthread && ./a.out
