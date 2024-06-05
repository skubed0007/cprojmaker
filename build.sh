#!/bin/bash

# Compile for native Linux environment
g++ -std=c++17 -o cpm main.cpp

# Check if mingw32-g++ is installed and compile for Windows if available
if command -v x86_64-w64-mingw32-g++ > /dev/null 2>&1; then
    x86_64-w64-mingw32-g++ -std=c++17 -o cpm.exe main.cpp
else
    echo "mingw32-g++ not found, skipping Windows build."
fi
