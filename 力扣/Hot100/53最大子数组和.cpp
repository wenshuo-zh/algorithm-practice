// 前缀和解法
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, minSum = 0, res = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];//当前前缀和
            res = max(res, sum - minSum);//更新最大子数组和
            minSum = min(minSum, sum);//更新最小前缀和
        }
        return res;
    }
};

// 动态规划解法
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums.size());//以nums[i]为结尾的最大子数组和
        dp[0] = nums[0];
        int res = nums[0];
        for(int i = 1; i < nums.size(); i++){
            dp[i] = max(nums[i], dp[i-1] + nums[i]);
            res = max(dp[i], res);
        }
        return res;
    }
};

// 贪心 / 空间优化动态规划
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            count = max(nums[i], count + nums[i]);
            res = max(count, res);
        }
        return res;
    }
};
