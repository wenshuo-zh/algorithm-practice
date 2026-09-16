class Solution {
public:
    TreeNode* pre = nullptr;
    int count = 0;
    int maxCount = 0;
    vector<int> res;

    void searchBST(TreeNode* cur) {
        if (!cur) return;
        searchBST(cur->left);

        if (!pre) count = 1;
        else if (pre->val == cur->val) count++;
        else count = 1;
        pre = cur;

        // 众数可能不止一个：等于 maxCount 时追加，超过时清空重来
        if (count == maxCount) res.push_back(cur->val);
        if (count > maxCount) {
            res.clear();
            res.push_back(cur->val);
            maxCount = count;
        }

        searchBST(cur->right);
    }

    vector<int> findMode(TreeNode* root) {
        searchBST(root);
        return res;
    }
};
