class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return root;

        if (root->val > key) root->left = deleteNode(root->left, key);
        else if (root->val < key) root->right = deleteNode(root->right, key);
        else {
            if (!root->left && !root->right) return nullptr;
            if (!root->left && root->right) return root->right;
            if (root->left && !root->right) return root->left;

            // 左右都不空：把左子树整体接到右子树的最左端，返回右子树
            TreeNode* cur = root->right;
            while (cur->left) cur = cur->left;
            cur->left = root->left;
            return root->right;
        }
        return root;
    }
};
