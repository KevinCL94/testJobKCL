cmake_minimum_required(VERSION 2.4)

set(CMAKE_CXX_COMPILER=C:/MinGW/bin/g++.exe)
set(CMAKE_CXX_COMPILER=C:/MinGW/bin/g++.exe)

project(BRL-test)

add_executable(rocket main.cpp)

set_property(TARGET rocket PROPERTY CXX_STANDARD 17)
