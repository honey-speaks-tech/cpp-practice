cmake_minimum_required(VERSION 3.10)

# set the project name
project(TemplateSpecialization)

# add the executable
add_executable(TemplateSpecialization Accumulator.cpp Person.cpp)

#target_compile_features(TemplateSpecialization PUBLIC cxx_std_14)
target_compile_features(TemplateSpecialization PUBLIC cxx_std_17)

target_include_directories(TemplateSpecialization PUBLIC
                           "${PROJECT_SOURCE_DIR}"
                           )