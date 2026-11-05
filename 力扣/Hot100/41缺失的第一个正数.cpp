// 原地哈希
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int curIndex = 0;
        //先判断数字是否在 [1, n] 范围内，合法之后再计算下标，防止下标越界
        while(curIndex < n){
            //值在[1-n]这个范围
            if(nums[curIndex] > 0 && nums[curIndex] <= n){
                int nextIndex = nums[curIndex] - 1;
                //值和下一个要去位置的值不相等
                if(nums[curIndex] != nums[nextIndex]){
                    swap(nums[curIndex], nums[nextIndex]);
                }
                else curIndex++;
            }
            else curIndex++;
        }
        for(int i = 0; i < n; i++){
            if(nums[i] != i + 1)return i + 1;
        }
        return n + 1;
    }
};
