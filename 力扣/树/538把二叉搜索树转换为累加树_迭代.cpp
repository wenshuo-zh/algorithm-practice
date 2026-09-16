class Solution {
public:
    TreeNode* convertBST(TreeNode* root) {
        if (!root) return root;

        stack<TreeNode*> st;
        TreeNode* cur = root;
        int pre = 0;
        while (!st.empty() || cur) {
            // 一路向右压栈，模拟反中序遍历
            while (cur) {
                st.push(cur);
                cur = cur->right;
            }
            cur = st.top();
            st.pop();
            cur->val += pre;
            pre = cur->val;
            cur = cur->left;
        }
        return root;
    }
};
