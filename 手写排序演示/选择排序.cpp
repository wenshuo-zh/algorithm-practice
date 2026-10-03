#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& a) {
    for (int i = 0; i < static_cast<int>(a.size()); ++i) {
        int minIndex = i;
        for (int j = i + 1; j < static_cast<int>(a.size()); ++j)
            if (a[j] < a[minIndex]) minIndex = j;
        swap(a[i], a[minIndex]);
    }
}

int main() {
    vector<int> a{5, 2, 4, 1, 3};
    selectionSort(a);
    for (int x : a) cout << x << ' ';
    cout << '\n';
}
