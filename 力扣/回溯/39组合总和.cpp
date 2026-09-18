// 回溯：元素可以重复取，所以递归传 i（仍从当前下标开始）而不是 i + 1
// 踩坑：若传 startIndex，结果里会出现 [2,2,3] [2,3,2] [3,2,2] 这种同一组合的不同排列
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
            vec.push_back(candidates[i]);
            backtracking(candidates, target - candidates[i], i);
            vec.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        backtracking(candidates, target, 0);
        return res;
    }
};

// 剪枝优化：先升序排序，当前数已大于剩余 target 时后面的数只会更大，本层直接结束
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
        for(int i = startIndex; i < candidates.size() && candidates[i] <= target; i++){
            vec.push_back(candidates[i]);
            backtracking(candidates, target - candidates[i], i);
            vec.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        backtracking(candidates, target, 0);
        return res;
    }
};
