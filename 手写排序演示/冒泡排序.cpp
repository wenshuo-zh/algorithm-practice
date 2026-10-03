#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& a) {
    for (int end = static_cast<int>(a.size()) - 1; end > 0; --end) {
        bool swapped = false;
        for (int i = 0; i < end; ++i) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    vector<int> a{5, 2, 4, 1, 3};
    bubbleSort(a);
    for (int x : a) cout << x << ' ';
    cout << '\n';
}
