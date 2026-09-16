// 递归：节点值小于 low 就只可能去右子树找，大于 high 就只可能去左子树找
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

// 迭代：先把 root 挪进 [low, high] 区间，再分别裁剪左右子树
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
