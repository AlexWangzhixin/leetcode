cmake_minimum_required(VERSION 3.28)
project(leetcode)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_SOURCE_DIR}/include)
add_subdirectory(leetcode/editor/cn/include)

add_executable([977]有序数组的平方 leetcode/editor/cn/[977]有序数组的平方.cpp)
add_executable([27]移除元素 leetcode/editor/cn/[27]移除元素.cpp)