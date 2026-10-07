#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& a) {
    // 冒泡排序：相邻元素逆序时交换，每轮把当前最大值放到未排序区间末尾。
    for (int end = static_cast<int>(a.size()) - 1; end > 0; --end) {
        bool swapped = false;
        // end 右侧已经有序，本轮只遍历 [0, end]。
        for (int i = 0; i < end; ++i) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}
// 时间复杂度：最好 O(n)，平均/最坏 O(n^2)；空间复杂度：O(1)；稳定排序。

int main() {
    vector<int> a{5, 2, 4, 1, 3};
    bubbleSort(a);
    for (int x : a) cout << x << ' ';
    cout << '\n';
}
