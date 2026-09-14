class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        if(root == nullptr)return 0;

        queue<TreeNode*> que;
        que.push(root);
        int result = 0;
        while(!que.empty()){
            int n = que.size();
            result = que.front()->val;
            for(int i = 0; i < n; i++){
                TreeNode* cur = que.front();
                que.pop();
                if(cur->left != nullptr)que.push(cur->left);
                if(cur->right != nullptr)que.push(cur->right);
            }
        }
        return result;
    }
};
