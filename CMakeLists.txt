cmake_minimum_required(VERSION 3.6)
project(dlltest)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/CMake")
include(Setup)

add_library(thelib SHARED lib.cpp header.hpp)
target_include_directories(thelib PUBLIC ${CMAKE_CURRENT_BINARY_DIR}/)
generate_export_header(thelib)

add_executable(thebin main.cpp header.hpp)
target_link_libraries(thebin PRIVATE thelib)

SetupPost()