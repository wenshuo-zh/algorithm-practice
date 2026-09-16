// 递归：利用左小右大，每层只往一个方向递归
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (!root) return nullptr;
        if (root->val == val) return root;
        if (root->val > val) return searchBST(root->left, val);
        return searchBST(root->right, val);
    }
};

// 迭代：一路向下走，不需要栈
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while (root) {
            if (root->val == val) return root;
            if (root->val > val) root = root->left;
            else root = root->right;
        }
        return nullptr;
    }
};
