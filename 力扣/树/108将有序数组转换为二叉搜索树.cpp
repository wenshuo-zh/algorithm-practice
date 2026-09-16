class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.empty()) return nullptr;

        // 升序数组的中间元素一定是根，按此分割后递归左右区间
        int rootIndex = nums.size() / 2;
        TreeNode* root = new TreeNode(nums[rootIndex]);
        vector<int> leftNums(nums.begin(), nums.begin() + rootIndex);
        vector<int> rightNums(nums.begin() + rootIndex + 1, nums.end());
        root->left = sortedArrayToBST(leftNums);
        root->right = sortedArrayToBST(rightNums);
        return root;
    }
};
