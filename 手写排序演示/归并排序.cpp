#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int>& a, vector<int>& temp, int left, int right) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSort(a, temp, left, mid);
    mergeSort(a, temp, mid + 1, right);
    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right) temp[k++] = a[i] <= a[j] ? a[i++] : a[j++];
    while (i <= mid) temp[k++] = a[i++];
    while (j <= right) temp[k++] = a[j++];
    for (int p = left; p <= right; ++p) a[p] = temp[p];
}

int main() {
    vector<int> a{5, 2, 4, 1, 3};
    vector<int> temp(a.size());
    mergeSort(a, temp, 0, static_cast<int>(a.size()) - 1);
    for (int x : a) cout << x << ' ';
    cout << '\n';
}
