#include <unordered_map>
#include <vector>
using namespace std;

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
