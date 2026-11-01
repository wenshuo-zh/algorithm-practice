// 暴力解法
class Solution {
public:
    bool isSame(string s1, string s2){
        if(s1.size() != s2.size())return false;
        if(s1.size() == 0)return true;
        unordered_map<char, int> mp;//键存字符，值存出现次数
        for(int i = 0; i < s1.size(); i++)mp[s1[i]]++;
        for(int i = 0; i < s2.size(); i++){
            if(mp.find(s2[i]) == mp.end() || mp[s2[i]] == 0)return false;
            mp[s2[i]]--;
        }
        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<bool> visited(n, false);
        vector<vector<string>> res;
        for(int i = 0; i < n; i++){
            if(visited[i])continue;
            vector<string> temp;
            temp.push_back(strs[i]);
            visited[i] = true;
            for(int j = n-1; j > i; j--){
                if(visited[j])continue;
                if(isSame(strs[i], strs[j])){
                    temp.push_back(strs[j]);
                    visited[j] = true;
                }
            }
            res.push_back(temp);
        }
        return res;       
    }
};

// 排序 + 哈希解法
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;//key存排序后的字符串，value存
        for(auto s : strs){
            string key = s;
            sort(key.begin(), key.end());
            mp[key].push_back(s);
        }
        vector<vector<string>> res;
	        for(auto it : mp){//it是pair<string, vector<string>>
            res.push_back(it.second);
        }
        return res;
    }
};
