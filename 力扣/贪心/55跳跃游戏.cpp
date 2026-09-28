// 贪心：维护已扫描位置能到达的最远下标；当前位置超出覆盖范围则无法继续。
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int cover = 0;
        for (int i = 0; i <= cover && i < nums.size(); ++i) {
            cover = max(cover, i + nums[i]);
            if (cover >= nums.size() - 1) return true;
        }
        return false;
    }
};
