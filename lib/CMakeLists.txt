cmake_minimum_required(VERSION 3.10)
project(vectorlib LANGUAGES CXX)
file(GLOB SOURCES "*.cpp")
file(GLOB HEADERS "*.hpp")

add_library(vectorlib STATIC stack.cpp stack.hpp queue.cpp queue.hpp)
target_include_directories(vectorlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
