using namespace std;

class Solution {
public:
    // 字符范围固定为 26 个小写字母，数组下标就是哈希函数。
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size() > magazine.size()) return false;
        vector<int> count(26);
        for(char ch : magazine) count[ch - 'a']++;
        for(char ch : ransomNote){
            if(--count[ch - 'a'] < 0) return false;
        }
        return true;
    }
};
