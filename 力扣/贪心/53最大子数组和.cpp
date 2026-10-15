// 贪心：若当前累计和为负，丢弃此前区间并从当前元素重新开始。
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = nums[0], sum = 0;
        for (int num : nums) {
            sum = max(num, sum + num);
            result = max(result, sum);
        }
        return result;
    }
};

// 动态规划：dp[i] 表示以下标 i 结尾的最大子数组和。
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.empty()) return 0;
        vector<int> dp(nums.size(), nums[0]);
        int result = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            dp[i] = max(dp[i - 1] + nums[i], nums[i]);
            result = max(result, dp[i]);
        }
        return result;
    }
};
