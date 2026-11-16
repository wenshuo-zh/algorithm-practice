class Solution {
public:
    vector<TreeNode*> res;
    void dfs(TreeNode* node){
        if(!node)return;
        res.push_back(node);
        dfs(node->left);
        dfs(node->right);
    }
    void flatten(TreeNode* root) {
        if(!root)return;
        dfs(root);
        TreeNode* cur = root;
        for(int i = 0; i < res.size()-1; i++){
            cur->left = nullptr;
            cur->right = res[i+1];
            cur = cur->right;
        }
        cur->left = nullptr;
    }
};
