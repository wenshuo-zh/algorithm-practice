# 树

> 进度：23 | [返回总览](../README.md)

| 题号 | 题目 | 技巧/考点 | 注意点/踩坑 |
|------|------|-----------|------|
| [100](https://leetcode.cn/problems/same-tree/) | [相同的树](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/100相同的树.cpp) | 递归比较 | - |
| [101](https://leetcode.cn/problems/symmetric-tree/) | [对称二叉树](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/101对称二叉树.cpp) | 递归比较镜像节点 | 左左对右右、左右对右左 |
| [104](https://leetcode.cn/problems/maximum-depth-of-binary-tree/) | [二叉树的最大深度](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/104二叉树的最大深度.cpp) | 递归求深度 | - |
| [110](https://leetcode.cn/problems/balanced-binary-tree/) | [平衡二叉树](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/110平衡二叉树.cpp) | 后序遍历求高度 | 用 `-1` 向上传递不平衡状态 |
| [226](https://leetcode.cn/problems/invert-binary-tree/) | [反转二叉树](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/226反转二叉树.cpp) | 递归交换左右 | - |
| [222](https://leetcode.cn/problems/count-complete-tree-nodes/) | [完全二叉树的节点个数](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/222完全二叉树的节点个数.cpp) | 满二叉树性质 + 递归 | 左右深度相同时可直接计算节点数 |
| [257](https://leetcode.cn/problems/binary-tree-paths/) | [二叉树的所有路径](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/257二叉树的所有路径.cpp) | 递归回溯 | 子递归返回后需要回溯路径 |
| [404](https://leetcode.cn/problems/sum-of-left-leaves/) | [左叶子之和](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/404左叶子之和.cpp) | 递归遍历 | 判断左节点是否为叶子节点 |
| [513](https://leetcode.cn/problems/find-bottom-left-tree-value/) | [找树左下角的值](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/513找树左下角的值_递归.cpp) | 递归、层序遍历 | 最深层第一个节点是最左节点 |
| [112](https://leetcode.cn/problems/path-sum/) | [路径总和](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/112路径总和_值传递.cpp) | DFS + 回溯 | 到叶子节点时判断剩余和是否为 0 |
| [113](https://leetcode.cn/problems/path-sum-ii/) | [路径总和 II](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/113路径总和II.cpp) | DFS + 路径回溯 | 子树遍历后弹出当前节点 |
| [106](https://leetcode.cn/problems/construct-binary-tree-from-inorder-and-postorder-traversal/) | [从中序与后序遍历序列构造二叉树](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/106从中序与后序遍历序列构造二叉树.cpp) | 遍历序列分割 | 后序最后一个节点是根节点 |
| [105](https://leetcode.cn/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) | [从前序与中序遍历序列构造二叉树](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/105从前序与中序遍历序列构造二叉树.cpp) | 遍历序列分割 | 前序第一个节点是根节点 |
| [199](https://leetcode.cn/problems/binary-tree-right-side-view/) | [二叉树的右视图](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/199二叉树的右视图.cpp) | 层序遍历 | 每层最后一个节点加入结果 |
| [637](https://leetcode.cn/problems/average-of-levels-in-binary-tree/) | [二叉树的层平均值](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/637二叉树的层平均值.cpp) | 层序遍历 | 每层累加节点值后求平均值 |
| [429](https://leetcode.cn/problems/n-ary-tree-level-order-traversal/) | [N 叉树的层序遍历](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/429N叉树的层序遍历.cpp) | 队列层序遍历 | 按层处理节点和 children |
| [515](https://leetcode.cn/problems/find-largest-value-in-each-tree-row/) | [在每个树行中找最大值](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/515在每个树行中找最大值.cpp) | 层序遍历 | 每层初始化最大值 |
| [116](https://leetcode.cn/problems/populating-next-right-pointers-in-each-node/) | [填充每个节点的下一个右侧节点指针](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/116填充每个节点的下一个右侧节点指针.cpp) | 层序遍历 | 每层最后一个节点不连接 next |
| [111](https://leetcode.cn/problems/minimum-depth-of-binary-tree/) | [二叉树的最小深度](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/111二叉树的最小深度.cpp) | BFS | 遇到第一个叶子节点即可返回 |
| [530](https://leetcode.cn/problems/minimum-absolute-difference-in-bst/) | [二叉搜索树的最小绝对差](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/530二叉搜索树的最小绝对差.cpp) | 中序遍历+相邻差 | - |
| [701](https://leetcode.cn/problems/insert-into-a-binary-search-tree/) | [二叉搜索树的插入操作](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/701二叉搜索树的插入操作.cpp) | BST递归插入 | - |
| [LCR149](https://leetcode.cn/problems/cong-shang-dao-xia-da-yin-er-cha-shu-lcof/) | [彩灯装饰记录I](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/LCR149彩灯装饰记录I.cpp) | 层序遍历 | - |
| [LCR150](https://leetcode.cn/problems/cong-shang-dao-xia-da-yin-er-cha-shu-ii-lcof/) | [彩灯装饰记录II](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/LCR150彩灯装饰记录II.cpp) | 层序遍历+分层 | - |
