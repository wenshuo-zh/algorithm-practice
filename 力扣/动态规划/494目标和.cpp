class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)sum += nums[i];
        if(abs(target) > sum) return 0;
        //1.dp[i][j]数组含义：前i个数添加正负号，运算结果得到j的方案数目
        vector<vector<int>> dp(nums.size(), vector<int>(2*sum+1, 0));
        //2.递推公式：dp[i][j] = dp[i - 1][j - nums[i]] + dp[i - 1][j + nums[i]];
        //3.初始化：
        dp[0][sum + nums[0]] += 1;
        dp[0][sum - nums[0]] += 1;
        //4.遍历顺序：从前向后
        for(int i = 1; i < nums.size(); i++){
            for(int j = 0; j < 2*sum+1; j++){
                if(j - nums[i] >= 0)dp[i][j] += dp[i - 1][j - nums[i]];
                if(j + nums[i] <= 2*sum) dp[i][j] += dp[i - 1][j + nums[i]];
            }
        }
        return dp[nums.size() - 1][target + sum];
    }
};
