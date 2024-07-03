//给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target ，写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否
//则返回 -1。
//
// 示例 1:
//
// 输入: nums = [-1,0,3,5,9,12], target = 9
//输出: 4
//解释: 9 出现在 nums 中并且下标为 4
//
//
// 示例 2:
//
// 输入: nums = [-1,0,3,5,9,12], target = 2
//输出: -1
//解释: 2 不存在 nums 中因此返回 -1
//
//
//
//
// 提示：
//
//
// 你可以假设 nums 中的所有元素是不重复的。
// n 将在 [1, 10000]之间。
// nums 的每个元素都将在 [-9999, 9999]之间。
//
//
// Related Topics 数组 二分查找 👍 1587 👎 0


//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int search(vector<int> &nums, int target) {
        int left = 0;  // 记得加;
        int right = nums.size();  // 多个变量分开赋值，要声明变量类型，也可以声明同时赋值
        while (left < right) {
            int middle = left + ((right - left) >> 1);  // 防止溢出 等同于(left + right)/2
            // 对于二进制的正数来说，右移x位相当于除以2的x几次方，所以右移一位等于➗2，
            // 用位运算的好处是比直接相除的操作快
            if (nums[middle] > target) {
                right = middle;
            } else if (nums[middle] < target) {
                left = middle + 1;
            } else {
                return middle;
            }
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

