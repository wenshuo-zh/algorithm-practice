# 数组

> 进度：16 | [返回总览](../README.md)

| 题号 | 题目 | 技巧/考点 | 注意点/踩坑 |
|------|------|-----------|------|
| [118](https://leetcode.cn/problems/pascals-triangle/) | [杨辉三角](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/数组/118杨辉三角.cpp) | 二维数组递推 | - |
| [26](https://leetcode.cn/problems/remove-duplicates-from-sorted-array/) | [删除数组中重复的元素](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/数组/26删除数组中重复的元素.cpp) | 双指针原地去重 | - |
| [283](https://leetcode.cn/problems/move-zeroes/) | [移动零](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/数组/283移动零.cpp) | 双指针交换 | - |
| [383](https://leetcode.cn/problems/ransom-note/) | [赎金信](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/哈希表/383赎金信.cpp) | 交叉索引（主分类：哈希表） | 不重复计数 |
| [27](https://leetcode.cn/problems/remove-element/) | [移除元素](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/数组/27移除元素.cpp) | 双指针（快慢指针覆盖） | - |
| [704](https://leetcode.cn/problems/binary-search/) | [二分查找](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/数组/704二分查找.cpp) | 二分查找（两种区间边界） | - |
| [209](https://leetcode.cn/problems/minimum-size-subarray-sum/) | [长度最小的子数组](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/数组/209长度最小的子数组.cpp) | 滑动窗口（双指针） | 🔧 暴力O(n²)超时，改用滑动窗口O(n) |
| [977](https://leetcode.cn/problems/squares-of-a-sorted-array/) | [有序数组的平方](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/数组/977有序数组的平方.cpp) | 双指针（两端向中间） | - |
| [59](https://leetcode.cn/problems/spiral-matrix-ii/) | [螺旋矩阵II](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/数组/59螺旋矩阵.cpp) | 模拟（边界收缩 / 按圈，两解） | - |
| [35](https://leetcode.cn/problems/search-insert-position/) | [搜索插入位置](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/数组/35搜索插入位置.cpp) | 二分查找下界 | 返回首个不小于 target 的位置 |
| [88](https://leetcode.cn/problems/merge-sorted-array/) | [合并两个有序数组](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/数组/88合并两个有序数组.cpp) | 从后向前双指针 | 避免覆盖 nums1 的有效元素 |
| [48](https://leetcode.cn/problems/rotate-image/) | [旋转图像](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/Hot100/48旋转图像.cpp) | 矩阵转置 + 反转 | 原地完成旋转 |
| [54](https://leetcode.cn/problems/spiral-matrix/) | [螺旋矩阵](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/Hot100/54螺旋矩阵.cpp) | 模拟 / 收缩边界 | 每次遍历后检查边界是否交错 |
| [73](https://leetcode.cn/problems/set-matrix-zeroes/) | [矩阵置零](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/Hot100/73矩阵置零.cpp) | 矩阵标记 | 文件保留辅助数组和原地标记两种解法 |
| [240](https://leetcode.cn/problems/search-a-2d-matrix-ii/) | [搜索二维矩阵 II](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/Hot100/240搜索二维矩阵II.cpp) | Z 型搜索 | 从右上角排除一行或一列 |
| 卡码网44 | [开发商购买土地](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/数组/卡码网44开发商购买土地.cpp) | 前缀和（行列前缀和枚举分割线） | - |
| 卡码网58 | [区间和](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/数组/卡码网58区间和.cpp) | 前缀和 | 🔧 暴力O(nq)超时，改前缀和O(1)查询 |
