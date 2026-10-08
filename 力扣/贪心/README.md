# 贪心

> 进度：17 | [返回总览](../README.md)

| 题号 | 题目 | 技巧/考点 | 注意点/踩坑 |
|------|------|-----------|------|
| [455](https://leetcode.cn/problems/assign-cookies/) | [分发饼干](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/贪心/455分发饼干.cpp) | 排序 + 贪心 | 不能满足当前胃口最小的孩子时，当前饼干可直接丢弃 |
| [376](https://leetcode.cn/problems/wiggle-subsequence/) | [摆动序列](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/贪心/376摆动序列.cpp) | 峰谷贪心 | 相邻相等时不更新前一差值，保证后续拐点能被统计 |
| [53](https://leetcode.cn/problems/maximum-subarray/) | [最大子数组和](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/贪心/53最大子数组和.cpp) | 连续子数组贪心 | 全负数组也要返回最大元素，结果初始化为 `nums[0]` |
| [122](https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-ii/) | [买卖股票的最佳时机 II](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/贪心/122买卖股票的最佳时机II.cpp) | 收集正收益 | 只累加相邻两日的正差值 |
| [55](https://leetcode.cn/problems/jump-game/) | [跳跃游戏](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/贪心/55跳跃游戏.cpp) | 覆盖范围 | 遍历下标不能超过当前最远覆盖范围 |
| [45](https://leetcode.cn/problems/jump-game-ii/) | [跳跃游戏 II](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/贪心/45跳跃游戏II.cpp) | 分层覆盖范围 | 只遍历到 `n - 2`，终点不需要再跳 |
| [1005](https://leetcode.cn/problems/maximize-sum-of-array-after-k-negations/) | [K 次取反后最大化的数组和](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/贪心/1005K次取反后最大化的数组和.cpp) | 排序 + 取反 | 剩余次数为奇数时，翻转绝对值最小的元素 |
| [134](https://leetcode.cn/problems/gas-station/) | [加油站](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/贪心/134加油站.cpp) | 前缀和 / 贪心 | 总油量小于总消耗时无解；两种解法写在同一文件 |
| [135](https://leetcode.cn/problems/candy/) | [分发糖果](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/贪心/135分发糖果.cpp) | 两趟贪心 | 第二趟必须用 `max` 取大，直接赋值会覆盖第一趟已合法的结果 |
| [860](https://leetcode.cn/problems/lemonade-change/) | [柠檬水找零](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/贪心/860柠檬水找零.cpp) | 优先用大面额找零 | 找 20 元时优先「一张 10 + 一张 5」，10 元只能用于 20 元找零 |
| [406](https://leetcode.cn/problems/queue-reconstruction-by-height/) | [根据身高重建队列](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/贪心/406根据身高重建队列.cpp) | 排序 + 插入 | 先按身高降序、k 升序排；vector 与 list 两种解法写在同一文件 |

| [452](https://leetcode.cn/problems/minimum-number-of-arrows-to-burst-balloons/) | [用最少的箭引爆气球](452用最少的箭引爆气球.cpp) | 右端点排序 + 贪心 | 端点相等时可共用一支箭 |
| [435](https://leetcode.cn/problems/non-overlapping-intervals/) | [无重叠区间](435无重叠区间.cpp) | 排序 + 保留较小右端点 | 端点相等不算重叠 |
| [763](https://leetcode.cn/problems/partition-labels/) | [划分字母区间](763划分字母区间.cpp) | 最远出现位置 + 贪心 | 到达当前片段最远下标时切分，片段数尽可能多 |
| [56](https://leetcode.cn/problems/merge-intervals/) | [合并区间](56合并区间.cpp) | 排序 + 合并 | 重叠时更新结果末尾区间的右边界 |
| [738](https://leetcode.cn/problems/monotone-increasing-digits/) | [单调递增的数字](738单调递增的数字.cpp) | 从右向左贪心 | 前一位减一可能引发连锁逆序，flag 起的后缀填 9 |
| [968](https://leetcode.cn/problems/binary-tree-cameras/) | [监控二叉树](968监控二叉树.cpp) | 后序遍历 + 三状态贪心 | 优先处理未覆盖孩子，最后检查根节点 |

> 本目录存放以贪心为**主要分类**的题目。其他目录里用贪心解的题仍留在原目录，另在 [算法/贪心.md](../算法/贪心.md) 中交叉索引。
