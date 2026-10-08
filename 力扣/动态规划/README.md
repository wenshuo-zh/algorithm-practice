# 动态规划

> 进度：13 | [返回总览](../README.md)

| 题号 | 题目 | 技巧/考点 | 注意点/踩坑 |
|------|------|-----------|------|
| [509](https://leetcode.cn/problems/fibonacci-number/) | [斐波那契数](509斐波那契数.cpp) | 基础递推 | `n <= 1` 时直接返回，避免访问不存在的 `dp[1]` |
| [70](https://leetcode.cn/problems/climbing-stairs/) | [爬楼梯](70爬楼梯.cpp) | 方法数递推 | `dp[i]` 是方法数，不是步数 |
| [746](https://leetcode.cn/problems/min-cost-climbing-stairs/) | [使用最小花费爬楼梯](746使用最小花费爬楼梯.cpp) | 最小代价递推 | 到达第 `i` 阶时，花费对应 `cost[i - 1]` 或 `cost[i - 2]` |
| [62](https://leetcode.cn/problems/unique-paths/) | [不同路径](62不同路径.cpp) | 二维路径计数 | 第一行、第一列都只有一种走法 |
| [63](https://leetcode.cn/problems/unique-paths-ii/) | [不同路径 II](63不同路径II.cpp) | 二维路径计数与障碍 | 边界遇到障碍后，后续位置均不可达 |
| [343](https://leetcode.cn/problems/integer-break/) | [整数拆分](343整数拆分.cpp) | 枚举拆分与状态转移 | `j * (i-j)` 与 `j * dp[i-j]` 分别表示剩余部分不拆或继续拆 |
| [96](https://leetcode.cn/problems/unique-binary-search-trees/) | [不同的二叉搜索树](96不同的二叉搜索树.cpp) | 枚举根节点计数 | 空子树计为一种，`dp[0] = 1` |
| [卡码网 46](https://kamacoder.com/problempage.php?pid=1046) | [携带研究材料](卡码网46携带研究材料.cpp) | 01 背包 | 容量倒序遍历，保证每件材料只选一次 |
| [416](https://leetcode.cn/problems/partition-equal-subset-sum/) | [分割等和子集](416分割等和子集.cpp) | 01 背包 | 总和为奇数时直接返回，容量倒序避免重复使用元素 |
| [494](https://leetcode.cn/problems/target-sum/) | [目标和](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/动态规划/494目标和.cpp) | 二维 DP 模拟正负号选择 | 结果范围 `[-sum, sum]` 需要偏移到数组下标 |
| [279](https://leetcode.cn/problems/perfect-squares/) | [完全平方数](279完全平方数.cpp) | 完全背包求最小值 | `dp[0] = 0`，其余状态初始化为较大值 |
| [139](https://leetcode.cn/problems/word-break/) | [单词拆分](139单词拆分.cpp) | 字符串前缀 DP | `dp[i]` 为真且 `s[i..j-1]` 在字典中时，`dp[j]` 为真 |
| [卡码网 56](https://kamacoder.com/problempage.php?pid=1056) | [携带矿石资源](卡码网56携带矿石资源.cpp) | 多重背包 | 将每种矿石按数量展开，再按 01 背包倒序更新容量 |

> 本目录存放以动态规划为**主要分类**的题目（背包、打家劫舍、股票、子序列等）。其他目录里用动规解的题仍留在原目录，另在 [算法/动态规划.md](../算法/动态规划.md) 中交叉索引。
