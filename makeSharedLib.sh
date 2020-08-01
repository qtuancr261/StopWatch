#!/bin/bash

echo "build StopWatch shared lib"
echo "Debug version"
clang++ -g -c -fPIC -Wall StopWatch.cpp
# -fPIC: position-independent code , with this flag, compiler will generates code for operations
# such as acessing global, static and external vars, string constants,
# taking the addresses of functions. These changes allow the code to be located at any virtual address at run time
# on linux/x86-32, it's possible to create a shared library using modules compiled without the -fPIC 
# => losing some of the benefits of shared lib
# On some architectures, it's impossible to build shared lib without the -fPIC
clang++ -g -shared -o libstopwatchd.so StopWatch.o
echo "Release version"
rm StopWatch.o
clang++ -c -fPIC -Wall StopWatch.cpp
clang++ -shared -o libstopwatch.so StopWatch.o

