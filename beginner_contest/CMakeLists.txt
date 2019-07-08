cmake_minimum_required(VERSION 3.8)
project(atcoder_begineer_contest CXX)

set(file_names
    121c
    124a 124b 124c
    126a 126b
    127a 127b 127c 127d
    128b
    129a 129b 129c 129d
    132a 132b 132c 132d
    133a 133b 133c 133d
    )

foreach(file_name IN LISTS file_names)
    set(exe_name bc${file_name})
    add_executable(${exe_name} ${file_name}.cpp)
    target_compile_features(${exe_name} PUBLIC cxx_std_14)
    target_compile_options(${exe_name} PUBLIC -Wall -Wextra -Wpedantic)
endforeach()