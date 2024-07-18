//给定两个数组 nums1 和 nums2 ，返回 它们的 交集 。输出结果中的每个元素一定是 唯一 的。我们可以 不考虑输出结果的顺序 。 
//
// 
//
// 示例 1： 
//
// 
//输入：nums1 = [1,2,2,1], nums2 = [2,2]
//输出：[2]
// 
//
// 示例 2： 
//
// 
//输入：nums1 = [4,9,5], nums2 = [9,4,9,8,4]
//输出：[9,4]
//解释：[4,9] 也是可通过的
// 
//
// 
//
// 提示： 
//
// 
// 1 <= nums1.length, nums2.length <= 1000 
// 0 <= nums1[i], nums2[i] <= 1000 
// 
//
// Related Topics 数组 哈希表 双指针 二分查找 排序 👍 920 👎 0


#include "include/headers.h"
#include<algorithm>
#include <unordered_set>
#include<vector>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution
{
    /*建议：本题就开始考虑 什么时候用set 什么时候用数组，本题其实是使用set的好题，但是后来力扣改了题目描述和
    测试用例，添加了 0 <= nums1[i], nums2[i] <= 1000 条件，所以使用数组也可以了，
    不过建议大家忽略这个条件。 尝试去使用set。 */
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_set<int> result_set; // 构造函数：创建一个空的 unordered_setm, 存放结果，之所以用set是为了给结果集去重
        unordered_set<int> nums_set(nums1.begin(), nums1.end());  // 哈希表，用vector初始化
        for (int num : nums2)
        {
            // find 方法，传入一个值（nums2中的元素num）。find 方法会查找这个值，并返回一个迭代器 it，
            // 指向集合中找到的元素。如果找不到该值，则返回一个指向 end() 的迭代器，即集合末尾的迭代器。
            if (nums_set.find(num) != nums_set.end())
            // .end() 返回一个指向 std::unordered_set 末尾的迭代器。这个迭代器不指向任何元素，而是表示集合的结束。
            // 如果 nums_set.find(num) 不等于 uset.end()，说明在集合中找到了值num，即元素存在。
            {
                result_set.insert(num);
            }
        }
        return vector<int>(result_set.begin(), result_set.end());
    }
};

//leetcode submit region end(Prohibit modification and deletion)
