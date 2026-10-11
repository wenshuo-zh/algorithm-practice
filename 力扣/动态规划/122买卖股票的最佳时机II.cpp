#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //1.dp[i][0]：第i天持有股票的最大利润
        //2.dp[i][1]：第i天不持有股票的最大利润
        vector<vector<int>> dp(prices.size(), vector<int>(2));
        //2.递推公式：dp[i][0] = max(dp[i-1][0], dp[i-1][1] - prices[i]);
        //            dp[i][1] = max(dp[i-1][0] + prices[i], dp[i-1][1]);
        //3.初始化：
        dp[0][0] = -prices[0];
        dp[0][1] = 0;
        //4.遍历顺序：
        for (int i = 1; i < prices.size(); i++) {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] - prices[i]);
            dp[i][1] = max(dp[i - 1][0] + prices[i], dp[i - 1][1]);
        }
        return dp[prices.size() - 1][1];
    }
};
