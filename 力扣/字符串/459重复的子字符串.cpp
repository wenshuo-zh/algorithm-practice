using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        vector<int> next(n, 0);
        int j = -1;
        next[0] = -1;
        for(int i = 1; i < n; i++){
            while(j >= 0 && s[i] != s[j + 1]) j = next[j];
            if(s[i] == s[j + 1]) j++;
            next[i] = j;
        }
        int len = n - (next[n - 1] + 1);
        return next[n - 1] != -1 && n % len == 0;
    }
};
