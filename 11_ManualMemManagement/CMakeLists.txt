cmake_minimum_required(VERSION 3.10)

# set the project name
project(ManualMemoryManagement)

# add the executable
add_executable(ManualMemoryManagement Resource.cpp Person.cpp MemMain.cpp)

#target_compile_features(ManualMemoryManagement PUBLIC cxx_std_14)
target_compile_features(ManualMemoryManagement PUBLIC cxx_std_17)

target_include_directories(ManualMemoryManagement PUBLIC
                           "${PROJECT_SOURCE_DIR}"
                           )