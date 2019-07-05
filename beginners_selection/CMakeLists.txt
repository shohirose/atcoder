cmake_minimum_required(VERSION 3.8.2)
project(adcoder_beginners_selection CXX)

set(exe_names abc049c abc081a abc081b abc083b abc085b abc086a abc086c abc087b abc088b)

foreach(exe_name IN LISTS exe_names)
  add_executable(${exe_name} ${exe_name}.cpp)
  target_compile_features(${exe_name} PUBLIC cxx_std_14)
  target_compile_options(${exe_name} INTERFACE -Wall -Wextra -Wpedantic)
endforeach()