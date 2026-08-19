#include<bits/stdc++.h>
using namespace std;

//左右指针，双指针法时间复杂度O(n)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        int first_i = 0, end_i = n - 1;
        for (int i = n - 1; first_i <= end_i; i--) {
            if (nums[first_i] * nums[first_i] > nums[end_i] * nums[end_i]) {
                ans[i] = nums[first_i] * nums[first_i];
                first_i++;
            }
            else {
                ans[i] = nums[end_i] * nums[end_i];
                end_i--;
            }
        }
        return ans;
    }
};