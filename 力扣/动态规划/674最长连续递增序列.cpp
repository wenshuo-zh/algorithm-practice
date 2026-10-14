class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.empty()) return 0;
        // dp[i]：以下标i结尾的最长连续递增子数组长度。
        vector<int> dp(nums.size(), 1);
        int result = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) dp[i] = dp[i - 1] + 1;
            result = max(result, dp[i]);
        }
        return result;
    }
};
