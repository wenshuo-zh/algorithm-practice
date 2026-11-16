class Solution {
public:
    int res = INT_MIN;

    int dfs(TreeNode* root) {
        if (!root) return 0;
        // 获取左右子树的最大路径贡献
        int left = max(0, dfs(root->left));
        int right = max(0, dfs(root->right));
        // 当前节点作为拐点，左右两边都可以连接
        res = max(res, root->val + left + right);
        // 向父节点返回，只能选择左边或右边
        return root->val + max(left, right);
    }
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return res;
    }
};
