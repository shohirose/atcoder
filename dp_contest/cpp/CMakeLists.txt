cmake_minimum_required(VERSION 3.8.2)
project(atcoder_dp_contest CXX)

set(file_names a b c d)

foreach(file_name IN LISTS file_names)
    set(exe_name dp_contest_${file_name})
    add_executable(${exe_name} ${file_name}.cpp)
    target_compile_features(${exe_name} PUBLIC cxx_std_14)
    target_compile_options(${exe_name} PUBLIC -Wall -Wextra -Wpedantic)
endforeach()