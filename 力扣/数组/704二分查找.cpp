#include<bits/stdc++.h>
using namespace std;

//左闭右开
//时间复杂度O(log n) 空间复杂度O(1)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        //left == right没有意义，即[left,right)区间为空，所以循环条件不包含=
        while (left < right) {
            int mid = (left + right) / 2;
            if (nums[mid] == target)return mid;
            //mid比对完毕，下一轮区间里不能包含mid
            else if (nums[mid] > target) {
                right = mid;//新区间[left,mid)
            }
            else {
                left = mid + 1;//新区间[mid+1,right)
            }
        }
        return -1;
    }
};

//左闭右闭
//时间复杂度O(log n) 空间复杂度O(1)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        //left == right有意义，即[left,right]内有值，循环继续执行
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] == target)return mid;
            //新区间不要带上mid,因为mid已经比对
            else if (nums[mid] > target)right = mid - 1;//[left,mid - 1]
            else left = mid + 1;//[mid + 1,right]
        }
        return -1;
    }
};