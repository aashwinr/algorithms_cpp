cmake_minimum_required(VERSION 3.22)
project(FileSystem)

set(CMAKE_CXX_STANDARD 17)

add_executable(FileSystem main.cpp Sources/FileSystem.cpp Includes/FileSystem.h Includes/Types.h Includes/StringAlgorithms.h)
