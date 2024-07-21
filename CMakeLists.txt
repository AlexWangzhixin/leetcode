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
        "leetcode/editor/cn/[19]删除链表的倒数第 N 个结点.cpp"
        leetcode/editor/cn/[160]相交链表.cpp
        "leetcode/editor/cn/[142]环形链表 II.cpp"
        leetcode/editor/cn/[242]有效的字母异位词.cpp
        leetcode/editor/cn/[349]两个数组的交集.cpp
        leetcode/editor/cn/[202]快乐数.cpp
        leetcode/editor/cn/[1]两数之和.cpp
        "leetcode/editor/cn/[454]四数相加 II.cpp"
        leetcode/editor/cn/[383]赎金信.cpp
        leetcode/editor/cn/[15]三数之和.cpp
        leetcode/editor/cn/[18]四数之和.cpp
        leetcode/editor/cn/[344]反转字符串.cpp
        "leetcode/editor/cn/[541]反转字符串 II.cpp"
        leetcode/editor/cn/[151]反转字符串中的单词.cpp)