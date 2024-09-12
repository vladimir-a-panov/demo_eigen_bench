cmake_minimum_required(VERSION 3.13)
project(demo_eigen_bench)
set(CMAKE_CXX_STANDARD 20)

set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR aarch64)
set(CMAKE_CROSSCOMPILING TRUE)

set(CMAKE_C_COMPILER /usr/bin/aarch64-linux-gnu-gcc)
set(CMAKE_CXX_COMPILER /usr/bin/aarch64-linux-gnu-g++)

set(CMAKE_FIND_ROOT_PATH /usr/aarch64-linux-gnu)
set(CMAKE_INCLUDE_PATH  /usr/include/aarch64-linux-gnu)
set(CMAKE_LIBRARY_PATH  /usr/lib/aarch64-linux-gnu)
set(CMAKE_PROGRAM_PATH  /usr/bin/aarch64-linux-gnu)

# Adjust the default behavior of the FIND_XXX() commands:
# search programs in the host environment only.
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)

find_package (Eigen3 3.3 REQUIRED NO_MODULE)

set(SOURCE_FILES main.cpp)

add_executable(demo_eigen_bench ${SOURCE_FILES})
target_link_libraries(demo_eigen_bench Eigen3::Eigen)
target_link_libraries(demo_eigen_bench -static-libgcc -static-libstdc++ -static)

