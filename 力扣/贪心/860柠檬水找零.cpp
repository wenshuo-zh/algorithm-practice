// 贪心：找零 20 元时优先用「一张 10 + 一张 5」，而不是三张 5。
// 因为 10 元只能用于 20 元的找零，5 元则所有面额都用得上，更通用。
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;
        for (int bill : bills) {
            if (bill == 5) {
                five++;
            } else if (bill == 10) {
                if (five == 0) return false;
                five--;
                ten++;
            } else {
                // 没有 5 元必失败；没有 10 元时需三张 5 元，不足两张也失败
                if (five == 0 || (ten == 0 && five <= 2)) return false;
                if (ten > 0) {
                    ten--;
                    five--;
                } else {
                    five -= 3;
                }
            }
        }
        return true;
    }
};
