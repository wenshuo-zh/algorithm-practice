#include<bits/stdc++.h>
using namespace std;
//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    vector<vector<int>> decorateRecord(TreeNode* root) {
        queue<TreeNode*>que;
        vector<vector<int>>ans;
        if (root == nullptr)return ans;
        que.push(root);
        while (!que.empty()) {

            vector<int>a;
            const int n = que.size();


            for (int i = 0; i < n; i++) {
                a.push_back(que.front()->val);
                TreeNode* temp = que.front();
                que.pop();
                if (temp->left != nullptr)que.push(temp->left);
                if (temp->right != nullptr)que.push(temp->right);

            }

            ans.push_back(a);
        }
        return ans;
    }
};