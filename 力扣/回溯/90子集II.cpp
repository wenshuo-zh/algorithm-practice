// 回溯：排序后跳过同一树层的重复元素
class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;

    void backtracking(const vector<int>& nums, int startIndex) {
        res.push_back(path);
        for (int i = startIndex; i < nums.size(); ++i) {
            if (i > startIndex && nums[i] == nums[i - 1]) continue;
            path.push_back(nums[i]);
            backtracking(nums, i + 1);
            path.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        backtracking(nums, 0);
        return res;
    }
};
