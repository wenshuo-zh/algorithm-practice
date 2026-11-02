class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i = 0; i < nums.size()-2; i++){
            if(nums[i] > 0)break;
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int j = i+1, k = nums.size()-1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    res.push_back({nums[i], nums[j], nums[k]});
                    while(j+1 < k && nums[j] == nums[j+1])j++;
                    j++;
                    while(j < k-1 && nums[k] == nums[k-1])k--;
                    k--;
                }
                else if(sum < 0){
                    while(j+1 < k && nums[j] == nums[j+1])j++;
                    j++;
                }
                else {
                    while(j < k-1 && nums[k] == nums[k-1])k--;
                    k--;
                }
            }
        }
        return res;
    }
};
