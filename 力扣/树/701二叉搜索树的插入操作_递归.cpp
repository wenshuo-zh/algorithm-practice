class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        // 找到空位，新节点直接作为叶子挂上去
        if (!root) {
            TreeNode* node = new TreeNode(val);
            return node;
        }
        // 利用左小右大的性质，决定往哪棵子树递归
        if (root->val > val) root->left = insertIntoBST(root->left, val);
        if (root->val < val) root->right = insertIntoBST(root->right, val);
        return root;
    }
};
