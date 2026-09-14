class Solution {
public:
    bool traversal(TreeNode* root, int count) {
        if(root->left == nullptr && root->right == nullptr){
            return count == 0;
        }
        if(root->left != nullptr && traversal(root->left, count - root->left->val)){
            return true;
        }
        if(root->right != nullptr && traversal(root->right, count - root->right->val)){
            return true;
        }
        return false;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr)return false;
        targetSum -= root->val;
        return traversal(root, targetSum);
    }
};
