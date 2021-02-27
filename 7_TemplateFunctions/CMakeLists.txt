cmake_minimum_required(VERSION 3.10)

# set the project name
project(TemplateFunctions)

# add the executable
add_executable(TemplateFunctions Person.cpp Template_functions_main.cpp)

target_compile_features(TemplateFunctions PUBLIC cxx_std_14)

target_include_directories(TemplateFunctions PUBLIC
                           "${PROJECT_SOURCE_DIR}"
                           )