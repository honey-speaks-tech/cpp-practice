cmake_minimum_required(VERSION 3.10)

# set the project name
project(Tweeple)

# add the executable
add_executable(Tweeple Person.cpp Tweeple.cpp Person_main.cpp)

target_include_directories(Tweeple PUBLIC
                           "${PROJECT_SOURCE_DIR}"
                           )