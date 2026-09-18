// 回溯：每层从 startIndex 往后取，保证取出的组合不重复
class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;
    void backtracking(int n, int k, int startIndex){
        if(path.size() == k){
            res.push_back(path);
            return;
        }
        for(int i = startIndex; i <= n; i++){
            path.push_back(i);
            backtracking(n, k, i + 1);
            path.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        backtracking(n, k, 1);
        return res;
    }
};

// 剪枝优化：剩余的数不够凑满 k 个时提前终止本层
// 还需 k - path.size() 个，从 i 到 n 还剩 n - i + 1 个，
// 要求 k - path.size() <= n - i + 1，整理得 i <= n + 1 - (k - path.size())
class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;
    void backtracking(int n, int k, int startIndex){
        if(path.size() == k){
            res.push_back(path);
            return;
        }
        for(int i = startIndex; i <= n + 1 - (k - path.size()); i++){
            path.push_back(i);
            backtracking(n, k, i + 1);
            path.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        backtracking(n, k, 1);
        return res;
    }
};
