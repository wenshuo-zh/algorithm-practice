#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    //在[begin, end]一排房子里，返回打家劫舍的最大金额
    int robRange(vector<int>& nums, int begin, int end) {
        if (begin == end) return nums[begin];
        vector<int> dp(end + 1);
        dp[begin] = nums[begin];
        dp[begin + 1] = max(nums[begin], nums[begin + 1]);
        for (int i = begin + 2; i <= end; i++) {
            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
        }
        return dp[end];
    }

    int rob(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return nums[0];
        int res1 = robRange(nums, 0, nums.size() - 2); //不偷最后一间
        int res2 = robRange(nums, 1, nums.size() - 1); //不偷第一间
        return max(res1, res2);
    }
};
