#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n, v;
    cin >> n >> v;
    vector<int> weight(n), value(n);
    for (int i = 0; i < n; i++) cin >> weight[i] >> value[i];
    vector<int> dp(v + 1, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= v; j++) {
            if (j >= weight[i]) dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
        }
    }
    cout << dp[v];
    return 0;
}
