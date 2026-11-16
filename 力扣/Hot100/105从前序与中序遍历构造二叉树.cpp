class Solution {
public:
    unordered_map<int, int>mp;//key:中序数组的节点值 val:这个节点值在中序数组的下标
    TreeNode* dfs(vector<int>& preorder, vector<int>& inorder, int preL, int preR, int inL, int inR){
        if(inL > inR)return nullptr;
        int rootVal = preorder[preL];
        //查map得到rootIdx
        int rootIdx = mp[rootVal];//根在中序的下标
        int leftcnt = rootIdx - inL;//同一棵子树的节点总数肯定是一样的->中序算前序左子树的节点值，后序根据节点值找下标区间
        TreeNode* root = new TreeNode(rootVal);
        root->left = dfs(preorder, inorder, preL+1, preL+leftcnt, inL, rootIdx-1);
        root->right = dfs(preorder, inorder, preL+leftcnt+1, preR, rootIdx+1, inR);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i = 0; i < inorder.size(); i++){
            mp[inorder[i]] = i;
        }
        return dfs(preorder, inorder, 0, preorder.size()-1, 0, inorder.size()-1);
    }
};
