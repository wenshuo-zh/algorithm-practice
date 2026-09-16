class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if (!root) return root;
        // 小于 low：左子树全部小于 low，直接去右子树找
        if (root->val < low) return trimBST(root->right, low, high);
        // 大于 high：右子树全部大于 high，直接去左子树找
        if (root->val > high) return trimBST(root->left, low, high);
        root->left = trimBST(root->left, low, high);
        root->right = trimBST(root->right, low, high);
        return root;
    }
};
