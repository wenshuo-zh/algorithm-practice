#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int integerBreak(int n) {
        // dp[i]：i 拆成至少两个正整数后的最大乘积
        vector<int> dp(n + 1);
        dp[2] = 1;
        for (int i = 3; i <= n; ++i) {
            for (int j = 1; j <= i / 2; ++j) {
                dp[i] = max(dp[i], max(j * (i - j), j * dp[i - j]));
            }
        }
        return dp[n];
    }
};
