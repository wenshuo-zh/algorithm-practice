class Solution {
public:
    vector<vector<int>> res;
    void backTarcking(vector<int>& path, vector<int>& nums, vector<bool>& used){
        if(path.size() == nums.size()){
            res.push_back(path);
            return;
        }
        for(int i = 0; i < nums.size(); i++){
            if(!used[i]){
                path.push_back(nums[i]);
                used[i] = true;
                backTarcking(path, nums, used);
                path.pop_back();
                used[i] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        res.clear();
        vector<bool> used(nums.size(), false);
        vector<int> path;
        backTarcking(path, nums, used);
        return res;
    }
};
