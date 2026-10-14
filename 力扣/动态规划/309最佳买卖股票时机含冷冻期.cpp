class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        // dp[i][0]：第i天持有股票；dp[i][1]：不持有且不在冷冻期；
        // dp[i][2]：第i天卖出；dp[i][3]：第i天是冷冻期。
        vector<vector<int>> dp(prices.size(), vector<int>(4));
        dp[0][0] = -prices[0];
        for (int i = 1; i < prices.size(); i++) {
            dp[i][0] = max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][3]) - prices[i]);
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][3]);
            dp[i][2] = dp[i - 1][0] + prices[i];
            dp[i][3] = dp[i - 1][2];
        }
        return max(dp.back()[1], max(dp.back()[2], dp.back()[3]));
    }
};
