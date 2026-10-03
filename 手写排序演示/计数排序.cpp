#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void countingSort(vector<int>& a) {
    if (a.empty()) return;
    int low = a[0], high = a[0];
    for (int x : a) {
        low = min(low, x);
        high = max(high, x);
    }
    vector<int> count(high - low + 1);
    for (int x : a) ++count[x - low];
    int index = 0;
    for (int value = 0; value < static_cast<int>(count.size()); ++value) {
        while (count[value] > 0) {
            a[index++] = value + low;
            --count[value];
        }
    }
}

int main() {
    vector<int> a{5, -2, 4, 1, 3, -2};
    countingSort(a);
    for (int x : a) cout << x << ' ';
    cout << '\n';
}
