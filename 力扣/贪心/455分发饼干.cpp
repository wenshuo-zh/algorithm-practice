// 贪心：优先用最小能满足当前胃口最小孩子的饼干，避免浪费大饼干。
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int child = 0;
        for (int cookie : s) {
            if (child < g.size() && g[child] <= cookie) ++child;
        }
        return child;
    }
};
