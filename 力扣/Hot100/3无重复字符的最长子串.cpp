class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;//键存字符，值存上一次出现的下标
        int left = 0;
        int res = 0;
        for(int right = 0; right < s.size(); right++){
            //找到了，且上次位置在窗口左边界右边
            if(mp.find(s[right]) != mp.end() && mp[s[right]] >= left){
                left = mp[s[right]] + 1;
            }
            mp[s[right]] = right;
            res = max(res, right-left + 1);
        }
        return res;
    }
};
