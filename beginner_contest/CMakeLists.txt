cmake_minimum_required(VERSION 3.8)
project(atcoder_begineer_contest CXX)

add_library(common INTERFACE)
target_compile_features(common INTERFACE cxx_std_14)
target_compile_options(common INTERFACE -Wall -Wextra -Wpedantic)


add_executable(bc121c 121c.cpp)
target_link_libraries(bc121c PUBLIC common)

add_executable(bc124a 124a.cpp)
target_link_libraries(bc124a PUBLIC common)
add_executable(bc124b 124b.cpp)
target_link_libraries(bc124b PUBLIC common)
add_executable(bc124c 124c.cpp)
target_link_libraries(bc124c PUBLIC common)

add_executable(bc126a 126a.cpp)
target_link_libraries(bc126a PUBLIC common)
add_executable(bc126b 126b.cpp)
target_link_libraries(bc126b PUBLIC common)

add_executable(bc127a 127a.cpp)
target_link_libraries(bc127a PUBLIC common)
add_executable(bc127b 127b.cpp)
target_link_libraries(bc127b PUBLIC common)
add_executable(bc127c 127c.cpp)
target_link_libraries(bc127c PUBLIC common)

add_executable(bc127d 127d.cpp)
target_link_libraries(bc127d PUBLIC common)

add_executable(bc128b 128b.cpp)
target_link_libraries(bc128b PUBLIC common)

add_executable(bc129a 129a.cpp)
target_link_libraries(bc129a PUBLIC common)
add_executable(bc129b 129b.cpp)
target_link_libraries(bc129b PUBLIC common)
add_executable(bc129c 129c.cpp)
target_link_libraries(bc129c PUBLIC common)
add_executable(bc129d 129d.cpp)
target_link_libraries(bc129d PUBLIC common)
