using namespace std;

class Solution {
public:
    // 暴力匹配：枚举主串起点，再逐个比较模式串。
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        int nh = haystack.size(), nn = needle.size();
        for(int slow = 0; slow <= nh - nn; slow++){
            bool match = true;
            for(int fast = 0; fast < nn; fast++){
                if(haystack[slow + fast] != needle[fast]){
                    match = false;
                    break;
                }
            }
            if(match) return slow;
        }
        return -1;
    }
};
