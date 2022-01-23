cmake_minimum_required(VERSION 3.21)
project(printf C)

set(CMAKE_C_STANDARD 99)

add_executable(printf main.c print.h print.c)
