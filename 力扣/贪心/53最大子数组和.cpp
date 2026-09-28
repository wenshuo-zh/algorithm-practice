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
