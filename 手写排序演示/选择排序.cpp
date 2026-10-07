#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& a) {
    // 选择排序：每轮在无序区间中找到最小值，与无序区间首元素交换。
    for (int i = 0; i < static_cast<int>(a.size()); ++i) {
        int minIndex = i;
        // [0, i) 已有序，扫描 [i, n) 找出本轮最小值。
        for (int j = i + 1; j < static_cast<int>(a.size()); ++j)
            if (a[j] < a[minIndex]) minIndex = j;
        swap(a[i], a[minIndex]);
    }
}
// 时间复杂度最好/平均/最坏均为 O(n^2)，空间复杂度 O(1)，不稳定排序。

int main() {
    vector<int> a{5, 2, 4, 1, 3};
    selectionSort(a);
    for (int x : a) cout << x << ' ';
    cout << '\n';
}
