cmake_minimum_required(VERSION 3.10)

# set the project name
project(SmartPointers)

# add the executable
add_executable(SmartPointers Resource.cpp Person.cpp MemMain.cpp)

#target_compile_features(SmartPointers PUBLIC cxx_std_14)
target_compile_features(SmartPointers PUBLIC cxx_std_17)

target_include_directories(SmartPointers PUBLIC
                           "${PROJECT_SOURCE_DIR}"
                           )