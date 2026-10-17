class Solution {
public:
    int longestPalindromeSubseq(string s) {
        // dp[i][j] 表示下标 i 到 j 的子串中的最长回文子序列长度
        vector<vector<int>> dp(s.size(), vector<int>(s.size(), 0));
        for (int i = 0; i < static_cast<int>(s.size()); ++i) {
            dp[i][i] = 1;
        }
        for (int i = static_cast<int>(s.size()) - 1; i >= 0; --i) {
            for (int j = i + 1; j < static_cast<int>(s.size()); ++j) {
                if (s[i] == s[j]) {
                    dp[i][j] = dp[i + 1][j - 1] + 2;
                } else {
                    dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[0][s.size() - 1];
    }
};
