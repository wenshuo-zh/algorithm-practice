#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    //返回长度为2的数组，res[0]为不偷当前节点，以当前节点为根的子树能拿到最大值；res[1]是偷当前节点
    vector<int> robTree(TreeNode* cur) {
        if (cur == nullptr) return vector<int>(2, 0);
        vector<int> left = robTree(cur->left);
        vector<int> right = robTree(cur->right);
        int val1 = cur->val + left[0] + right[0]; //偷cur
        int val2 = max(left[0], left[1]) + max(right[0], right[1]); //不偷cur
        return {val2, val1};
    }

    int rob(TreeNode* root) {
        vector<int> res = robTree(root);
        return max(res[0], res[1]);
    }
};
