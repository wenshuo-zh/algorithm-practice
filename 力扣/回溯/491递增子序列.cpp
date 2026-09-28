// 回溯：每层用哈希集合去重，不能先排序以免破坏原相对顺序
class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;

    void backtracking(const vector<int>& nums, int startIndex) {
        if (path.size() >= 2) res.push_back(path);
        unordered_set<int> used;
        for (int i = startIndex; i < nums.size(); ++i) {
            if ((!path.empty() && nums[i] < path.back()) || used.count(nums[i])) continue;
            used.insert(nums[i]);
            path.push_back(nums[i]);
            backtracking(nums, i + 1);
            path.pop_back();
        }
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        backtracking(nums, 0);
        return res;
    }
};
