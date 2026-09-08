class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> que;
        vector<vector<int>> res;
        if(root == nullptr)return res;
        que.push(root);
        while(!que.empty()){
            int n = que.size();
            vector<int> temp;
            for(int i = 0; i < n; i++){
                Node* cur = que.front();
                que.pop();
                temp.push_back(cur->val);
                for(auto child : cur->children){
                    que.push(child);
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};
