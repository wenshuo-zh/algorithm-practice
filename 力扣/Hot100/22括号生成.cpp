class Solution {
public:
    vector<string> res;
    void backtracking(string& path, int n, int left, int right){
        if(left == n && right == n){
            res.push_back(path);
            return;
        }
        if(left < n){
            path += '(';    
            backtracking(path, n, left+1, right);
            path.pop_back();
        }
        if(right < left){
            path += ')';
            backtracking(path, n, left, right+1);
            path.pop_back();
        }
        
    }
    vector<string> generateParenthesis(int n) {
        string path;
        backtracking(path, n, 0, 0);
        return res;
    }
};
