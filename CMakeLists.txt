cmake_minimum_required(VERSION 3.15)
project(phonetic_search)

set(CMAKE_CXX_STANDARD 14)

add_executable(phonetic_search PhoneticFinder.cpp PhoneticFinder.hpp Test.cpp Demo.cpp TestCounter.cpp TestExample.cpp )