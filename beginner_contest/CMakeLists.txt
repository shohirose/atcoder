cmake_minimum_required(VERSION 3.8.2)
project(begineer_contest CXX)

set(file_names
    121c
    123a 123b 123c
    124a 124b 124c
    125a 125b 125c
    126a 126b 126c
    127a 127b 127c 127d
    128a 128b
    129a 129b 129c 129d
    130a 130b 130c
    131a 131b 131c 131d
    132a 132b 132c 132d
    133a 133b 133c 133d
    )

foreach(file_name IN LISTS file_names)
    add_executable(${file_name} ${file_name}.cpp)
    target_compile_features(${file_name} PUBLIC cxx_std_14)
    target_compile_options(${file_name} PUBLIC -Wall -Wextra -Wpedantic)
endforeach()
