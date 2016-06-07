cmake_minimum_required(VERSION 3.4)
project(SDIZO_PROJECT3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Classes/BackpackBruteForce.cpp Classes/BackpackBruteForce.h Classes/DataLoader.cpp Classes/DataLoader.h
        Classes/TSP_BruteForce.cpp Classes/TSP_BruteForce.h Classes/Menu.cpp Classes/Menu.h )
add_executable(SDIZO_PROJECT3 ${SOURCE_FILES})