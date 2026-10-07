#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& a) {
    // 插入排序：左侧始终保持有序，把当前值插入到正确位置。
    for (int i = 1; i < static_cast<int>(a.size()); ++i) {
        int value = a[i];
        int j = i - 1;
        // 大于 value 的元素向右移动，循环结束后 j + 1 就是插入位置。
        while (j >= 0 && a[j] > value) {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = value;
    }
}
// 时间复杂度：最好 O(n)，平均/最坏 O(n^2)；空间复杂度 O(1)；稳定排序。

int main() {
    vector<int> a{5, 2, 4, 1, 3};
    insertionSort(a);
    for (int x : a) cout << x << ' ';
    cout << '\n';
}
