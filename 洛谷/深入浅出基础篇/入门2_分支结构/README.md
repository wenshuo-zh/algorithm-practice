# 入门2 · 分支结构

> 进度：18 / 18 ✅ | [返回总览](../../../README.md)

| 题号 | 题目 | 技巧/考点 | 踩坑 |
|------|------|-----------|------|
| P2433 | [小学数学N合一](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门2_分支结构/P2433小学数学N合一.cpp) | 多分支if-else链 | 子问题13需 `cbrt()` 立方根 |
| P5709 | [苹果和虫子](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门2_分支结构/P5709苹果和虫子.cpp) | 向上取整+边界判断 | `t=0` 会除零；剩余苹果可能为负需输出0 |
| P5711 | [闰年判断](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门2_分支结构/P5711闰年判断.cpp) | 复合条件逻辑运算 | `&&` 优先级高于 `||` |
| P5712 | [Apples](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门2_分支结构/P5712Apples.cpp) | 单复数条件分支 | 0和1都用单数 `apple`，不是常规英语规则 |
| P5713 | [洛谷团队系统](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门2_分支结构/P5713洛谷团队系统.cpp) | 不等式比较分支 | - |
| P5714 | [肥胖问题](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门2_分支结构/P5714肥胖问题.cpp) | 多区间分级判断 | Overweight需先输出BMI值再输出文字 |
| P5715 | [三位数排序](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门2_分支结构/P5715三位数排序.cpp) | 嵌套if三数排序 | 6种排列易漏；更优方案是三次swap |
| P5716 | [月份天数](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门2_分支结构/P5716月份天数.cpp) | 分支表驱动判断 | 2月需嵌套闰年判断；31天月份用 `||` 合并 |
| P1085 | [不高兴的津津](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门2_分支结构/P1085不高兴的津津.cpp) | 最大值的索引追踪 | 只有超过8小时才输出，刚好8小时输出0 |
| P1909 | [买铅笔](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门2_分支结构/P1909买铅笔.cpp) | 三方案取最小值 | ceil向上取整套数；price初值要够大 |
| P5717 | [三角形分类](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门2_分支结构/P5717三角形分类.cpp) | 先排序再多级分类 | Not triangle必须提前 `return 0`；等边必同时输出等腰 |
| P1424 | [小鱼的航程（改进版）](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门2_分支结构/P1424小鱼的航线程（改进版）.cpp) | 星期循环+条件累加 | 周末(6,7)跳过；循环n天非n周 |
| P1888 | [三角函数](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门2_分支结构/P1888三角函数.cpp) | 排序+最大公约数约分 | 需用 `gcd` 约分；输出"分子/分母"格式 |
| P1046 | [陶陶摘苹果](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门2_分支结构/P1046陶陶摘苹果.cpp) | 遍历计数满足条件 | 板凳高度30要加上；`<=` 非 `<` |
| P1055 | [ISBN号码](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门2_分支结构/P1055 ISBN号码.cpp) | 字符串解析+模11校验 | 识别码为10时用'X'表示；修改后需输出完整字符串 |
| P5710 | [数的性质](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门2_分支结构/P5710数的性质.cpp) | 布尔变量组合四态判断 | 四个输出依次：与、或、异或、或非 |
| P1422 | [小玉家的电费](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门2_分支结构/P1422小玉家的电费.cpp) | 阶梯分段计费 | 跨段时前段全额+后段增量；`%.1lf`保留一位 |
| P4414 | [ABC](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/深入浅出基础篇/入门2_分支结构/P4414ABC.cpp) | 排序后按字母映射输出 | 先排序确定abc值，再按输入字符串顺序输出 |
