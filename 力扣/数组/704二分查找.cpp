// 左闭右开区间 [left, right)，循环条件 left < right
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size();
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) return mid;
            // mid 已经比过，右边界收缩为 mid
            if (nums[mid] > target) right = mid;
            else left = mid + 1;
        }
        return -1;
    }
};

// 左闭右闭区间 [left, right]，循环条件 left <= right
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) return mid;
            // mid 已经比过，右边界收缩为 mid - 1
            if (nums[mid] > target) right = mid - 1;
            else left = mid + 1;
        }
        return -1;
    }
};
