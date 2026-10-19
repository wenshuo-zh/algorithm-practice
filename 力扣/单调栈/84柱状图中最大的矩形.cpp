#include <algorithm>
#include <stack>
#include <vector>
using namespace std;
class Solution { public: int largestRectangleArea(vector<int>& heights) { if(heights.empty()) return 0; stack<int> st; int ans=0; for(int i=0;i<=(int)heights.size();++i){ int h=i==(int)heights.size()?0:heights[i]; while(!st.empty()&&h<heights[st.top()]){int mid=st.top();st.pop();int left=st.empty()?-1:st.top();ans=max(ans,heights[mid]*(i-left-1));} st.push(i); } return ans; } };
