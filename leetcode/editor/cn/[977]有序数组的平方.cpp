//给你一个按 非递减顺序 排序的整数数组 nums，返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序。 
//
// 
// 
//
// 
//
// 示例 1： 
//
// 
//输入：nums = [-4,-1,0,3,10]
//输出：[0,1,9,16,100]
//解释：平方后，数组变为 [16,1,0,9,100]
//排序后，数组变为 [0,1,9,16,100] 
//
// 示例 2： 
//
// 
//输入：nums = [-7,-3,2,3,11]
//输出：[4,9,9,49,121]
// 
//
// 
//
// 提示： 
//
// 
// 1 <= nums.length <= 10⁴ 
// -10⁴ <= nums[i] <= 10⁴ 
// nums 已按 非递减顺序 排序 
// 
//
// 
//
// 进阶： 
//
// 
// 请你设计时间复杂度为 O(n) 的算法解决本问题 
// 
//
// Related Topics 数组 双指针 排序 👍 998 👎 0


#include "include/headers.h"
#include<vector>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {  //可变数组，c++标准库类型.
        vector<int> result(nums.size(), 0);  // result被初始化为包含num.size()个值为0的int!
        int k = nums.size() - 1;  // k指向result数组终止位置!
        for (int i = 0, j = nums.size() - 1; i <= j ;) {  // 注意j = nums.size() - 1；
            // 注意这里要i <= j! 因为最后要处理两个元素
            if (nums[i] * nums[i] < nums[j] * nums[j]) {
                result[k--] = nums[j] * nums[j];  // 注意k--!
                j--;
            }
            else {
                result[k--] = nums[i] * nums[i];
                i++;
            }
        }
        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
