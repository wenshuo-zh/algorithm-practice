class Solution {
public:
    int countSubstrings(string s) {
        // dp[i][j] 表示下标 i 到 j 的子串是否为回文串
        vector<vector<bool>> dp(s.size(), vector<bool>(s.size(), false));
        int result = 0;
        for (int i = static_cast<int>(s.size()) - 1; i >= 0; --i) {
            for (int j = i; j < static_cast<int>(s.size()); ++j) {
                if (s[i] == s[j] && (j - i <= 1 || dp[i + 1][j - 1])) {
                    dp[i][j] = true;
                    ++result;
                }
            }
        }
        return result;
    }
};
