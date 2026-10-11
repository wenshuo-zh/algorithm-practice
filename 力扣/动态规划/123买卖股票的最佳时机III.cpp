#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*1.dp数组含义：第i天不同操作的最大利润
            dp[i][0]：没有操作
            dp[i][1]：第一次持有股票
            dp[i][2]：第一次不持有股票
            dp[i][3]：第二次持有股票
            dp[i][4]：第二次不持有股票
        */
        vector<vector<int>> dp(prices.size(), vector<int>(5));
        /*2.递推公式：
            dp[i][0] = dp[i-1][0];
            dp[i][1] = max(dp[i-1][1], -prices[i]);
            dp[i][2] = max(dp[i-1][2], dp[i-1][1] + prices[i]);
            dp[i][3] = max(dp[i-1][3], dp[i-1][2] - prices[i]);
            dp[i][4] = max(dp[i-1][4], dp[i-1][3] + prices[i]);
        */
        //3.初始化：
        dp[0][0] = 0;
        dp[0][1] = -prices[0];
        dp[0][2] = 0;
        dp[0][3] = -prices[0];
        dp[0][4] = 0;
        //4.遍历顺序：
        for (int i = 1; i < prices.size(); i++) {
            dp[i][0] = dp[i - 1][0];
            dp[i][1] = max(dp[i - 1][1], -prices[i]);
            dp[i][2] = max(dp[i - 1][2], dp[i - 1][1] + prices[i]);
            dp[i][3] = max(dp[i - 1][3], dp[i - 1][2] - prices[i]);
            dp[i][4] = max(dp[i - 1][4], dp[i - 1][3] + prices[i]);
        }
        return max(dp[prices.size() - 1][2], dp[prices.size() - 1][4]);
    }
};
