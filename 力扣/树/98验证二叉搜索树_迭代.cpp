class Solution {
public:
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> vec;
        TreeNode* cur = root;
        while (cur || !st.empty()) {
            while (cur) {
                st.push(cur);
                cur = cur->left;
            }
            cur = st.top();
            st.pop();
            vec.push_back(cur->val);
            cur = cur->right;
        }
        for (int i = 1; i < vec.size(); ++i) {
            if (vec[i - 1] >= vec[i]) return false;
        }
        return true;
    }
};
