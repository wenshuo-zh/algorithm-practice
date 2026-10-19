#include <stack>
#include <vector>
using namespace std;
class Solution { public: vector<int> nextGreaterElements(vector<int>& nums) { if(nums.empty()) return {}; vector<int> res(nums.size(),-1); stack<int> st; for(int i=0;i<2*(int)nums.size();++i){ int j=i%nums.size(); while(!st.empty()&&nums[j]>nums[st.top()]){res[st.top()]=nums[j];st.pop();} if(i<(int)nums.size()) st.push(j); } return res; } };
