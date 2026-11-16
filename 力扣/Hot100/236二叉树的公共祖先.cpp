class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root || root == p || root == q)return root;
        // if(root == p)return p;
        // else if(root == q)return q;
        // else return NULL;
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        if(left && right)return root;
        else if(!left && right)return right;
        else if(left && !right)return left;
        else return NULL; 
    }
};
