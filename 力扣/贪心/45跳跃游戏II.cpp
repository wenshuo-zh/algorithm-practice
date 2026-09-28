// 贪心：currentEnd 是当前步数可覆盖的边界，扫描到边界时必须增加一步。
class Solution {
public:
    int jump(vector<int>& nums) {
        int result = 0, currentEnd = 0, nextEnd = 0;
        for (int i = 0; i < nums.size() - 1; ++i) {
            nextEnd = max(nextEnd, i + nums[i]);
            if (i == currentEnd) {
                ++result;
                currentEnd = nextEnd;
            }
        }
        return result;
    }
};
