class Solution {
public:
    int getHeight(TreeNode* node) {
        if(node == nullptr)return 0;

        int leftDepth = getHeight(node->left);
        if(leftDepth == -1)return -1;
        int rightDepth = getHeight(node->right);
        if(rightDepth == -1)return -1;

        if(abs(leftDepth - rightDepth) > 1)return -1;
        return max(leftDepth, rightDepth) + 1;
    }

    bool isBalanced(TreeNode* root) {
        return getHeight(root) != -1;
    }
};
