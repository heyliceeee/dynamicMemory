cmake_minimum_required(VERSION 3.26)
project(dynamicMemory C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(dynamicMemory
        main.c
        main.h
        students.c
        input.c)
