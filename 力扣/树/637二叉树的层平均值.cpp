class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        if(root == nullptr)return res;

        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int n = que.size();
            double sum = 0;
            for(int i = 0; i < n; i++){
                TreeNode* cur = que.front();
                que.pop();
                sum += cur->val;
                if(cur->left != nullptr)que.push(cur->left);
                if(cur->right != nullptr)que.push(cur->right);
            }
            res.push_back(sum / n);
        }
        return res;
    }
};
