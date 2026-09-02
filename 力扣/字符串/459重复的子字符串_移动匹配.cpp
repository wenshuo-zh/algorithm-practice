using namespace std;

class Solution {
public:
    // 移动匹配：s+s 去掉首尾后查找 s，避免匹配到拼接前后的原字符串。
    bool repeatedSubstringPattern(string s) {
        string t = s + s;
        t.erase(t.begin());
        t.pop_back();
        return t.find(s) != string::npos;
    }
};
