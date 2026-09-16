// 递归：反中序遍历（右 -> 中 -> 左），累加到当前节点时正好是"大于等于它的所有值之和"
class Solution {
public:
    int pre = 0;

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

// 迭代：用栈模拟反中序遍历，先一路向右压栈
class Solution {
public:
    TreeNode* convertBST(TreeNode* root) {
        if (!root) return root;

        stack<TreeNode*> st;
        TreeNode* cur = root;
        int pre = 0;
        while (!st.empty() || cur) {
            while (cur) {
                st.push(cur);
                cur = cur->right;
            }
            cur = st.top();
            st.pop();
            cur->val += pre;
            pre = cur->val;
            cur = cur->left;
        }
        return root;
    }
};
