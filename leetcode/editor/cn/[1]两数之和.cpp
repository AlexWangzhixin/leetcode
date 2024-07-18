//给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target 的那 两个 整数，并返回它们的数组下标。 
//
// 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。 
//
// 你可以按任意顺序返回答案。 
//
// 
//
// 示例 1： 
//
// 
//输入：nums = [2,7,11,15], target = 9
//输出：[0,1]
//解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。
// 
//
// 示例 2： 
//
// 
//输入：nums = [3,2,4], target = 6
//输出：[1,2]
// 
//
// 示例 3： 
//
// 
//输入：nums = [3,3], target = 6
//输出：[0,1]
// 
//
// 
//
// 提示： 
//
// 
// 2 <= nums.length <= 10⁴ 
// -10⁹ <= nums[i] <= 10⁹ 
// -10⁹ <= target <= 10⁹ 
// 只会存在一个有效答案 
// 
//
// 
//
// 进阶：你可以想出一个时间复杂度小于 O(n²) 的算法吗？ 
//
// Related Topics 数组 哈希表 👍 18726 👎 0


#include "include/headers.h"
#include<algorithm>
#include <unordered_map>
#include<vector>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    // map解决哈希问题,与 std::map 不同，unordered_map 不保证元素的排序，但通常提供更快的查找速度。
    // unordered_map 是一个关联容器，它存储了键值对（key-value pairs），其中每个键（key）都是唯一的。
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map; // 默认构造，底层实现是哈希表，std::map 和std::multimap 的底层实现是红黑树。
        for (int i = 0; i < nums.size(); i++) {
            // 遍历当前元素，并在map中寻找是否有匹配的key
            auto iter = map.find(target - nums[i]);
            if (iter != map.end()) {
                // 箭头操作符 -> 用于访问指针所指向对象的成员,  iter 是一个迭代器，指向 std::unordered_map 中的元素。
                // iter->second 表示访问 iter 所指向的元素的 second 部分，即键值对中的值
                return {iter->second, i}; // 这里大括号用于创建一个初始化列表，用于初始化返回的 vector<int>.
                // iter->second: 第一个数的索引。i:当前遍历到的元素在数组中的索引，即第二个数的索引。
            }
            map.insert(pair<int, int>(nums[i], i));
        }
        // 如果没找到匹配对，就把访问过的元素和下标加入到map中
        return {};
    }
};

//leetcode submit region end(Prohibit modification and deletion)
