class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int res = 0;
        heights.push_back(0);
        for(int i = 0; i < heights.size(); i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                int mid = st.top();
                st.pop();
                int h = heights[mid];
                int a;
                if(st.empty()) a = i;
                else a = i - st.top() - 1;
                int area = h * a;
                res = max(res, area);
            }
            st.push(i);
        }
        return res;
    }
};
