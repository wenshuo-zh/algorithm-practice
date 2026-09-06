class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            // 队列保存下标，便于判断队头是否已经滑出窗口
            if(!dq.empty() && dq.front() <= i - k)dq.pop_front();
            // 保持下标对应的数值从队头到队尾递减
            while(!dq.empty() && nums[dq.back()] <= nums[i])dq.pop_back();
            dq.push_back(i);
            if(i >= k - 1){
                ans.push_back(nums[dq.front()]);
            }
        }
        return ans;
    }
};
