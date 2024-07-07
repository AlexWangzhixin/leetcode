//给你一个正整数 n ，生成一个包含 1 到 n² 所有元素，且元素按顺时针顺序螺旋排列的 n x n 正方形矩阵 matrix 。
//
//
//
// 示例 1：
//
//
//输入：n = 3
//输出：[[1,2,3],[8,9,4],[7,6,5]]
//
//
// 示例 2：
//
//
//输入：n = 1
//输出：[[1]]
//
//
//
//
// 提示：
//
//
// 1 <= n <= 20
//
//
// Related Topics 数组 矩阵 模拟 👍 1295 👎 0


#include "include/headers.h"
#include <vector>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector <vector<int>> generateMatrix(int n) {
        vector <vector<int>> res(n, vector<int>(n, 0));  // 使用vector定义一个二维零数组
        int startx = 0, starty = 0;  // 也可以两个变量一起声明,初始化
        // /整数除法，向下取整
        int loop = n / 2;  // 每个圈循环几次，例如n为奇数3，那么loop = 1 只是循环一圈，矩阵中间的值需要单独处理
        int mid = n / 2;
        int count = 1;  // 整体计数变量，给矩阵中每一个空格赋值
        int offset = 1; // 需要控制每一条边遍历的长度，每次循环右边界收缩一位
        int i, j;
        while (loop--) {
            i = startx;  // i, j一定要在for外幅值
            j = starty;
            for (; j < n - offset; j++) {
                res[i][j] = count++;  // 先幅值，再++
            }
            for (; i < n - offset; i++) {
                res[i][j] = count++;
            }
            for (; j > starty; j--) {
                res[i][j] = count++;
            }
            for (; i > startx; i--) {
                res[i][j] = count++;
            }
            startx++;
            starty++;
            offset += 1;
        }
        // 如果n为奇数的话，需要单独给矩阵最中间的位置赋值
        if (n % 2) {
            res[mid][mid] = count;
        }
        return res;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
