cmake_minimum_required(VERSION 3.8.2)
project(adcoder_practice_a CXX)
add_executable(test main.cpp)
target_compile_features(test
  PUBLIC cxx_std_14
  )
