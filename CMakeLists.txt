cmake_minimum_required(VERSION 3.26)
project(lab_14 C)

set(CMAKE_C_STANDARD 11)

add_executable(lab_14 main.c
        libs/data_structures/vector/vector.c
        libs/data_structures/vector/vector.h
        libs/data_structures/exceptions/exceptions.c
        libs/data_structures/exceptions/exceptions.h
        libs/data_structures/vector/vectorVoid.c
        libs/data_structures/vector/vectorVoid.h)

add_subdirectory(libs)
target_link_libraries(lab_14 data_structures)