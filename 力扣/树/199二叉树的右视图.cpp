class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(root == nullptr)return res;

        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int n = que.size();
            for(int i = 0; i < n; i++){
                TreeNode* cur = que.front();
                que.pop();
                // 每层最后出队的节点，就是右视图看到的节点
                if(i == n - 1)res.push_back(cur->val);
                if(cur->left != nullptr)que.push(cur->left);
                if(cur->right != nullptr)que.push(cur->right);
            }
        }
        return res;
    }
};
