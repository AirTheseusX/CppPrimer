cmake_minimum_required(VERSION 3.28)
project(project)

set(CMAKE_CXX_STANDARD 17)

include_directories("./include")
add_executable(project main.cpp
        source/sales_data.cpp
        include/sales_data.h
        include/person.h
        source/person.cpp
)
