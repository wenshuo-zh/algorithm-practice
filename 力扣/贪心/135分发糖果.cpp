// 两趟贪心：左→右保证右边分数高则糖更多，右→左保证左边分数高则糖更多
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int res = 0;
        vector<int> child(n, 1);
        //从左向右遍历，如果右边的比左边大就加一
        for(int i = 0; i < n - 1; i++){
            if(ratings[i] < ratings[i+1])child[i+1] = child[i] + 1;
        }
        //左边比右边大,取下标i-1的糖和当前i的糖加一中最大的
        for(int i = n - 1; i > 0; i--){
            if(ratings[i-1] > ratings[i])child[i-1] = max(child[i-1], child[i] + 1);
        }
        for(int i : child)res += i;
        return res;
    }
};
