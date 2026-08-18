#include<bits/stdc++.h>
using namespace std;


//暴力解法
//时间复杂度O(n^2) 空间复杂度O(1)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        int n = nums.size();
        for (int i = 0; i < n;) {
            if (nums[i] == val) {
                k++;
                for (int j = i + 1; j < n; j++) {
                    nums[j - 1] = nums[j];
                }
                n--;
            }
            else i++;
        }
        return n;
    }
};

//双指针，快慢指针
//时间复杂度O(n) 空间复杂度O(1)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int slow = 0;
        for (int fast = 0; fast < n; fast++) {
            if (nums[fast] != val) {
                nums[slow] = nums[fast];
                slow++;
            }
        }
        return slow;
    }
};