using namespace std;

class Solution {
public:
    // 分组哈希：分别统计两组两数之和。
    int fourSumCount(vector<int>& nums1, vector<int>& nums2,
                     vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> left, right;
        for(int a : nums1) for(int b : nums2) left[a + b]++;
        for(int c : nums3) for(int d : nums4) right[c + d]++;
        int ans = 0;
        for(auto [sum, count] : left){
            auto it = right.find(-sum);
            if(it != right.end()) ans += count * it->second;
        }
        return ans;
    }
};
