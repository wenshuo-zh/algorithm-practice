#include<bits/stdc++.h>
using namespace std;

//暴力解法：时间复杂度O(n^2),LeetCode直接超时
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int ans = n + 1;
        for (int i = 0; i < n; i++) {
            int count = 0, sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                count++;
                if (sum >= target && count < ans) {
                    ans = count;
                    break;
                }
            }
        }
        if (ans == n + 1)return 0;
        else return ans;
    }
};

//滑动窗口
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int ans = n + 1;
        int sum = 0;
        int left = 0;
        for (int right = 0; right < n; right++) {
            sum += nums[right];
            while (sum >= target) {
                int len = right - left + 1;
                ans = min(len, ans);
                sum -= nums[left];
                left++;
            }
        }
        return ans == n + 1 ? 0 : ans;
        /*等价于：
            if(ans == n + 1)return 0;
            else return ans;
        */
    }
};