#!/bin/sh
if [ "$1" = "clean" ];then
	echo "clean dir..."
	rm -rf build bin
else 
	mkdir build 2>/dev/null
	cd build && cmake .. && make
fi
