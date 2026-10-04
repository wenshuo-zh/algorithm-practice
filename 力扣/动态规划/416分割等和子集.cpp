#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        const int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % 2 != 0) {
            return false;
        }

        const int target = sum / 2;
        vector<int> dp(target + 1, 0);
        for (int num : nums) {
            for (int capacity = target; capacity >= num; --capacity) {
                dp[capacity] = max(dp[capacity], dp[capacity - num] + num);
            }
        }
        return dp[target] == target;
    }
};
