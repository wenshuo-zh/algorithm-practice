// 回溯（切割问题）：for 循环的 i 用来不断拉长这一刀的终点，
// 每选定一个 i 就把 i + 1 之后剩下的字符交给递归继续切；
// 这一刀对应的所有方案搜完回溯后，i++ 再试更长的一刀
class Solution {
public:
    bool isp(const string& s, int startIndex, int i){
        if(s.empty())return false;
        while(startIndex <= i){
            if(s[startIndex++] != s[i--])return false;
        }
        return true;
    }
    vector<vector<string>> res;
    vector<string> path;
    void backtracking(const string& s, int startIndex){
        if(startIndex >= s.size()){
            res.push_back(path);
            return;
        }
        for(int i = startIndex; i < s.size(); i++){
            // 截取 [startIndex, i] 部分的子串
            if(isp(s, startIndex, i)){
                string str = s.substr(startIndex, i - startIndex + 1);
                path.push_back(str);
                backtracking(s, i + 1);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        backtracking(s, 0);
        return res;
    }
};
