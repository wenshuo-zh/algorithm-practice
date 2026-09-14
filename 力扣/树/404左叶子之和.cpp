class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == nullptr)return 0;

        int leftValue = sumOfLeftLeaves(root->left);
        if(root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr){
            leftValue = root->left->val;
        }
        int rightValue = sumOfLeftLeaves(root->right);
        return leftValue + rightValue;
    }
};
