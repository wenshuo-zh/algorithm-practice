# 字符串

> 进度：9 | [返回总览](../README.md)

| 题号 | 题目 | 技巧/考点 | 注意点/踩坑 |
|------|------|-----------|------|
| [13](https://leetcode.cn/problems/roman-to-integer/) | [罗马数字转整数](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/字符串/13罗马数字转整数.cpp) | 哈希映射+遍历 | - |
| [151](https://leetcode.cn/problems/reverse-words-in-a-string/) | [反转字符串中的单词](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/字符串/151反转字符串中的单词.cpp) | 快慢指针+双指针 | 先去多余空格，再整体反转、逐个单词反转 |
| [344](https://leetcode.cn/problems/reverse-string/) | [反转字符串](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/字符串/344反转字符串.cpp) | 双指针 | 左右指针交换 |
| [58](https://leetcode.cn/problems/length-of-last-word/) | [最后一个单词的长度](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/字符串/58最后一个单词的长度.cpp) | 反向遍历 | - |
| [541](https://leetcode.cn/problems/reverse-string-ii/) | [反转字符串II](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/字符串/541反转字符串II.cpp) | 模拟+双指针 | 每次步长为 `2k` |
| 卡码网54 | [替换数字](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/字符串/卡码网54替换数字.cpp) | 双指针 | 从后往前填充，避免覆盖原字符 |
| 卡码网55 | [右旋字符串](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/字符串/卡码网55右旋字符串.cpp) | 三次反转 | 先整体反转，再反转前 `k` 个和剩余部分 |
| [28](https://leetcode.cn/problems/find-the-index-of-the-first-occurrence-in-a-string/) | [实现 strStr()](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/字符串/28实现strStr.cpp) | KMP | `i` 不回退，`j` 失配时按 `next` 回退 |
| [459](https://leetcode.cn/problems/repeated-substring-pattern/) | [重复的子字符串](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/字符串/459重复的子字符串.cpp) | KMP+移动匹配 | `n % len == 0` 且存在相同前后缀 |
