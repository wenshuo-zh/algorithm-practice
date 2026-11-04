class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int>sMp;
        unordered_map<char, int>tMp;
        for(int i = 0; i < t.size(); i++){
            tMp[t[i]]++;
        }
        if(t.empty() || s.size() < t.size()) return "";
        int minCnt = INT_MAX;
        int start = 0;
        int left = 0;
        int valid = 0;
        for(int right = 0; right < s.size(); right++){
            char c = s[right];
            //将right加入窗口
            if(tMp.count(c)){
                sMp[c]++;
                //更新valid
                if(sMp[c] == tMp[c]) valid++;
            }
            while(valid == tMp.size()){
                if(right - left + 1 < minCnt){
                    minCnt = right - left + 1;
                    start = left;
                }
                c = s[left];
                //更新valid
                if(tMp.count(c) && tMp[c] == sMp[c]) valid--;
                //收缩左边界
                if(tMp.count(c)) sMp[c]--;
                left++;
            }
        }
        if(minCnt == INT_MAX) return "";
        return s.substr(start, minCnt);
    }
};
