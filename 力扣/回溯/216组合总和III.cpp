// 回溯：从 1~9 里选 k 个，每选一个就从目标和 n 里减掉
class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;
    void backtracking(int k, int n, int startIndex){
        if(path.size() == k){
            if(n == 0)res.push_back(path);
            return;
        }
        for(int i = startIndex; i <= 9; i++){
            path.push_back(i);
            backtracking(k, n - i, i + 1);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        backtracking(k, n, 1);
        return res;
    }
};

// 剪枝优化：双重剪枝
// 1) 剩余可选的数不够凑满 k 个：i <= 9 - (k - path.size()) + 1
// 2) 已选中的数超过剩余目标和：i <= n
class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;
    void backtracking(int k, int n, int startIndex){
        if(path.size() == k){
            if(n == 0)res.push_back(path);
            return;
        }
        for(int i = startIndex; i <= 9 - (k - path.size()) + 1 && i <= n; i++){
            path.push_back(i);
            backtracking(k, n - i, i + 1);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        backtracking(k, n, 1);
        return res;
    }
};
