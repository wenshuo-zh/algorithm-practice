// 三次反转
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        while(k > nums.size()) k %= nums.size();
        int left = 0, right = nums.size()-1;
        while(left < right)swap(nums[left++], nums[right--]);
        left = 0, right = k-1;
        while(left < right)swap(nums[left++], nums[right--]);
        left = k, right = nums.size()-1;
        while(left < right)swap(nums[left++], nums[right--]);                    
    }
};
