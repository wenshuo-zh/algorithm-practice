#include <algorithm>
#include <stack>
#include <vector>
using namespace std;
class Solution { public: int trap(vector<int>& height) { int res=0; stack<int> st; for(int i=0;i<(int)height.size();++i){ while(!st.empty()&&height[i]>height[st.top()]){int mid=st.top();st.pop();if(st.empty())break;int left=st.top();res+=(min(height[left],height[i])-height[mid])*(i-left-1);} st.push(i); } return res; } };
