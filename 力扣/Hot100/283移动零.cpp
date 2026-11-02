class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0)continue;
            for(int j = i+1; j < nums.size(); j++){
                if(nums[j] == 0)continue;
                swap(nums[i], nums[j]);
                break;
            }
        }
    }
};

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;
        for(int fast = 0; fast < nums.size(); fast++){
            if(nums[fast] != 0){
                swap(nums[fast], nums[slow]);
                slow++;
            }
        }
    }
};
