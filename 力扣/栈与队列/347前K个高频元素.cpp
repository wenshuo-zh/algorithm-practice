class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        class mycomparison{
        public:
            // 频率小的元素在堆顶，构成小顶堆
            bool operator()(const pair<int, int>& lhs, const pair<int, int>& rhs){
                return lhs.second > rhs.second;
            }
        };

        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, mycomparison> minHeap;
        for(auto& it : mp){
            minHeap.push({it.first, it.second});
            // 超过 k 个时，弹出频率最小的元素
            if(minHeap.size() > k)minHeap.pop();
        }

        vector<int> ans;
        while(!minHeap.empty()){
            ans.push_back(minHeap.top().first);
            minHeap.pop();
        }
        return ans;
    }
};
