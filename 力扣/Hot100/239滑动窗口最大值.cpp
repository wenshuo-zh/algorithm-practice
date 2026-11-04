class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;//双向队列，存下标
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            //将小于当前值的从队尾删除，
            while(!dq.empty() && nums[dq.back()] < nums[i]){
                dq.pop_back();
            }
            //队首如果超出范围删除
            while(!dq.empty() && dq.front() < i-k+1) dq.pop_front();
            //队尾加入当前值
            dq.push_back(i);
            if(i < k - 1)continue;  
            res.push_back(nums[dq.front()]);  
        }
        return res;
    }
};
