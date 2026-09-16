class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return root;

        if (root->val > key) root->left = deleteNode(root->left, key);
        else if (root->val < key) root->right = deleteNode(root->right, key);
        else {
            // 左右都空
            if (!root->left && !root->right) return nullptr;
            // 左空右不空，返回右子树
            if (!root->left && root->right) return root->right;
            // 右空左不空，返回左子树
            if (root->left && !root->right) return root->left;

            // 左右都不空：用右子树最小节点替换，再递归删除该最小节点
            TreeNode* minNode = root->right;
            while (minNode->left) minNode = minNode->left;
            root->val = minNode->val;
            root->right = deleteNode(root->right, root->val);
        }
        return root;
    }
};
