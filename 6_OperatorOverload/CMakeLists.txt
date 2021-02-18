cmake_minimum_required(VERSION 3.10)

# set the project name
project(Person)

# add the executable
add_executable(Person Person.cpp Person_main.cpp)

target_include_directories(Person PUBLIC
                           "${PROJECT_SOURCE_DIR}"
                           )