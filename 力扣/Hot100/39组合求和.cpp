class Solution {
public:
    vector<vector<int>> res;
    void backtracking(vector<int>& path, vector<int>& candidates, int target, int index){
        if(target == 0){
            res.push_back(path);
            return;
        }
        if(target < 0)return;
        for(int i = index; i < candidates.size(); i++){
            path.push_back(candidates[i]);
            backtracking(path, candidates, target-candidates[i], i);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> path;
        backtracking(path, candidates, target, 0);
        return res;
    }
};
