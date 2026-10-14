# 动态规划

> 进度：31 | [返回总览](../README.md)

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
| [198](https://leetcode.cn/problems/house-robber/) | [打家劫舍](198打家劫舍.cpp) | 线性 DP | `dp[i]` 取偷当前房屋或不偷当前房屋的最大值 |
| [213](https://leetcode.cn/problems/house-robber-ii/) | [打家劫舍 II](213打家劫舍II.cpp) | 环形线性 DP | 分别计算不偷首和不偷尾的两段区间 |
| [337](https://leetcode.cn/problems/house-robber-iii/) | [打家劫舍 III](337打家劫舍III.cpp) | 树形 DP | 返回偷与不偷当前节点时的最大金额 |
| [121](https://leetcode.cn/problems/best-time-to-buy-and-sell-stock/) | [买卖股票的最佳时机](121买卖股票的最佳时机.cpp) | 股票 DP：一次交易 | 持有状态只能从初始买入或昨天持有转移 |
| [122](https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-ii/) | [买卖股票的最佳时机 II](122买卖股票的最佳时机II.cpp) | 股票 DP：不限交易次数 | 买入时可使用昨天不持有股票时的利润 |
| [123](https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-iii/) | [买卖股票的最佳时机 III](123买卖股票的最佳时机III.cpp) | 股票 DP：至多两次交易 | 五个状态对应两次买入、卖出过程 |
| [309](https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-with-cooldown/) | [最佳买卖股票时机含冷冻期](309最佳买卖股票时机含冷冻期.cpp) | 股票 DP：冷冻期 | 持有、不持有、卖出、冷冻期四状态 |
| [714](https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/) | [买卖股票的最佳时机含手续费](714买卖股票的最佳时机含手续费.cpp) | 股票 DP：手续费 | 手续费只扣一次，买入时计入持有状态 |
| [300](https://leetcode.cn/problems/longest-increasing-subsequence/) | [最长递增子序列](300最长递增子序列.cpp) | 单序列非连续 DP | `dp[i]` 表示以下标 `i` 结尾的最长长度 |
| [674](https://leetcode.cn/problems/longest-continuous-increasing-subsequence/) | [最长连续递增序列](674最长连续递增序列.cpp) | 单数组连续 DP | 断开后当前长度重置为 1 |
| [718](https://leetcode.cn/problems/maximum-length-of-repeated-subarray/) | [最长重复子数组](718最长重复子数组.cpp) | 双数组连续 DP | 不相等时状态重置为 0 |
| [1143](https://leetcode.cn/problems/longest-common-subsequence/) | [最长公共子序列](1143最长公共子序列.cpp) | 双序列非连续 DP | 不相等时取上方和左方最优值 |
| [1049](https://leetcode.cn/problems/last-stone-weight-ii/) | [最后一块石头的重量 II](1049最后一块石头的重量II.cpp) | 01 背包 | 将石头分成重量尽量接近的两组 |
| [474](https://leetcode.cn/problems/ones-and-zeroes/) | [一和零](474一和零.cpp) | 二维 01 背包 | 0 和 1 的容量都要倒序遍历 |
| [518](https://leetcode.cn/problems/coin-change-ii/) | [零钱兑换 II](518零钱兑换II.cpp) | 完全背包组合计数 | 先遍历硬币再遍历金额，避免重复统计排列 |
| [377](https://leetcode.cn/problems/combination-sum-iv/) | [组合总和 IV](377组合总和IV.cpp) | 完全背包排列计数 | 先遍历金额再遍历物品，统计有序组合 |
| [322](https://leetcode.cn/problems/coin-change/) | [零钱兑换](322零钱兑换.cpp) | 完全背包最小值 | 不可凑成时返回 -1 |
| [188](https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-iv/) | [买卖股票的最佳时机 IV](188买卖股票的最佳时机IV.cpp) | 股票 DP：至多 k 次交易 | 奇数状态买入，偶数状态卖出 |
| [卡码网 52](https://kamacoder.com/problempage.php?pid=1052) | [携带研究材料](卡码网52携带研究材料.cpp) | 完全背包 | 每种材料可以重复选择，容量正序遍历 |
| [卡码网 57](https://kamacoder.com/problempage.php?pid=1057) | [爬楼梯](卡码网57爬楼梯.cpp) | 完全背包排列计数 | 外层遍历目标楼层，内层遍历步数 |

> 本目录存放以动态规划为**主要分类**的题目（背包、打家劫舍、股票、子序列等）。其他目录里用动规解的题仍留在原目录，另在 [算法/动态规划.md](../算法/动态规划.md) 中交叉索引。
