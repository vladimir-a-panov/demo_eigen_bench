#!/bin/bash

cmake -DCMAKE_BUILD_TYPE=Release -B build -S .
cmake --build build
