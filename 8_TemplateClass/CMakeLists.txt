cmake_minimum_required(VERSION 3.10)

# set the project name
project(TemplateClass)

# add the executable
add_executable(TemplateClass Accumulator.cpp)

#target_compile_features(TemplateClass PUBLIC cxx_std_14)
target_compile_features(TemplateClass PUBLIC cxx_std_17)

target_include_directories(TemplateClass PUBLIC
                           "${PROJECT_SOURCE_DIR}"
                           )