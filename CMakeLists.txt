# stop if cmake version is below 3.0
cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

# project name and enable C++ support
project(problem_56 LANGUAGES CXX)

# require C++11
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_subdirectory( ntl_utils )

add_executable(problem_56 main.cpp  )
target_link_libraries( problem_56 PRIVATE ntl ntl_utils )

