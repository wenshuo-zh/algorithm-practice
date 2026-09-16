class Solution {
public:
    int pre = 0;

    // 反中序遍历：右 -> 中 -> 左，累加值正好是"大于等于当前节点"的和
    void traversal(TreeNode* node) {
        if (!node) return;
        traversal(node->right);
        node->val += pre;
        pre = node->val;
        traversal(node->left);
    }

    TreeNode* convertBST(TreeNode* root) {
        traversal(root);
        return root;
    }
};
