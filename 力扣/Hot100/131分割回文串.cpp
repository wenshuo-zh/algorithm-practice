class Solution {
public:
    bool isp(string& s){
        int left = 0, right = s.size()-1;
        while(left < right){
            if(s[left++] != s[right--])return false;
        }
        return true;
    } 
    vector<vector<string>> res;
    void dfs(vector<string>& path, string& s, int index){
        if(index == s.size()){
            res.push_back(path);
            return;
        }
        for(int i = index; i < s.size(); i++){
            string temp = s.substr(index, i-index+1);
            if(!isp(temp))continue;
            path.push_back(temp);
            dfs(path, s, i+1);
            path.pop_back();
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> path;
        dfs(path, s, 0);
        return res;
    }
};
