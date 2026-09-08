class Solution {
public:
    int minDepth(TreeNode* root) {
        int depth = 0;
        if(root == nullptr)return depth;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int n = que.size();
            depth++;
            for(int i = 0; i < n; i++){
                TreeNode* cur = que.front();
                que.pop();
                if(cur->left == nullptr && cur->right == nullptr)return depth;
                if(cur->left != nullptr)que.push(cur->left);
                if(cur->right != nullptr)que.push(cur->right);
            }
        }
        return depth;
    }
};
