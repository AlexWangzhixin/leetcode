//给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。 
//
// 注意：若 s 和 t 中每个字符出现的次数都相同，则称 s 和 t 互为字母异位词。 
//
// 
//
// 示例 1: 
//
// 
//输入: s = "anagram", t = "nagaram"
//输出: true
// 
//
// 示例 2: 
//
// 
//输入: s = "rat", t = "car"
//输出: false 
//
// 
//
// 提示: 
//
// 
// 1 <= s.length, t.length <= 5 * 10⁴ 
// s 和 t 仅包含小写字母 
// 
//
// 
//
// 进阶: 如果输入字符串包含 unicode 字符怎么办？你能否调整你的解法来应对这种情况？ 
//
// Related Topics 哈希表 字符串 排序 👍 931 👎 0


#include <algorithm>

#include "include/headers.h"
#include<vector>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution
{
public:
    // 建议： 这道题目，大家可以感受到 数组 用来做哈希表 给我们带来的遍历之处。
    bool isAnagram(string s, string t)
    {
        int record[26] = {0}; //init array
        for (int i = 0; i < s.size(); i++)
        {
            record[s[i] - 'a']++;
        }
        for (int i = 0; i < t.size(); i++)
        {
            record[t[i] - 'a']--;
        }
        /*for (const int i : record)
        // 声明了一个常量整数类型的循环变量 i
        // record 是一个容器，它必须支持迭代器访问
        {
            if (i != 0)  //  没错，i 本身就是容器中的元素
            {
                return false;
            }
        }
        return true;*/
        return all_of(begin(record), end(record), [](const int i)
        {  // C++11
            return i == 0;
        });
    }
};

//leetcode submit region end(Prohibit modification and deletion)
