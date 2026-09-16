class Solution {
public:
    TreeNode* traversal(vector<int>& nums) {
        if (nums.size() == 0) return nullptr;

        // 找出区间最大值作为根，再按它切分左右区间
        int maxIndex = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[maxIndex]) maxIndex = i;
        }

        TreeNode* root = new TreeNode(nums[maxIndex]);
        vector<int> leftNums(nums.begin(), nums.begin() + maxIndex);
        vector<int> rightNums(nums.begin() + maxIndex + 1, nums.end());
        root->left = traversal(leftNums);
        root->right = traversal(rightNums);
        return root;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return traversal(nums);
    }
};
