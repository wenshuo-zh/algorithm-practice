class Solution {
public:
    vector<vector<int>> res;
    void backtracking(vector<int>& path, vector<int>& nums, int i){
        res.push_back(path); 
        while(i < nums.size()){
            path.push_back(nums[i]);
            backtracking(path, nums, i+1);
            path.pop_back();
            i++;
        }   
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        res.clear();
        vector<int> path;
        backtracking(path, nums, 0);
        return res;
    }
};
