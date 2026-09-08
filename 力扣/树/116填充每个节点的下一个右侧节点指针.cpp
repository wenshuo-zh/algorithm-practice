class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> que;
        if(root == nullptr)return root;
        que.push(root);
        while(!que.empty()){
            int n = que.size();
            for(int i = 0; i < n; i++){
                Node* cur = que.front();
                que.pop();
                if(i != n - 1)cur->next = que.front();
                if(cur->left != nullptr)que.push(cur->left);
                if(cur->right != nullptr)que.push(cur->right);
            }
        }
        return root;
    }
};
