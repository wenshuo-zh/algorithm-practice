// 回溯 + 树层去重：排序后同一层里值相同的元素只取第一个
// 例：第一个 1 和 7 组合过了，第二个 1 再和 7 组合就是重复，故 i > startIndex 且与前一元素相同时跳过
class Solution {
public:
    vector<vector<int>> res;
    vector<int> vec;
    void backtracking(vector<int>& candidates, int target, int startIndex){
        if(target == 0){
            res.push_back(vec);
            return;
        }
        if(target < 0)return;
        for(int i = startIndex; i < candidates.size(); i++){
            if(i > startIndex && candidates[i] == candidates[i - 1])continue;
            vec.push_back(candidates[i]);
            backtracking(candidates, target - candidates[i], i + 1);
            vec.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        backtracking(candidates, target, 0);
        return res;
    }
};

// 剪枝优化：已经排过序，循环条件再加 candidates[i] <= target 即可
// 这样 target 不可能被减成负数，上面的 target < 0 分支也就不需要了
class Solution {
public:
    vector<vector<int>> res;
    vector<int> vec;
    void backtracking(vector<int>& candidates, int target, int startIndex){
        if(target == 0){
            res.push_back(vec);
            return;
        }
        for(int i = startIndex; i < candidates.size() && candidates[i] <= target; i++){
            if(i > startIndex && candidates[i] == candidates[i - 1])continue;
            vec.push_back(candidates[i]);
            backtracking(candidates, target - candidates[i], i + 1);
            vec.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        backtracking(candidates, target, 0);
        return res;
    }
};
