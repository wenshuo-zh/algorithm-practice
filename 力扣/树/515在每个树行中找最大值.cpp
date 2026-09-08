class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> que;
        vector<int> res;
        if(root == nullptr)return res;
        que.push(root);
        while(!que.empty()){
            int maxValue = que.front()->val;
            int n = que.size();
            for(int i = 0; i < n; i++){
                TreeNode* cur = que.front();
                que.pop();
                if(cur->val > maxValue)maxValue = cur->val;
                if(cur->left != nullptr)que.push(cur->left);
                if(cur->right != nullptr)que.push(cur->right);
            }
            res.push_back(maxValue);
        }
        return res;
    }
};
