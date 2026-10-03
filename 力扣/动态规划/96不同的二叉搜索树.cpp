#include <vector>
using namespace std;

class Solution {
public:
    int numTrees(int n) {
        // dp[i]：由 i 个不同节点组成的二叉搜索树数量
        vector<int> dp(n + 1);
        dp[0] = 1; // 空子树也有一种组合方式
        for (int i = 1; i <= n; ++i) {
            for (int root = 1; root <= i; ++root) {
                dp[i] += dp[root - 1] * dp[i - root];
            }
        }
        return dp[n];
    }
};
