cmake_minimum_required(VERSION 3.10)

# set the project name
project(Const)

# add the executable
add_executable(Const const_main.cpp)

#target_compile_features(Const PUBLIC cxx_std_14)
target_compile_features(Const PUBLIC cxx_std_17)

target_include_directories(Const PUBLIC
                           "${PROJECT_SOURCE_DIR}"
                           )