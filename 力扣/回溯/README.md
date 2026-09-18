# 回溯

> 进度：7 | [返回总览](../README.md)

| 题号 | 题目 | 技巧/考点 | 注意点/踩坑 |
|------|------|-----------|------|
| [77](https://leetcode.cn/problems/combinations/) | [组合](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/77组合.cpp) | 回溯 + 剪枝 | 剪枝条件 `i <= n + 1 - (k - path.size())` |
| [216](https://leetcode.cn/problems/combination-sum-iii/) | [组合总和 III](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/216组合总和III.cpp) | 回溯 + 双重剪枝 | 剩余数不够凑满 k、已选数已超过目标值，两处剪枝 |
| [17](https://leetcode.cn/problems/letter-combinations-of-a-phone-number/) | [电话号码的字母组合](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/17电话号码的字母组合.cpp) | 多集合组合 | 🔧 `digits` 为空要提前返回，否则 `str.size() == digits.size()` 立即成立、放进空串 |
| [39](https://leetcode.cn/problems/combination-sum/) | [组合总和](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/39组合总和.cpp) | 元素可重复取 | 🔧 递归传 `i`（含当前下标）而非 `startIndex`，否则出现 `[2,3,2]` 这类重复排列 |
| [40](https://leetcode.cn/problems/combination-sum-ii/) | [组合总和 II](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/40组合总和II.cpp) | 树层去重 | 排序后 `i > startIndex && candidates[i] == candidates[i-1]` 跳过同层重复 |
| [131](https://leetcode.cn/problems/palindrome-partitioning/) | [分割回文串](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/131分割回文串.cpp) | 切割问题 | `for` 的 `i` 是这一刀的终点，切出 `[startIndex, i]` 后把 `i + 1` 往后交给递归 |
| [93](https://leetcode.cn/problems/restore-ip-addresses/) | [复原IP地址](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/回溯/93复原IP地址.cpp) | 切割问题 | 🔧 `pointNums == 3` 必须无条件 `return`，否则还会继续切出 4 段以上的无效分支 |

> 本目录存放以回溯为**主要分类**的题目（组合、排列、子集、切割、棋盘类）。树/数组等目录里用回溯解的题仍留在原目录，另在 [算法/回溯.md](../算法/回溯.md) 中交叉索引。
