// 贪心：先翻转负数；剩余奇数次操作时翻转绝对值最小的元素。
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() && k > 0 && nums[i] < 0; ++i, --k) nums[i] = -nums[i];
        int minAbs = abs(nums[0]), result = 0;
        for (int num : nums) {
            minAbs = min(minAbs, abs(num));
            result += num;
        }
        return k % 2 == 0 ? result : result - 2 * minAbs;
    }
};
