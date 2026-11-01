// 暴力解法
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2);
        for(int i = 0; i < nums.size(); i++){
            for(int j = nums.size()-1; j > i; j--){
                if(nums[i] + nums[j] == target){
                    res[0] = i;
                    res[1] = j;
                    return res;
                }
            }
        }
        return res;
    }
};

// 哈希表解法
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2);
        unordered_map<int, int> mp;//键存数值，值存下标
        for(int i = 0; i < nums.size(); i++){
            int temp = target - nums[i];
            if(mp.find(temp) != mp.end()){
                res[0] = i;
                res[1] = mp[temp];
                return res;
            }
            mp[nums[i]] = i;
        }
        return res;
    }
};
