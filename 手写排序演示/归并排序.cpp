#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int>& a, vector<int>& temp, int left, int right) {
    // 分治：递归拆分区间，分别排序后再合并两个有序区间。
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSort(a, temp, left, mid);
    mergeSort(a, temp, mid + 1, right);
    int i = left, j = mid + 1, k = left;
    // 双指针取较小值；相等时优先取左边元素以保持稳定性。
    while (i <= mid && j <= right) temp[k++] = a[i] <= a[j] ? a[i++] : a[j++];
    while (i <= mid) temp[k++] = a[i++];
    while (j <= right) temp[k++] = a[j++];
    for (int p = left; p <= right; ++p) a[p] = temp[p];
}
// 时间复杂度始终为 O(n log n)，需要 O(n) 临时数组，稳定排序。

int main() {
    vector<int> a{5, 2, 4, 1, 3};
    vector<int> temp(a.size());
    mergeSort(a, temp, 0, static_cast<int>(a.size()) - 1);
    for (int x : a) cout << x << ' ';
    cout << '\n';
}
