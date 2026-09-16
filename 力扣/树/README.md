# 树

> 进度：34 | [返回总览](../README.md)

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
| [701](https://leetcode.cn/problems/insert-into-a-binary-search-tree/) | [二叉搜索树的插入操作](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/701二叉搜索树的插入操作_递归.cpp) | BST递归、迭代插入 | 空树时新节点直接作根 |
| [LCR149](https://leetcode.cn/problems/cong-shang-dao-xia-da-yin-er-cha-shu-lcof/) | [彩灯装饰记录I](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/LCR149彩灯装饰记录I.cpp) | 层序遍历 | - |
| [LCR150](https://leetcode.cn/problems/cong-shang-dao-xia-da-yin-er-cha-shu-ii-lcof/) | [彩灯装饰记录II](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/LCR150彩灯装饰记录II.cpp) | 层序遍历+分层 | - |
| [700](https://leetcode.cn/problems/search-in-a-binary-search-tree/) | [二叉搜索树中的搜索](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/700二叉搜索树中的搜索_递归.cpp) | BST递归、迭代搜索 | 利用左小右大的性质缩小范围 |
| [98](https://leetcode.cn/problems/validate-binary-search-tree/) | [验证二叉搜索树](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/98验证二叉搜索树_递归.cpp) | 中序遍历 | BST中序遍历必须严格递增 |
| [501](https://leetcode.cn/problems/find-mode-in-binary-search-tree/) | [二叉搜索树中的众数](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/501二叉搜索树中的众数.cpp) | 中序遍历 + 计数 | 众数可能不止一个；count 超过 maxCount 时要清空结果集 |
| [235](https://leetcode.cn/problems/lowest-common-ancestor-of-a-binary-search-tree/) | [二叉搜索树的最近公共祖先](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/235二叉搜索树的最近公共祖先.cpp) | BST 左小右大 | 第一次落在 p、q 之间的节点就是祖先 |
| [450](https://leetcode.cn/problems/delete-node-in-a-bst/) | [删除二叉搜索树中的节点](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/450删除二叉搜索树中的节点_值替换法.cpp) | BST 删除 | 左右都不空：右子树最小节点替换（值替换法），或左子树接到右子树最左端（子树搬迁法） |
| [669](https://leetcode.cn/problems/trim-a-binary-search-tree/) | [修剪二叉搜索树](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/669修剪二叉搜索树_递归.cpp) | 递归 / 迭代 | 小于 low 用右子树顶替，大于 high 用左子树顶替 |
| [108](https://leetcode.cn/problems/convert-sorted-array-to-binary-search-tree/) | [将有序数组转换为二叉搜索树](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/108将有序数组转换为二叉搜索树.cpp) | 分治 | 升序数组中间元素一定是根 |
| [538](https://leetcode.cn/problems/convert-bst-to-greater-tree/) | [把二叉搜索树转换为累加树](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/538把二叉搜索树转换为累加树_递归.cpp) | 反中序遍历 | 右 → 中 → 左 的顺序累加 |
| [654](https://leetcode.cn/problems/maximum-binary-tree/) | [最大二叉树](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/654最大二叉树.cpp) | 分治递归 | 区间最大值作根后切分数组 |
| [617](https://leetcode.cn/problems/merge-two-binary-trees/) | [合并二叉树](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/617合并二叉树.cpp) | 递归 | 两树都空返回空，只有一侧为空直接返回另一侧 |
| [236](https://leetcode.cn/problems/lowest-common-ancestor-of-a-binary-tree/) | [二叉树的最近公共祖先](https://github.com/wenshuo-zh/algorithm-practice/blob/main/力扣/树/236二叉树的最近公共祖先.cpp) | 后序回溯 | 左右子树都返回信号时，当前节点即祖先 |
