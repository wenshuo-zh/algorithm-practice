class Solution {
public:
    bool traversal(TreeNode* root, int& count) {
        if(root->left == nullptr && root->right == nullptr){
            return count == 0;
        }
        if(root->left != nullptr){
            count -= root->left->val;
            if(traversal(root->left, count))return true;
            count += root->left->val;
        }
        if(root->right != nullptr){
            count -= root->right->val;
            if(traversal(root->right, count))return true;
            count += root->right->val;
        }
        return false;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr)return false;
        targetSum -= root->val;
        return traversal(root, targetSum);
    }
};
