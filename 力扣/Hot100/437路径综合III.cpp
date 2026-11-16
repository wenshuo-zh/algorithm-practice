class Solution {
public:
    int sum = 0;
    void dfs(TreeNode* root, long long targetSum){
        if(!root)return;
        if(root->val == targetSum) sum++;
        dfs(root->left, targetSum-root->val);
        dfs(root->right, targetSum-root->val);
        return;
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(!root)return sum;
        dfs(root, targetSum);
        pathSum(root->left, targetSum);
        pathSum(root->right, targetSum);
        return sum;
    }
};

class Solution {
public:
    int res = 0;
    unordered_map<long long, int> mp;//key存数值，val存出现次数
    long long sum = 0;//前缀和
    void dfs(TreeNode* root, int targetSum){
        if(!root)return;
        sum += root->val;
        if(mp.find(sum - targetSum) != mp.end()){
            res += mp[sum - targetSum];
        }
        mp[sum]++;
        dfs(root->left, targetSum);
        dfs(root->right, targetSum);
        mp[sum]--;
        sum -= root->val;
        return;
    }
    int pathSum(TreeNode* root, int targetSum) {
        mp[0] = 1;
        dfs(root, targetSum);
        return res;
    }
};
