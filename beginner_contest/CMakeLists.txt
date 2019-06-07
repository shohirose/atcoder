cmake_minimum_required(VERSION 3.8)
project(atcoder_begineer_contest CXX)

add_executable(atcoder_bc_124b
  124b.cpp
  )
target_compile_features(atcoder_bc_124b
  PUBLIC cxx_std_14
  )
target_compile_options(atcoder_bc_124b
  PUBLIC -Wall -Wextra -Wpedantic
  )

add_executable(atcoder_bc_127c
  127c.cpp
  )
target_compile_features(atcoder_bc_127c
  PUBLIC cxx_std_14
  )
target_compile_options(atcoder_bc_127c
  PUBLIC -Wall -Wextra -Wpedantic
  )

add_executable(atcoder_bc_127d
  127d.cpp
  )
target_compile_features(atcoder_bc_127d
  PUBLIC cxx_std_14
  )
target_compile_options(atcoder_bc_127d
  PUBLIC -Wall -Wextra -Wpedantic
  )

add_executable(atcoder_bc_128b
  128b.cpp
  )
target_compile_features(atcoder_bc_128b
  PUBLIC cxx_std_14
  )
target_compile_options(atcoder_bc_128b
  PUBLIC -Wall -Wextra -Wpedantic
  )
