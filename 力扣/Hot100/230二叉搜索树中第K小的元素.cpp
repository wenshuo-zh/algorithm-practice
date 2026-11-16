class Solution {
public:
    vector<int> arr;
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> st;
        TreeNode* cur = root;
        while(!st.empty() || cur){
            while(cur){
                st.push(cur);
                cur = cur->left;
            }
            cur = st.top();
            st.pop();
            arr.push_back(cur->val);
            cur = cur->right;
        }
        return arr[k-1];
    }
};
