class Solution {
public:
    string map[10] = {
        "", "", "abc", "def",
        "ghi", "jkl", "mno",
        "pqrs", "tuv", "wxyz"
    };
    vector<string> res;
    void backtracking(string& path, const string& digits, int i){
        if(path.size() == digits.size()){
            res.push_back(path);
            return;
        }

        int index = digits[i] - '0';
        for(int j = 0; j < map[index].size(); j++){
            path.push_back(map[index][j]);
            backtracking(path, digits, i+1);
            path.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        string path;
        backtracking(path, digits, 0);
        return res;
    }
};
