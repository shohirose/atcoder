cmake_minimum_required(VERSION 3.8.2)
project(regular_contest CXX)

function(add_problem name)
  add_executable(${name} ${name}.cpp)
  target_compile_features(${name}
    PRIVATE
      cxx_std_17
    )
  target_compile_options(${name}
    PRIVATE
      $<$<CXX_COMPILER_ID:MSVC>:/W3>
      $<$<CXX_COMPILER_ID:GNU>:-Wall -Wextra -Wpedantic>
      $<$<CXX_COMPILER_ID:Clang>:-Wall -Wextra -Wpedantic>
      $<$<CXX_COMPILER_ID:Intel>:$<IF:$<PLATFORM_ID:Windows>,/W3,-w3>>
    )
endfunction()

add_problem(106a)