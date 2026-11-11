class Solution {
public:
    int res = 0;
    int dfs(TreeNode* node){
        if(!node)return 0;
        int left = dfs(node->left);
        int right = dfs(node->right);
        res = max(res, left+right);
        return max(left, right) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return res;
    }
};
