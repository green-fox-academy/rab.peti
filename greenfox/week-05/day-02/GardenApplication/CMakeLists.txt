cmake_minimum_required(VERSION 3.12)
project(GardenApplication)

set(CMAKE_CXX_STANDARD 14)

add_executable(GardenApplication main.cpp flower.cpp flower.h plant.cpp plant.h tree.cpp tree.h garden.cpp garden.h)