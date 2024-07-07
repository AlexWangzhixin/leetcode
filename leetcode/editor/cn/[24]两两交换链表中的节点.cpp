//给你一个链表，两两交换其中相邻的节点，并返回交换后链表的头节点。你必须在不修改节点内部的值的情况下完成本题（即，只能进行节点交换）。 
//
// 
//
// 示例 1： 
// 
// 
//输入：head = [1,2,3,4]
//输出：[2,1,4,3]
// 
//
// 示例 2： 
//
// 
//输入：head = []
//输出：[]
// 
//
// 示例 3： 
//
// 
//输入：head = [1]
//输出：[1]
// 
//
// 
//
// 提示： 
//
// 
// 链表中节点的数目在范围 [0, 100] 内 
// 0 <= Node.val <= 100 
// 
//
// Related Topics 递归 链表 👍 2235 👎 0


#include "include/headers.h"
#include<vector>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        auto* dummyHead = new ListNode(0);  // 用给定的构造函数初始化
        dummyHead->next = head;
        ListNode* cur = dummyHead;
        while (cur->next && cur->next->next != nullptr) {
            ListNode* tmp = cur->next;  // 存1
            ListNode* tmp1 = cur->next->next->next;  // 存3

            cur->next = cur->next->next;  // 指2
            cur->next->next = tmp;  // 指1
            cur->next->next->next = tmp1;  // 指3

            cur = cur->next->next;  // 移到1
        }
        ListNode* result = dummyHead->next;
        delete dummyHead;
        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
