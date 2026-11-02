class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int maxlh = 0, maxrh = 0;
        int res = 0;
        while(left < right){
            maxlh = max(maxlh, height[left]);
            maxrh = max(maxrh, height[right]);
            //每次处理短边一侧
            if(height[left] < height[right]){
                res += maxlh - height[left];
                left++;
            }
            else{
                res += maxrh - height[right];
                right--;
            }
        }
        return res;
    }
};

class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> st;//存下标
        int res = 0;
        for(int i = 0; i < height.size(); i++){
            //栈为空，直接入栈
            if(st.empty())st.push(i);
            //当前高度高于栈头元素，栈头弹出计算面积
            while(!st.empty() && height[i] > height[st.top()]){
                int mid = st.top();//底
                st.pop();
                if(st.empty())break;
                res += (min(height[st.top()], height[i]) - height[mid]) * (i-st.top()-1);
            }
            //当前高度低于栈头元素，入栈
            if(st.empty() || height[i] <= height[st.top()]) st.push(i);
        }
        return res;
    }
};
