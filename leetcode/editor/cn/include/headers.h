//
// Created by Alex on 2024/7/6.
//

#ifndef LEETCODE_HEADERS_H
#define LEETCODE_HEADERS_H
#include <cstddef>
#include <algorithm>
#include <vector>
#include <string>

// 单链表
struct ListNode {
    int val;  // 节点上存储的元素
    ListNode *next;  // 指向下一个节点的指针
    explicit ListNode(const int x) : val(x), next(nullptr) {}  // 节点的构造函数
};

#endif //LEETCODE_HEADERS_H
