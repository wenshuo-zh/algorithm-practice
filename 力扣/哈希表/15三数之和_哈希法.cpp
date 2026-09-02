using namespace std;

class Solution {
public:
    // 哈希法：固定第一个数，用集合记录已经遍历过的第二个数。
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0) break;
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            unordered_set<int> seen;
            for(int k = i + 1; k < nums.size(); k++){
                int target = -(nums[i] + nums[k]);
                if(seen.count(target)){
                    ans.push_back({nums[i], target, nums[k]});
                    seen.erase(target);
                } else {
                    seen.insert(nums[k]);
                }
            }
        }
        return ans;
    }
};
