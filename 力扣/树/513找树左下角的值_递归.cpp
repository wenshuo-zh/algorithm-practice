class Solution {
public:
    int maxDepth = -1;
    int result = 0;

    void traversal(TreeNode* node, int depth) {
        if(node->left == nullptr && node->right == nullptr){
            if(depth > maxDepth){
                maxDepth = depth;
                result = node->val;
            }
        }
        if(node->left != nullptr){
            depth++;
            traversal(node->left, depth);
            depth--;
        }
        if(node->right != nullptr){
            depth++;
            traversal(node->right, depth);
            depth--;
        }
    }

    int findBottomLeftValue(TreeNode* root) {
        if(root == nullptr)return 0;
        traversal(root, 0);
        return result;
    }
};
