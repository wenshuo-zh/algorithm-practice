#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void countingSort(vector<int>& a) {
    // 计数排序：统计每个值出现的次数，再按值域顺序写回数组。
    if (a.empty()) return;
    int low = a[0], high = a[0];
    for (int x : a) {
        low = min(low, x);
        high = max(high, x);
    }
    vector<int> count(high - low + 1);
    // 用 x - low 映射下标，支持包含负数的数组。
    for (int x : a) ++count[x - low];
    int index = 0;
    // count[value] 表示该值剩余出现次数；本实现是简单计数版。
    for (int value = 0; value < static_cast<int>(count.size()); ++value) {
        while (count[value] > 0) {
            a[index++] = value + low;
            --count[value];
        }
    }
}
// 时间和额外空间复杂度均为 O(n + k)，k 为值域大小；本实现不保证稳定性。

int main() {
    vector<int> a{5, -2, 4, 1, 3, -2};
    countingSort(a);
    for (int x : a) cout << x << ' ';
    cout << '\n';
}
