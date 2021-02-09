cmake_minimum_required(VERSION 3.10)

# set the project name
project(ScopedSwitch)

# add the executable
add_executable(ScopedSwitch Thing_main.cpp)

target_include_directories(ScopedSwitch PUBLIC
                           "${PROJECT_SOURCE_DIR}"
                           )