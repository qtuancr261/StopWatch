#!/bin/bash

echo "build StopWatch lib"
echo "Debug version"
clang++ -g -c StopWatch.cpp
ar r libstopwatchd.a StopWatch.o
echo "Release version"
rm StopWatch.o
clang++ -c StopWatch.cpp
ar r libstopwatch.a StopWatch.o
