class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }
        int res = 0;
        for(auto num : st){//遍历去重后的st
            if(st.find(num-1) == st.end()){//此时下标i的数字是一个循环的起点
                int count = 1;
                while(st.find(++num) != st.end()){
                    count++;
                }
                res = max(res, count);
            }
        }
        return res;
    }
};
