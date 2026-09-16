# 栈与队列

> 进度：7 | [返回总览](../README.md)

| 题号 | 题目 | 技巧/考点 | 注意点/踩坑 |
|------|------|-----------|------|
| [232](https://leetcode.cn/problems/implement-queue-using-stacks/) | [用栈实现队列](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/栈与队列/232用栈实现队列.cpp) | 双栈模拟队列 | - |
| [225](https://leetcode.cn/problems/implement-stack-using-queues/) | [用队列实现栈](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/栈与队列/225用队列实现栈.cpp) | 单队列循环模拟栈 | - |
| [20](https://leetcode.cn/problems/valid-parentheses/) | [有效的括号](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/栈与队列/20有效的括号.cpp) | 栈匹配括号 | 先判栈空再取栈顶，遍历完栈空才匹配 |
| [1047](https://leetcode.cn/problems/remove-all-adjacent-duplicates-in-string/) | [删除字符串中的所有相邻重复项](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/栈与队列/1047删除字符串中的所有相邻重复项.cpp) | 栈模拟消除 | 使用字符串拼接并反转，避免头部插入导致 `O(n²)` |
| [150](https://leetcode.cn/problems/evaluate-reverse-polish-notation/) | [逆波兰表达式求值](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/栈与队列/150逆波兰表达式求值.cpp) | 栈模拟运算 | 减法、除法先弹出的是右操作数 |
| [239](https://leetcode.cn/problems/sliding-window-maximum/) | [滑动窗口最大值](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/栈与队列/239滑动窗口最大值.cpp) | 单调队列 | 保存下标，判断元素是否滑出窗口 |
| [347](https://leetcode.cn/problems/top-k-frequent-elements/) | [前 K 个高频元素](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/栈与队列/347前K个高频元素.cpp) | 哈希表 + 小顶堆 | 堆大小超过 `k` 时弹出频率最小元素 |
