#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void quickSort(vector<int>& a, int left, int right) {
    if (left >= right) return;
    int i = left, j = right, pivot = a[left];
    while (i < j) {
        while (i < j && a[j] >= pivot) --j;
        while (i < j && a[i] <= pivot) ++i;
        if (i < j) swap(a[i], a[j]);
    }
    a[left] = a[i];
    a[i] = pivot;
    quickSort(a, left, i - 1);
    quickSort(a, i + 1, right);
}

int main() {
    vector<int> a{5, 2, 4, 1, 3};
    quickSort(a, 0, static_cast<int>(a.size()) - 1);
    for (int x : a) cout << x << ' ';
    cout << '\n';
}
