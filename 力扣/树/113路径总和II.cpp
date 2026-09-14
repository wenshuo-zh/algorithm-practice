class Solution {
public:
    vector<vector<int>> result;

    void traversal(TreeNode* node, int count, vector<int>& path) {
        path.push_back(node->val);
        if(node->left == nullptr && node->right == nullptr){
            if(count == 0)result.push_back(path);
        }
        if(node->left != nullptr){
            traversal(node->left, count - node->left->val, path);
        }
        if(node->right != nullptr){
            traversal(node->right, count - node->right->val, path);
        }
        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        result.clear();
        if(root == nullptr)return result;
        vector<int> path;
        traversal(root, targetSum - root->val, path);
        return result;
    }
};
