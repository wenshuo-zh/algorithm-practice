#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordset(wordDict.begin(), wordDict.end());
        //1.dp[j]含义：字符串长度为j能否由字典单词拼成
        vector<bool> dp(s.size() + 1, false);
        //2.递推公式： if([i, j] 这个区间的子串出现在字典里 && dp[i]是true) 那么dp[j] = true
        //3.初始化：
        dp[0] = true;
        //4.遍历顺序：不要先遍历物品，在遍历容量，
        for (int j = 1; j <= s.size(); j++) {
            for (int i = 0; i < j; i++) {
                string temp = s.substr(i, j - i);
                if (wordset.find(temp) != wordset.end() && dp[i] == true) dp[j] = true;
            }
        }
        return dp[s.size()];
    }
};
