class Solution {
public:
    bool compare(TreeNode* left, TreeNode* right) {
        if(left == nullptr && right == nullptr)return true;
        if(left == nullptr || right == nullptr)return false;
        if(left->val != right->val)return false;

        bool outside = compare(left->left, right->right);
        bool inside = compare(left->right, right->left);
        return outside && inside;
    }

    bool isSymmetric(TreeNode* root) {
        if(root == nullptr)return true;
        return compare(root->left, root->right);
    }
};
