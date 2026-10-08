#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

class Solution {
public:
    int numSquares(int n) {
        //1.dp[j]含义：和为j的完全平方数最少数量
        vector<int> dp(n + 1, INT_MAX / 2);
        //2.递推公式：dp[j] = min(dp[j], dp[j-i*i] + 1);
        //3.初始化：
        dp[0] = 0;
        //4.遍历顺序：
        for (int i = 1; i * i <= n; i++) {
            for (int j = i * i; j <= n; j++) {
                dp[j] = min(dp[j], dp[j - i * i] + 1);
            }
        }
        return dp[n];
    }
};
