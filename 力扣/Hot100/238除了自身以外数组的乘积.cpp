// 前缀积 + 后缀积
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> frontProduct(nums.size());//前缀积,从nums[0]到nums[i] 的乘积
        vector<int> backProduct(nums.size());//后缀积,从nums[i]到nums[n-1]的乘积
        frontProduct[0] = nums[0];
        for(int i = 1; i < nums.size(); i++)frontProduct[i] = frontProduct[i-1] * nums[i];
        backProduct[nums.size()-1] = nums.back();
        for(int i = nums.size()-2; i >= 0; i--)backProduct[i] = backProduct[i+1] * nums[i];
        vector<int> res(nums.size());
        res[0] = backProduct[1];
        res[nums.size()-1] = frontProduct[nums.size()-2];
        for(int i = 1; i < nums.size()-1; i++){
            res[i] = frontProduct[i-1] * backProduct[i+1];
        }
        return res;
    }
};

// 空间优化
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        res[0] = nums[0];
        //前缀积直接存res数组里
        for(int i = 1; i < n; i++)res[i] = res[i-1] * nums[i];
        //后缀积
        int pro = nums[n-1];
        res[n-1] = res[n-2];
        for(int i = n-2; i > 0; i--){
            res[i] = res[i-1] * pro;
            pro *= nums[i];
        }
        res[0] = pro;
        return res;
    }
};
