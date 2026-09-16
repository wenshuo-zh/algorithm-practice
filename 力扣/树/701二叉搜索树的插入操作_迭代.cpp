class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* cur = root;
        TreeNode* pre = nullptr;

        // 一路向下找到插入位置，pre 记录最后访问的节点（新节点的父节点）
        // 题目保证 val 不在树中，所以不会出现 cur->val == val 的死循环
        while (cur) {
            pre = cur;
            if (cur->val > val) cur = cur->left;
            else cur = cur->right;
        }

        TreeNode* node = new TreeNode(val);
        // 空树：新节点直接作根
        if (!pre) return node;
        if (pre->val > val) pre->left = node;
        else pre->right = node;
        return root;
    }
};
