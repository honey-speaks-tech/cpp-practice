cmake_minimum_required(VERSION 3.10)

# set the project name
project(PointersReferences)

# add the executable
add_executable(PointersReferences Pointer_Reference_main.cpp Person.cpp)

#target_compile_features(PointersReferences PUBLIC cxx_std_14)
target_compile_features(PointersReferences PUBLIC cxx_std_17)

target_include_directories(PointersReferences PUBLIC
                           "${PROJECT_SOURCE_DIR}"
                           )