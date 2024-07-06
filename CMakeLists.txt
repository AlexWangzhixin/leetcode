cmake_minimum_required(VERSION 3.28)
project(leetcode)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_SOURCE_DIR}/include)
add_subdirectory(leetcode/editor/cn/include)


# [] 不能放在第一位 要给add_executable文件名task这种英文开头
add_executable(task leetcode/editor/cn/[977]有序数组的平方.cpp
        leetcode/editor/cn/[977]有序数组的平方.cpp
        leetcode/editor/cn/[209]长度最小的子数组.cpp
        leetcode/editor/cn/[27]移除元素.cpp)