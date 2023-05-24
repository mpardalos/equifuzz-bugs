#!/bin/bash

g++ -std=c++11 -I/usr/include/systemc -lsystemc $1.cpp -o $1 && ./$1
