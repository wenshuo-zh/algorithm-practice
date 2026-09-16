// 分组哈希：先把前两个数组的两数之和统计进哈希表，再遍历后两个数组查补数
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2,
                     vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> sumCount;
        for (int a : nums1) {
            for (int b : nums2) {
                ++sumCount[a + b];
            }
        }

        int answer = 0;
        for (int c : nums3) {
            for (int d : nums4) {
                auto it = sumCount.find(-(c + d));
                if (it != sumCount.end()) {
                    answer += it->second;
                }
            }
        }
        return answer;
    }
};

// 双哈希：两组两数之和分别统计，最后按组合数相乘累加
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2,
                     vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> left, right;
        for (int a : nums1) for (int b : nums2) left[a + b]++;
        for (int c : nums3) for (int d : nums4) right[c + d]++;

        int ans = 0;
        for (auto [sum, count] : left) {
            auto it = right.find(-sum);
            if (it != right.end()) ans += count * it->second;
        }
        return ans;
    }
};
