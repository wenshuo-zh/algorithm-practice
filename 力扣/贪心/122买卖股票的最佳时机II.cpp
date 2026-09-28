// 贪心：累加每段正收益，等价于在所有上升区间的起点买、终点卖。
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        for (int i = 1; i < prices.size(); ++i) result += max(0, prices[i] - prices[i - 1]);
        return result;
    }
};
