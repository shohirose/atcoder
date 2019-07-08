cmake_minimum_required(VERSION 3.8.2)
project(dp_contest CXX)

set(file_names a b c d)

foreach(file_name IN LISTS file_names)
    add_executable(${file_name} ${file_name}.cpp)
    target_compile_features(${file_name} PUBLIC cxx_std_14)
    target_compile_options(${file_name} PUBLIC -Wall -Wextra -Wpedantic)
endforeach()