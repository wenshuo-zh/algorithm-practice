class Solution {
public:
    void getPath(TreeNode* node, vector<int>& path, vector<string>& res) {
        path.push_back(node->val);
        if(node->left == nullptr && node->right == nullptr){
            string temp;
            int n = path.size();
            for(int i = 0; i < n - 1; i++){
                temp += to_string(path[i]);
                temp += "->";
            }
            temp += to_string(path[n - 1]);
            res.push_back(temp);
            return;
        }

        if(node->left != nullptr){
            getPath(node->left, path, res);
            path.pop_back();
        }
        if(node->right != nullptr){
            getPath(node->right, path, res);
            path.pop_back();
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        vector<int> path;
        getPath(root, path, res);
        return res;
    }
};
