#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void siftDown(vector<int>& a, int root, int size) {
    // 向下调整：维护以 root 为根的大顶堆，孩子下标为 2 * root + 1 和 2 * root + 2。
    while (true) {
        int child = root * 2 + 1;
        if (child >= size) return;
        if (child + 1 < size && a[child + 1] > a[child]) ++child;
        if (a[root] >= a[child]) return;
        swap(a[root], a[child]);
        root = child;
    }
}

void heapSort(vector<int>& a) {
    // 从最后一个非叶子结点开始建大顶堆，建堆时间复杂度为 O(n)。
    for (int i = static_cast<int>(a.size()) / 2 - 1; i >= 0; --i)
        siftDown(a, i, static_cast<int>(a.size()));
    // 每次把堆顶最大值交换到末尾，再缩小堆并重新调整。
    for (int end = static_cast<int>(a.size()) - 1; end > 0; --end) {
        swap(a[0], a[end]);
        siftDown(a, 0, end);
    }
}
// 总时间复杂度 O(n log n)，额外空间复杂度 O(1)，不稳定排序。

int main() {
    vector<int> a{5, 2, 4, 1, 3};
    heapSort(a);
    for (int x : a) cout << x << ' ';
    cout << '\n';
}
