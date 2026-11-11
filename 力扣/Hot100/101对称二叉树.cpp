class Solution {
public:
    bool check(TreeNode* left, TreeNode* right){
        if(!left && !right)return true;
        else if(!left && right)return false;
        else if(left && !right)return false;
        else if(left->val != right->val)return false;

        return check(left->left, right->right) && check(left->right, right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)return true;
        return check(root->left, root->right);
    }
};

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root)return true;
        queue<TreeNode*> que;
        que.push(root->left);
        que.push(root->right);
        while(!que.empty()){
            TreeNode* left = que.front();
            que.pop();
            TreeNode* right = que.front();
            que.pop();
            if(!left && !right)continue;
            if(!left || !right || left->val != right->val){
                return false;
            }
            que.push(left->left);
            que.push(right->right);
            que.push(right->left);
            que.push(left->right);
        }
        return true;
    }
	};
