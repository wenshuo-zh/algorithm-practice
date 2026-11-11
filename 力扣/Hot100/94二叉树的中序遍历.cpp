class Solution {
public:
    void dfs(TreeNode* node, vector<int>& res){
        if(!node)return;
        dfs(node->left, res);
        res.push_back(node->val);
        dfs(node->right, res);
        return;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        dfs(root, res);
        return res;
    }
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> res;
        if(!root)return {};
        TreeNode* cur = root;
        while(!st.empty() || cur){
            while(cur){
                st.push(cur);
                cur = cur->left;
            }
            cur = st.top();
            st.pop();
            res.push_back(cur->val);
            cur = cur->right;
        }
        return res;
    }
};
