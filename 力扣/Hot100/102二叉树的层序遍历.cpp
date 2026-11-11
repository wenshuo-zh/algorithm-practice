class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> que;
        vector<vector<int>> res;
        if(root == nullptr)return res;
        que.push(root);
        while(!que.empty()){
            int n = que.size();
            vector<int> temp;
            for(int i = 0; i < n; i++){
                TreeNode* cur = que.front();
                que.pop();
                temp.push_back(cur->val);
                if(cur->left != nullptr)que.push(cur->left);
                if(cur->right != nullptr)que.push(cur->right);
            }
            res.push_back(temp);
        }
        return res;
    }
};
