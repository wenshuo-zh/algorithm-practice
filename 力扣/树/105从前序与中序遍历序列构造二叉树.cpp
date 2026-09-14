class Solution {
public:
    TreeNode* traversal(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size() == 0 || inorder.size() == 0)return nullptr;

        int rootValue = preorder[0];
        TreeNode* root = new TreeNode(rootValue);
        int inorderIndex = 0;
        for(; inorderIndex < inorder.size(); inorderIndex++){
            if(inorder[inorderIndex] == rootValue)break;
        }

        vector<int> leftInorder(inorder.begin(), inorder.begin() + inorderIndex);
        vector<int> rightInorder(inorder.begin() + inorderIndex + 1, inorder.end());
        vector<int> leftPreorder(preorder.begin() + 1, preorder.begin() + 1 + leftInorder.size());
        vector<int> rightPreorder(preorder.begin() + 1 + leftInorder.size(), preorder.end());

        root->left = traversal(leftPreorder, leftInorder);
        root->right = traversal(rightPreorder, rightInorder);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return traversal(preorder, inorder);
    }
};
