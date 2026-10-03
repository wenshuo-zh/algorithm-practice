#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void siftDown(vector<int>& a, int root, int size) {
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
    for (int i = static_cast<int>(a.size()) / 2 - 1; i >= 0; --i)
        siftDown(a, i, static_cast<int>(a.size()));
    for (int end = static_cast<int>(a.size()) - 1; end > 0; --end) {
        swap(a[0], a[end]);
        siftDown(a, 0, end);
    }
}

int main() {
    vector<int> a{5, 2, 4, 1, 3};
    heapSort(a);
    for (int x : a) cout << x << ' ';
    cout << '\n';
}
