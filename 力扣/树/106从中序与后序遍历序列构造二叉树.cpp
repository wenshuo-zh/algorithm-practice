class Solution {
public:
    TreeNode* traversal(vector<int>& inorder, vector<int> postorder) {
        if(postorder.size() == 0)return nullptr;

        int rootValue = postorder[postorder.size() - 1];
        TreeNode* root = new TreeNode(rootValue);
        int delimiterIndex = 0;
        for(; delimiterIndex < inorder.size(); delimiterIndex++){
            if(inorder[delimiterIndex] == rootValue)break;
        }

        vector<int> leftInorder(inorder.begin(), inorder.begin() + delimiterIndex);
        vector<int> rightInorder(inorder.begin() + delimiterIndex + 1, inorder.end());
        vector<int> leftPostorder(postorder.begin(), postorder.begin() + leftInorder.size());
        vector<int> rightPostorder(postorder.begin() + leftInorder.size(), postorder.end() - 1);

        root->left = traversal(leftInorder, leftPostorder);
        root->right = traversal(rightInorder, rightPostorder);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size() == 0 || postorder.size() == 0)return nullptr;
        return traversal(inorder, postorder);
    }
};
