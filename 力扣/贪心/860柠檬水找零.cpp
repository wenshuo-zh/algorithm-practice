// 贪心：找零 20 元时优先用 10 + 5，把更通用的 5 元留到后面
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;
        for(int i = 0; i < bills.size(); i++){
            if(bills[i] == 5)five++;
            if(bills[i] == 10){
                if(five == 0)return false;
                five--;
                ten++;
            }
            if(bills[i] == 20){
                if(five == 0 || (ten == 0 && five <= 2))return false;
                if(ten > 0){
                    ten--;
                    five--;
                }
                else five -= 3;
            }
        }
        return true;
    }
};
