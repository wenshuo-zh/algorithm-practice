class Solution {
public:
    bool dfs(TreeNode* root, long long max, long long min){
        if(!root) return true;
        if(root->val <= min || root->val >= max) return false;
        return dfs(root->left, root->val, min) && dfs(root->right, max, root->val);
    }
    bool isValidBST(TreeNode* root) {
        return dfs(root, LLONG_MAX, LLONG_MIN);
    }
};
