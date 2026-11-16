class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root)return{};
        queue<TreeNode*> que;
        que.push(root);
        vector<int> res;
        while(!que.empty()){
            int size = que.size();
            for(int i = 0; i < size; i++){
                TreeNode* cur = que.front();
                que.pop();
                if(i == size - 1)
                res.push_back(cur->val);
                if(cur->left)que.push(cur->left);
                if(cur->right)que.push(cur->right);
                
            }
        }
        return res;
    }
};
