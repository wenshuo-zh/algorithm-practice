// 两趟贪心：左→右保证「右边分数高则右边糖更多」，右→左保证「左边分数高则左边糖更多」。
// 第二趟必须用 max 取大，直接赋值会覆盖第一趟已合法的结果。
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> child(n, 1);
        for (int i = 0; i < n - 1; i++) {
            if (ratings[i] < ratings[i + 1]) child[i + 1] = child[i] + 1;
        }
        for (int i = n - 1; i > 0; i--) {
            if (ratings[i - 1] > ratings[i]) child[i - 1] = max(child[i - 1], child[i] + 1);
        }
        int result = 0;
        for (int c : child) result += c;
        return result;
    }
};
