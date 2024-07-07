//给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。
//
// 
//
// 示例 1： 
// 
// 
//输入：head = [1,2,6,3,4,5,6], val = 6
//输出：[1,2,3,4,5]
// 
//
// 示例 2： 
//
// 
//输入：head = [], val = 1
//输出：[]
// 
//
// 示例 3： 
//
// 
//输入：head = [7,7,7,7], val = 7
//输出：[]
// 
//
// 
//
// 提示： 
//
// 
// 列表中的节点数目在范围 [0, 10⁴] 内 
// 1 <= Node.val <= 50 
// 0 <= val <= 50 
// 
//
// Related Topics 递归 链表 👍 1437 👎 0


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
    ListNode* removeElements(ListNode* head, int val) {
        auto* dummyHead = new ListNode(0);  // new 动态内存分配，
        // 在堆上创建的对象可以更灵活地管理内存，但这也意味着你需要负责内存的释放，以避免内存泄漏。
        dummyHead->next = head;
        ListNode* cur = dummyHead;  // 考虑到删除头节点的可能性
        while (cur->next != nullptr) {
            if (cur->next->val == val) {
                // ListNode* tmp = cur->next;  不需要
                cur->next = cur->next->next;
            }
            else {
                cur =  cur->next;
            }
        }
        head = dummyHead->next;  // 先保存
        delete dummyHead;  // 再删除，避免内存泄漏
        return head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
