// 排序 + 双指针：固定第一个数，剩下两个用左右指针夹逼
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n - 2; ++i) {
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum < 0) {
                    ++left;
                } else if (sum > 0) {
                    --right;
                } else {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    ++left;
                    --right;
                    while (left < right && nums[left] == nums[left - 1]) ++left;
                    while (left < right && nums[right] == nums[right + 1]) --right;
                }
            }
        }
        return ans;
    }
};

// 哈希法：固定第一个数，用集合记录已经遍历过的第二个数
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            unordered_set<int> seen;
            for (int k = i + 1; k < nums.size(); k++) {
                int target = -(nums[i] + nums[k]);
                if (seen.count(target)) {
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
