// 贪心：单调区间只保留端点作为拐点，连续相等的元素不影响摆动长度。
class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if (nums.size() <= 1) return nums.size();
        int result = 1, previousDiff = 0;
        for (int i = 1; i < nums.size(); ++i) {
            int currentDiff = nums[i] - nums[i - 1];
            if ((previousDiff <= 0 && currentDiff > 0) || (previousDiff >= 0 && currentDiff < 0)) {
                ++result;
                previousDiff = currentDiff;
            }
        }
        return result;
    }
};
