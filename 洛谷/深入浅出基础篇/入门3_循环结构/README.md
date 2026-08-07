# 入门3 · 循环结构

> 进度：20 / 21 🔄（P1009 高精度搁置） | [返回总览](../../../README.md)

| 题号 | 题目 | 技巧/考点 | 踩坑 |
|------|------|-----------|------|
| P5718 | [找最小值](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P5718找最小值.cpp) | 在线极值（边读边比） | min初值1001依赖题目约束 ai≤1000 |
| P5719 | [分类平均](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P5719分类平均.cpp) | 循环分类统计 | 整数除法转浮点需 `1.0*sum/count`，忘记则结果恒为0 |
| P5720 | [一尺之棰](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P5720一尺之棰.cpp) | while模拟不定次循环 | ans初值=1，输入1时输出1天，逻辑正确但不够直观 |
| P5721 | [数字直角三角形](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P5721数字直角三角形.cpp) | 嵌套循环+格式输出 | 循环内修改循环变量和额外temp，可读性差 |
| P5722 | [数列求和](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P5722数列求和.cpp) | 累加循环 | 简单无坑（可用公式 n(n+1)/2） |
| P5723 | [质数口袋](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P5723质数口袋.cpp) | 质数判定+累加截断 | `isPrime` 为 O(n) 未优化到 sqrt |
| P5724 | [求极差](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P5724求极差.cpp) | 同时求最大最小 | max初值0依赖正整数约束 |
| P5725 | [求三角形](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P5725求三角形.cpp) | 双重循环+格式控制 | 第二个三角形 `temp += k-1` 依赖for退出语义，隐含off-by-one |
| P5726 | [打分](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P5726打分.cpp) | 去极值求平均 | n=2时除以0会RE |
| P1009 | [阶乘之和](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P1009阶乘之和.cpp) | 嵌套循环求阶乘 | ⚠️ **待完善**：n≤50需高精度，当前int必溢出 |
| P1035 | [级数求和](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P1035级数求和.cpp) | while(1)+break | `1.0/n` 转浮点除法 |
| P1075 | [质因数分解](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P1075质因数分解.cpp) | 找最小质因子→求另一半 | `isPrime` 检查多余：n是两质数之积，第一个因子必为质数 |
| P1089 | [津津的储蓄计划](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P1089津津的储蓄计划.cpp) | 按月模拟+提前return | `left/100*100` 整数截断取整百；赤字直接return |
| P1217 | [回文质数](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P1217回文质数.cpp) | 构造回文而非枚举判断 | 特判5/7/11时边界检查不完善；偶位回文必被11整除是关键剪枝 |
| P1307 | [数字反转](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P1307数字反转.cpp) | while取位反转 | `rev = rev*10 + 末位` 经典模板 |
| P1420 | [最长连号](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P1420最长连号.cpp) | 连续段统计 | 🔧 **曾修复**：连号断裂时 count 重置 bug（已修正）；循环结束需再次比较防末尾最长 |
| P1423 | [小玉在游泳](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P1423小玉在游泳.cpp) | while等比累加 | s≤2硬编码特判，s=0时也输出1步 |
| P1720 | [月落乌啼算钱](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P1720月落乌啼算钱.cpp) | Binet公式求斐波那契 | 浮点累积乘法有精度损失；n大时可能溢出double |
| P1980 | [计数问题](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P1980计数问题.cpp) | to_string+字符计数 | `x+'0'` 数字转字符比较 |
| P2669 | [金币](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P2669金币.cpp) | 双计数器模拟 | day++、count=0、count++三者顺序敏感，调换则出错 |
| P4956 | [Davor](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门3_循环结构/P4956 Davor.cpp) | 方程化简+枚举k | 7x+21k=n/52；x需为整数且≤100 |
