class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root == nullptr)return 0;

        TreeNode* leftNode = root->left;
        TreeNode* rightNode = root->right;
        int leftDepth = 0;
        int rightDepth = 0;
        while(leftNode != nullptr){
            leftNode = leftNode->left;
            leftDepth++;
        }
        while(rightNode != nullptr){
            rightNode = rightNode->right;
            rightDepth++;
        }

        // 左右深度相同，当前子树是满二叉树
        if(leftDepth == rightDepth)return (1 << (leftDepth + 1)) - 1;
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
};
