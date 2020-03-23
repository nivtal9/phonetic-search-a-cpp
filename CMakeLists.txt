cmake_minimum_required(VERSION 3.15)
project(phonetic_search_a)

set(CMAKE_CXX_STANDARD 14)

add_executable(phonetic_search_a PhoneticFinder.hpp PhoneticFinder.cpp Test.cpp Demo.cpp TestCounter.cpp TestExample.cpp PhoneticFinder.hpp PhoneticFinder.cpp Test.cpp)