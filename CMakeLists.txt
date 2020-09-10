cmake_minimum_required(VERSION 3.17)
project(tic_tac_toe)

set(CMAKE_CXX_STANDARD 17)

add_executable(tic_tac_toe main.cpp default.h default.cpp implementation/implementation.cpp implementation/implementation.h)