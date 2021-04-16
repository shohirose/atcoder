cmake_minimum_required(VERSION 3.8.2)
project(begineer_contest CXX)

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

add_problem(115a)
add_problem(115b)
add_problem(115c)
add_problem(115d)

add_problem(119a)
add_problem(119b)

add_problem(121a)
add_problem(121b)
add_problem(121c)

add_problem(122a)
add_problem(122b)
add_problem(122c)

add_problem(123a)
add_problem(123b)
add_problem(123c)

add_problem(124a)
add_problem(124b)
add_problem(124c)

add_problem(125a)
add_problem(125b)
add_problem(125c)

add_problem(126a)
add_problem(126b)
add_problem(126c)

add_problem(127a)
add_problem(127b)
add_problem(127c)
add_problem(127d)

add_problem(128a)
add_problem(128b)

add_problem(129a)
add_problem(129b)
add_problem(129c)
add_problem(129d)

add_problem(130a)
add_problem(130b)
add_problem(130c)

add_problem(131a)
add_problem(131b)
add_problem(131c)
add_problem(131d)

add_problem(132a)
add_problem(132b)
add_problem(132c)
add_problem(132d)

add_problem(133a)
add_problem(133b)
add_problem(133c)
add_problem(133d)
add_problem(133e)

add_problem(138d)

add_problem(139a)
add_problem(139b)
add_problem(139c)
add_problem(139d)

add_problem(140a)
add_problem(140b)
add_problem(140c)

add_problem(141a)
add_problem(141b)
add_problem(141c)
add_problem(141d)

add_problem(142a)
add_problem(142b)
add_problem(142c)
add_problem(142d)

add_problem(143a)
add_problem(143b)
add_problem(143c)
add_problem(143d)

add_problem(144a)
add_problem(144b)
add_problem(144c)
add_problem(144d)

add_problem(158d)
