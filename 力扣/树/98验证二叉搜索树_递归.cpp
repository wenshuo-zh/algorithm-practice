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
