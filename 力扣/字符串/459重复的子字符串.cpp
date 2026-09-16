// KMP：用 next 数组求最小重复子串长度，再判断能否整除
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        vector<int> next(n, 0);
        int j = -1;
        next[0] = -1;
        for (int i = 1; i < n; i++) {
            while (j >= 0 && s[i] != s[j + 1]) j = next[j];
            if (s[i] == s[j + 1]) j++;
            next[i] = j;
        }
        int len = n - (next[n - 1] + 1);
        return next[n - 1] != -1 && n % len == 0;
    }
};

// 移动匹配：s + s 去掉首尾后在中间查找 s，避免匹配到拼接前后的原字符串
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s + s;
        t.erase(t.begin());
        t.pop_back();
        return t.find(s) != string::npos;
    }
};
