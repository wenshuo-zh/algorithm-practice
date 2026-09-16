class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // 比 p、q 都大 -> 祖先在左子树
        if (root->val > p->val && root->val > q->val)
            return lowestCommonAncestor(root->left, p, q);
        // 比 p、q 都小 -> 祖先在右子树
        if (root->val < p->val && root->val < q->val)
            return lowestCommonAncestor(root->right, p, q);
        // 值落在 p、q 之间 -> 当前节点即最近公共祖先
        return root;
    }
};
