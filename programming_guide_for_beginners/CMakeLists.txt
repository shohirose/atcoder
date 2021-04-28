cmake_minimum_required(VERSION 3.13)
project(programming_guide_for_beginners CXX)

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
      $<$<CXX_COMPILER_ID:MSVC>:NOMINMAX _USE_MATH_DEFINES>
    )
endfunction()

add_problem(ex23)