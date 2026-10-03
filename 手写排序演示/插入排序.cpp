#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& a) {
    for (int i = 1; i < static_cast<int>(a.size()); ++i) {
        int value = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > value) {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = value;
    }
}

int main() {
    vector<int> a{5, 2, 4, 1, 3};
    insertionSort(a);
    for (int x : a) cout << x << ' ';
    cout << '\n';
}
