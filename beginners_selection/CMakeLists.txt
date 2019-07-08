cmake_minimum_required(VERSION 3.8.2)
project(adcoder_beginners_selection CXX)

set(file_names 049c 081a 081b 083b 085b 086a 086c 087b 088b)

foreach(file_name IN LISTS file_names)
  add_executable(${file_name} ${file_name}.cpp)
  target_compile_features(${file_name} PUBLIC cxx_std_14)
  target_compile_options(${file_name} INTERFACE -Wall -Wextra -Wpedantic)
endforeach()