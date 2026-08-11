# 入门4 · 数组

> 进度：20 / 20 ✅ | [返回总览](../../../README.md)

| 题号 | 题目 | 技巧/考点 | 注意点/踩坑 |
|------|------|-----------|------|
| P1047 | [校门外的树](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P1047校门外的树.cpp) | 布尔数组标记法 | L≤10000，数组至少开10001 |
| P1427 | [小鱼的数字游戏](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P1427小鱼的数字游戏.cpp) | stack反向输出 | - |
| P1428 | [小鱼比可爱](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P1428小鱼比可爱.cpp) | 向前遍历计数 | - |
| P2550 | [彩票摇奖](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P2550彩票摇奖.cpp) | set查重+桶计数 | - |
| P5727 | [冰雹猜想](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P5727冰雹猜想.cpp) | stack模拟Collatz | - |
| P5728 | [旗鼓相当的对手](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P5728旗鼓相当的对手.cpp) | 双重循环+条件判断 | 🔧 j<=i 导致自匹配，改 j<i 删 /2（待修） |
| P5729 | [工艺品制作](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P5729工艺品制作.cpp) | 三维数组标记 | - |
| P1554 | [梦中的统计](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P1554梦中的统计.cpp) | while %10 /10 取位统计 | - |
| P1614 | [爱与愁的心痛](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P1614爱与愁的心痛.cpp) | 定长滑动窗口 | 🔧 minn 初值 101 太小，改 1e9 |
| P2141 | [珠心算测验](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P2141珠心算测验.cpp) | bool数组打表去重 | 🔧 直接计数导致同一数字被多次统计 |
| P2615 | [神奇的幻方](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P2615神奇的幻方.cpp) | 位置追踪+规则填幻方 | 🔧 遍历扫描+else分支导致逻辑全错 |
| P2911 | [Bovine Bones G](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P2911%20Bovine%20Bones%20G.cpp) | 三重循环统计频率 | 🔧 输出频率而非和；搜索上界用组合数越界 |
| P5730 | [显示屏](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P5730显示屏.cpp) | 三维char数组存字模+按行输出 | - |
| P1161 | [开灯](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P1161开灯.cpp) | 布尔数组+异或翻转 | - |
| P1205 | [方块旋转](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P1205方块旋转.cpp) | 矩阵旋转90°+镜像+多重变换判断 | 🔧 changeArr2原地读写导致数据污染，改用tmp数组 |
| P1319 | [压缩技术](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P1319压缩技术.cpp) | 游程编码解码 | 🔧 while(temp--)耗尽后temp=-1未读新值；改用if(temp<=0)触发读取 |
| P1320 | [压缩技术续集](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P1320压缩技术续集.cpp) | 游程编码编码+交替段长统计 | 🔧 矩阵以1开头需输出前导0；cin>>s2误放内层循环导致多读输入 |
| P1789 | [[MC生存]插火把](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P1789%5BMC生存%5D插火把.cpp) | 二维数组模拟光照范围+火把十字/萤石全方 | - |
| P5731 | [蛇形方阵](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P5731蛇形方阵.cpp) | 边界收缩法填螺旋矩阵 | - |
| P5732 | [杨辉三角](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门4_数组/P5732杨辉三角.cpp) | 递归+记忆化数组 | 🔧 row--后置递减→栈溢出（改row-1）；先计算后递归→依赖行未初始化（改正为先递归后计算） |
