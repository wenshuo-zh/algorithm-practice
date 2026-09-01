#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        // 利用快慢指针保留合理空格
        int slow = 0;
        for(int fast = 0; fast < s.size(); fast++){
            if(s[fast] != ' ' || (slow != 0 && s[fast - 1] != ' ')){
                s[slow] = s[fast];
                slow++;
            }
        }
        if(slow > 0 && s[slow - 1] == ' ') slow--;
        s.resize(slow);

        // 反转整个字符串
        int left = 0, right = slow - 1;
        while(left < right){
            swap(s[left],s[right]);
            left++;
            right--;
        }

        // 反转单词
        int start = 0;
        for(int i = 0; i < slow; i++){
            if(s[i] == ' '){
                int left = start, right = i - 1;
                while(left < right){
                    swap(s[left],s[right]);
                    left++;
                    right--;
                }
                start = i + 1;
            }
        }
        left = start, right = slow - 1;
        while(left < right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
        return s;
    }
};
