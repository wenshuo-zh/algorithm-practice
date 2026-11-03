class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char, int> pmp;
        unordered_map<char, int> smp;
        vector<int> res;
        if (p.size() > s.size()) return res;
        // 初始化窗口
        for (int i = 0; i < p.size(); i++) {
            pmp[p[i]]++;
            smp[s[i]]++;
        }
        if (pmp == smp) res.push_back(0);
        // 滑动窗口
        for (int left = 0; left < s.size() - p.size(); left++) {
            // 移出左边字符
            smp[s[left]]--;
            if (smp[s[left]] == 0) smp.erase(s[left]);
            // 加入新的右边字符
            int right = left + p.size();
            smp[s[right]]++;
            
            if (pmp == smp) {
                res.push_back(left + 1);
            }
        }
        return res;
    }
};
