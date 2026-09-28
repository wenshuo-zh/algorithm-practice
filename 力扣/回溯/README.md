# 回溯

> 进度：14 | [返回总览](../README.md)

| 题号 | 题目 | 技巧/考点 | 注意点/踩坑 |
|------|------|-----------|------|
| [77](https://leetcode.cn/problems/combinations/) | [组合](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/77组合.cpp) | 回溯 + 剪枝 | 剪枝条件 `i <= n + 1 - (k - path.size())` |
| [216](https://leetcode.cn/problems/combination-sum-iii/) | [组合总和 III](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/216组合总和III.cpp) | 回溯 + 双重剪枝 | 剩余数不够凑满 k、已选数已超过目标值，两处剪枝 |
| [17](https://leetcode.cn/problems/letter-combinations-of-a-phone-number/) | [电话号码的字母组合](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/17电话号码的字母组合.cpp) | 多集合组合 | 🔧 `digits` 为空要提前返回，否则 `str.size() == digits.size()` 立即成立、放进空串 |
| [39](https://leetcode.cn/problems/combination-sum/) | [组合总和](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/39组合总和.cpp) | 元素可重复取 | 🔧 递归传 `i`（含当前下标）而非 `startIndex`，否则出现 `[2,3,2]` 这类重复排列 |
| [40](https://leetcode.cn/problems/combination-sum-ii/) | [组合总和 II](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/40组合总和II.cpp) | 树层去重 | 排序后 `i > startIndex && candidates[i] == candidates[i-1]` 跳过同层重复 |
| [131](https://leetcode.cn/problems/palindrome-partitioning/) | [分割回文串](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/131分割回文串.cpp) | 切割问题 | `for` 的 `i` 是这一刀的终点，切出 `[startIndex, i]` 后把 `i + 1` 往后交给递归 |
| [93](https://leetcode.cn/problems/restore-ip-addresses/) | [复原IP地址](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/93复原IP地址.cpp) | 切割问题 | 🔧 `pointNums == 3` 必须无条件 `return`，否则还会继续切出 4 段以上的无效分支 |
| [78](https://leetcode.cn/problems/subsets/) | [子集](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/78子集.cpp) | 子集型回溯 | 每个搜索节点都是一个子集，进入递归前收集 `path` |
| [90](https://leetcode.cn/problems/subsets-ii/) | [子集 II](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/90子集II.cpp) | 子集型回溯 + 树层去重 | 排序后跳过同层相邻重复元素 |
| [46](https://leetcode.cn/problems/permutations/) | [全排列](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/46全排列.cpp) | 排列型回溯 | 用 `used` 标记当前路径已选元素 |
| [47](https://leetcode.cn/problems/permutations-ii/) | [全排列 II](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/47全排列II.cpp) | 排列型回溯 + 去重 | `!used[i-1]` 表示同层重复，需跳过 |
| [51](https://leetcode.cn/problems/n-queens/) | [N 皇后](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/51N皇后.cpp) | 棋盘型回溯 | 逐行放置，仅检查上方列与两条对角线 |
| [37](https://leetcode.cn/problems/sudoku-solver/) | [解数独](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/37解数独.cpp) | 棋盘型回溯 | 找到一组可行解后立刻返回 `true` |
| [491](https://leetcode.cn/problems/non-decreasing-subsequences/) | [递增子序列](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/491递增子序列.cpp) | 子序列回溯 + 树层去重 | 不能排序；每层哈希集合去重以保留原顺序 |

> 本目录存放以回溯为**主要分类**的题目（组合、排列、子集、切割、棋盘类）。树/数组等目录里用回溯解的题仍留在原目录，另在 [算法/回溯.md](../算法/回溯.md) 中交叉索引。
