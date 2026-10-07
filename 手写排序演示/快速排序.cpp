#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void quickSort(vector<int>& a, int left, int right) {
    // 每次选择基准值，把较小元素放到左侧、较大元素放到右侧，再递归处理子区间。
    if (left >= right) return;
    int i = left, j = right, pivot = a[left];
    while (i < j) {
        // 先从右向左找小于基准值的位置，再从左向右找大于基准值的位置。
        while (i < j && a[j] >= pivot) --j;
        while (i < j && a[i] <= pivot) ++i;
        if (i < j) swap(a[i], a[j]);
    }
    a[left] = a[i];
    a[i] = pivot;
    quickSort(a, left, i - 1);
    quickSort(a, i + 1, right);
}
// 平均时间复杂度 O(n log n)，最坏 O(n^2)；平均递归栈空间 O(log n)，不稳定排序。

int main() {
    vector<int> a{5, 2, 4, 1, 3};
    quickSort(a, 0, static_cast<int>(a.size()) - 1);
    for (int x : a) cout << x << ' ';
    cout << '\n';
}
