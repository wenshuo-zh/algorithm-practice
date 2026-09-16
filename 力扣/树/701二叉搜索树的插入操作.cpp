// 递归：找到空位就把新节点挂上去
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
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

// 迭代：一路向下找插入位置，pre 记录新节点的父节点
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* cur = root;
        TreeNode* pre = nullptr;

        // 题目保证 val 不在树中，所以不会出现 cur->val == val 的死循环
        while (cur) {
            pre = cur;
            if (cur->val > val) cur = cur->left;
            else cur = cur->right;
        }

        TreeNode* node = new TreeNode(val);
        if (!pre) return node;      // 空树，新节点直接作根
        if (pre->val > val) pre->left = node;
        else pre->right = node;
        return root;
    }
};
