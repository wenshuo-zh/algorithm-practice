#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int c, n;
    cin >> c >> n;
    vector<int> weight(n);
    vector<int> value(n);
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> weight[i];
    for (int i = 0; i < n; i++) cin >> value[i];
    for (int i = 0; i < n; i++) cin >> nums[i];
    //1.dp[j]含义：装重量为j的矿石得到的最大价值
    vector<int> dp(c + 1, 0);
    //2.递推公式：dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
    //4.遍历顺序：
    for (int index = 0; index < n; index++) {
        for (int i = 0; i < nums[index]; i++) {
            for (int j = c; j >= 0; j--) {
                if (j >= weight[index]) dp[j] = max(dp[j], dp[j - weight[index]] + value[index]);
            }
        }
    }
    cout << dp[c];
    return 0;
}
