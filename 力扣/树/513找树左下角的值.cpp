// 递归：记录最大深度，第一个触及最大深度的叶子节点就是答案
class Solution {
public:
    int maxDepth = -1;
    int result = 0;

    void traversal(TreeNode* node, int depth) {
        if (node->left == nullptr && node->right == nullptr) {
            if (depth > maxDepth) {
                maxDepth = depth;
                result = node->val;
            }
        }
        if (node->left != nullptr) {
            depth++;
            traversal(node->left, depth);
            depth--;
        }
        if (node->right != nullptr) {
            depth++;
            traversal(node->right, depth);
            depth--;
        }
    }

    int findBottomLeftValue(TreeNode* root) {
        if (root == nullptr) return 0;
        traversal(root, 0);
        return result;
    }
};

// 层序遍历：每层的第一个节点就是该层最左，最后一层的第一个即为答案
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        if (root == nullptr) return 0;

        queue<TreeNode*> que;
        que.push(root);
        int result = 0;
        while (!que.empty()) {
            int n = que.size();
            result = que.front()->val;
            for (int i = 0; i < n; i++) {
                TreeNode* cur = que.front();
                que.pop();
                if (cur->left != nullptr) que.push(cur->left);
                if (cur->right != nullptr) que.push(cur->right);
            }
        }
        return result;
    }
};
