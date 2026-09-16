class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // 递归向下：碰到空、p、q 就停下并向上返回信号
        if (!root || root == p || root == q) return root;
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        // 回溯：左右都拿到信号 -> 当前节点即最近公共祖先
        if (left && right) return root;
        // 只有一侧有信号 -> 继续向上传递
        if (left) return left;
        if (right) return right;
        return nullptr;
    }
};
