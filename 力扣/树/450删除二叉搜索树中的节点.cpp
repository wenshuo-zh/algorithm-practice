// 值替换法：左右都不空时，用右子树最小节点的值替换待删节点，
// 再递归去右子树删掉那个最小节点
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

            // 左右都不空：找右子树最小节点
            TreeNode* minNode = root->right;
            while (minNode->left) minNode = minNode->left;
            root->val = minNode->val;
            root->right = deleteNode(root->right, root->val);
        }
        return root;
    }
};

// 子树搬迁法：左右都不空时，把左子树整体接到右子树的最左端，返回右子树
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

            // 找到待删节点右子树的最左端，把左子树整体挂上去
            TreeNode* cur = root->right;
            while (cur->left) cur = cur->left;
            cur->left = root->left;
            return root->right;
        }
        return root;
    }
};
