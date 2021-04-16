cmake_minimum_required(VERSION 3.8.2)
project(beginners_selection CXX)

function(add_problem name)
  add_executable(${name} ${name}.cpp)
  target_compile_features(${name}
    PRIVATE
      cxx_std_14
    )
  target_compile_options(${name}
    PRIVATE
      $<$<CXX_COMPILER_ID:MSVC>:/W3>
      $<$<CXX_COMPILER_ID:GNU>:-Wall -Wextra -Wpedantic>
      $<$<CXX_COMPILER_ID:Clang>:-Wall -Wextra -Wpedantic>
      $<$<CXX_COMPILER_ID:Intel>:$<IF:$<PLATFORM_ID:Windows>,/W3,-w3>>
    )
  target_compile_definitions(${name}
    PRIVATE
      $<$<CXX_COMPILER_ID:MSVC>:_USE_MATH_DEFINES NOMINMAX>
    )
endfunction()

add_problem(049c)
add_problem(081a)
add_problem(081b)
add_problem(083b)
add_problem(085b)
add_problem(086a)
add_problem(086c)
add_problem(087b)
add_problem(088b)