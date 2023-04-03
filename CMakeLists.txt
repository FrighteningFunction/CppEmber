cmake_minimum_required(VERSION 3.24)
project(CppEmber)

set(CMAKE_CXX_STANDARD 11)

add_executable(CppEmber ember.cpp
        emberMain.cpp
        gtest_lite.h
        hallgato.cpp
        hallgato.h
        kutato.h
        memtrace.cpp
        memtrace.h ember.h)

add_compile_definitions(MEMTRACE)