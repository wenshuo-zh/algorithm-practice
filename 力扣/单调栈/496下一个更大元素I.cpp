#include <stack>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution { public: vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) { unordered_map<int,int> pos; for(int i=0;i<(int)nums1.size();++i) pos[nums1[i]]=i; vector<int> res(nums1.size(),-1); stack<int> st; for(int i=0;i<(int)nums2.size();++i){ while(!st.empty()&&nums2[i]>nums2[st.top()]){ if(pos.count(nums2[st.top()])) res[pos[nums2[st.top()]]]=nums2[i]; st.pop(); } st.push(i); } return res; } };
