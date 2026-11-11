class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root)return root;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int size = que.size();
            for(int i = 0; i < size; i++){
                TreeNode* cur = que.front();
                que.pop();
                swap(cur->left, cur->right);
                if(cur->left)que.push(cur->left);
                if(cur->right)que.push(cur->right);
            }
        }
        return root;
    }
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
       if(!root)return root;
       swap(root->left, root->right);
       invertTree(root->left);
       invertTree(root->right);
       return root;
    }
};
