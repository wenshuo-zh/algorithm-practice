# 图论

> 进度：21 | [返回总览](../README.md)

| 题号 | 题目 | 技巧/考点 | 注意点/踩坑 |
|------|------|------|------|
| [797](https://leetcode.cn/problems/all-paths-from-source-to-target/) | [所有可能的路径](797所有可能的路径.cpp) | DAG DFS 回溯 | 图无环 |
| [733](https://leetcode.cn/problems/flood-fill/) | [图像渲染](733图像渲染.cpp) | BFS/DFS 染色 | 原地标记避免重复访问 |
| [200](https://leetcode.cn/problems/number-of-islands/) | [岛屿数量](200岛屿数量.cpp) | DFS 连通分量 | 四方向搜索 |
| [卡码网 98](https://kamacoder.com/problempage.php?pid=1048) | [可达路径（邻接矩阵）](卡码网98可达路径_邻接矩阵.cpp) / [邻接表](卡码网98可达路径_邻接表.cpp) | DFS | 图无环 |
| [卡码网 99](https://kamacoder.com/problempage.php?pid=1049) | [计数孤岛（BFS）](卡码网99计数孤岛_bfs.cpp) / [DFS](卡码网99计数孤岛_dfs.cpp) | BFS/DFS 连通分量 | 四方向搜索 |
| [卡码网 100](https://kamacoder.com/problempage.php?pid=1050) | [最大岛屿面积（BFS）](卡码网100最大岛屿面积_bfs.cpp) / [DFS](卡码网100最大岛屿面积_dfs.cpp) | BFS/DFS 连通分量 | 统计单个岛屿面积 |
| [卡码网 101](https://kamacoder.com/problempage.php?pid=1051) | [孤岛的总面积（BFS）](卡码网101孤岛的总面积_bfs.cpp) / [DFS](卡码网101孤岛的总面积_dfs.cpp) | BFS/DFS 连通分量 | 排除边界连通岛屿 |
| [卡码网 102](https://kamacoder.com/problempage.php?pid=1052) | [沉没孤岛](卡码网102沉没孤岛_dfs.cpp) | DFS 连通分量 | 保留边界连通岛屿 |
| [卡码网 103](https://kamacoder.com/problempage.php?pid=1053) | [高山流水（暴力）](卡码网103高山流水_暴力超时.cpp) / [反向遍历](卡码网103高山流水_反向遍历.cpp) | 反向 DFS | 从边界向高处反向搜索 |
| [卡码网 104](https://kamacoder.com/problempage.php?pid=1054) | [建造最大岛屿](卡码网104建造最大岛屿.cpp) | DFS 编号 + 哈希去重 | 相邻岛屿编号需去重 |
| [卡码网 106](https://kamacoder.com/problempage.php?pid=1056) | [海岸线计算（解法一）](卡码网106海岸线计算_解法一.cpp) / [解法二](卡码网106海岸线计算.cpp) | 遍历相邻格子 | 相邻陆地共边扣除两次 |
| [417](https://leetcode.cn/problems/pacific-atlantic-water-flow/) | [太平洋大西洋水流问题](417太平洋大西洋水流问题.cpp) | 反向 DFS | 从两侧边界反向搜索 |
| [827](https://leetcode.cn/problems/making-a-large-island/) | [最大人工岛](827最大人工岛.cpp) | DFS 编号 + 哈希去重 | 相邻岛屿编号需去重 |
| [463](https://leetcode.cn/problems/island-perimeter/) | [岛屿的周长](463岛屿的周长.cpp) | 遍历相邻格子 | 相邻陆地共边扣除两次 |
| [127](https://leetcode.cn/problems/word-ladder/) | [单词接龙](127单词接龙.cpp) | BFS 分层搜索 | 单词入队时从字典删除 |
| [841](https://leetcode.cn/problems/keys-and-rooms/) | [钥匙和房间](841钥匙和房间.cpp) | DFS 可达性 | 从 0 号房间出发 |
| [1971](https://leetcode.cn/problems/find-if-path-exists-in-graph/) | [寻找图中是否存在路径](1971寻找图中是否存在路径.cpp) | 并查集 | 根节点相同则连通 |
| [684](https://leetcode.cn/problems/redundant-connection/) | [冗余连接](684冗余连接.cpp) | 并查集判环 | 合并前先判断是否同根 |
| [685](https://leetcode.cn/problems/redundant-connection-ii/) | [冗余连接II](685冗余连接II.cpp) | 入度 + 并查集 | 优先处理入度为 2 |
| [卡码网 105](https://kamacoder.com/problempage.php?pid=1055) | [有向图的完全可达性](卡码网105有向图的完全可达性.cpp) | DFS 可达性 | 仅判断从 1 可达所有节点 |
| [卡码网 110](https://kamacoder.com/problempage.php?pid=1060) | [字符串迁移](卡码网110字符串迁移.cpp) | BFS 分层搜索 | 终点必须在字典中 |
