class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        if (prices.empty()) return 0;
        // dp[i][0]：第i天持有股票的最大利润；dp[i][1]：第i天不持有股票的最大利润。
        vector<vector<int>> dp(prices.size(), vector<int>(2));
        dp[0][0] = -prices[0] - fee;
        for (int i = 1; i < prices.size(); i++) {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] - prices[i] - fee);
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + prices[i]);
        }
        return dp.back()[1];
    }
};
