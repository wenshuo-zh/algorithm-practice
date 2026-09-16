class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if (!root) return nullptr;

        // 1.先让 root 落在 [low, high] 区间内
        while (root && (root->val < low || root->val > high)) {
            if (root->val < low) root = root->right;
            else root = root->left;
        }
        if (!root) return nullptr;

        // 2.裁剪左子树：小于 low 的节点用它自己的右子树顶替
        TreeNode* cur = root;
        while (cur->left) {
            if (cur->left->val < low) cur->left = cur->left->right;
            else cur = cur->left;
        }

        // 3.裁剪右子树：大于 high 的节点用它自己的左子树顶替
        cur = root;
        while (cur->right) {
            if (cur->right->val > high) cur->right = cur->right->left;
            else cur = cur->right;
        }
        return root;
    }
};
