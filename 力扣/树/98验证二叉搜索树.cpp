// 递归：中序遍历收集到数组，再检查是否严格递增
class Solution {
public:
    vector<int> vec;

    void traversal(TreeNode* node) {
        if (!node) return;
        traversal(node->left);
        vec.push_back(node->val);
        traversal(node->right);
    }

    bool isValidBST(TreeNode* root) {
        traversal(root);
        for (int i = 0; i + 1 < vec.size(); ++i) {
            if (vec[i] >= vec[i + 1]) return false;
        }
        return true;
    }
};

// 迭代：用栈模拟中序遍历，过程中收集节点值
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> vec;
        TreeNode* cur = root;
        while (cur || !st.empty()) {
            while (cur) {
                st.push(cur);
                cur = cur->left;
            }
            cur = st.top();
            st.pop();
            vec.push_back(cur->val);
            cur = cur->right;
        }
        for (int i = 1; i < vec.size(); ++i) {
            if (vec[i - 1] >= vec[i]) return false;
        }
        return true;
    }
};
