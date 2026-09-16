// 值拷贝：每层递归拷贝一份新的 count，天然互不影响，不用手动回溯
class Solution {
public:
    bool traversal(TreeNode* root, int count) {
        if (root->left == nullptr && root->right == nullptr) {
            return count == 0;
        }
        if (root->left != nullptr && traversal(root->left, count - root->left->val)) {
            return true;
        }
        if (root->right != nullptr && traversal(root->right, count - root->right->val)) {
            return true;
        }
        return false;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;
        targetSum -= root->val;
        return traversal(root, targetSum);
    }
};

// 引用回溯：所有递归共享同一个 count，回来时手动加回去
class Solution {
public:
    bool traversal(TreeNode* root, int& count) {
        if (root->left == nullptr && root->right == nullptr) {
            return count == 0;
        }
        if (root->left != nullptr) {
            count -= root->left->val;
            if (traversal(root->left, count)) return true;
            count += root->left->val;
        }
        if (root->right != nullptr) {
            count -= root->right->val;
            if (traversal(root->right, count)) return true;
            count += root->right->val;
        }
        return false;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;
        targetSum -= root->val;
        return traversal(root, targetSum);
    }
};
