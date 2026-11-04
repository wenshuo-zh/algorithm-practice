class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res = 0;
        unordered_map<int, int> mp;//键为前缀和，值为出现次数
        mp[0] = 1;//初始化，当前前缀和本身就等于k时，需要在哈希表找到mp[0] == 1
        //我们要找：当前前缀和 - k = 之前前缀和
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];//当前前缀和
            if(mp.find(sum - k) != mp.end()){//找到满足的之前前缀和
                res += mp[sum - k];
            }
            mp[sum]++;//存入当前前缀和
        }
        return res;
    }
};
