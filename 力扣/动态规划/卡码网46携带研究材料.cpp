#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int itemCount = 0;
    int capacity = 0;
    cin >> itemCount >> capacity;

    vector<int> weight(itemCount);
    vector<int> value(itemCount);
    for (int i = 0; i < itemCount; ++i) {
        cin >> weight[i];
    }
    for (int i = 0; i < itemCount; ++i) {
        cin >> value[i];
    }

    vector<int> dp(capacity + 1, 0);
    for (int i = 0; i < itemCount; ++i) {
        for (int j = capacity; j >= weight[i]; --j) {
            dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
        }
    }

    cout << dp[capacity] << '\n';
    return 0;
}
