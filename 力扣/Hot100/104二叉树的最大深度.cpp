int maxDepth(TreeNode* root) {
    if(!root)return 0;
    return max(maxDepth(root->left), maxDepth(root->right)) + 1;
}

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)return 0;
        queue<TreeNode*> que;
        int res = 0;
        que.push(root);
        while(!que.empty()){
            int size = que.size();
            for(int i = 0; i < size; i++){
                TreeNode* cur = que.front();
                if(cur->left)que.push(cur->left);
                if(cur->right)que.push(cur->right);
                que.pop();
            }
            res++;
        }
        return res;
    }
};
