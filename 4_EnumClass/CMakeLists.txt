cmake_minimum_required(VERSION 3.10)

# set the project name
project(Enum)

# add the executable
add_executable(Enum enum_main.cpp)

target_include_directories(Enum PUBLIC
                           "${PROJECT_SOURCE_DIR}"
                           )