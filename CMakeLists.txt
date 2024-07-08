cmake_minimum_required(VERSION 3.28)
project(leetcode)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_SOURCE_DIR}/include)
add_subdirectory(leetcode/editor/cn/include) # 头文件库地址得自己加


# [] 不能放在第一位 要给add_executable文件名task这种英文开头
add_executable(task leetcode/editor/cn/[977]有序数组的平方.cpp
        leetcode/editor/cn/[977]有序数组的平方.cpp
        leetcode/editor/cn/[209]长度最小的子数组.cpp
        leetcode/editor/cn/[27]移除元素.cpp
        leetcode/editor/cn/[203]移除链表元素.cpp
        leetcode/editor/cn/[707]设计链表.cpp
        leetcode/editor/cn/[206]反转链表.cpp
        leetcode/editor/cn/[24]两两交换链表中的节点.cpp
        "leetcode/editor/cn/[19]删除链表的倒数第 N 个结点.cpp")