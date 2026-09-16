// unordered_map 计数：通用写法，不限定字符范围
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> count;
        for (char ch : magazine) {
            ++count[ch];
        }
        for (char ch : ransomNote) {
            auto it = count.find(ch);
            if (it == count.end() || it->second == 0) {
                return false;
            }
            --it->second;
        }
        return true;
    }
};

// 数组计数：字符范围固定为 26 个小写字母，数组下标就是哈希函数
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size()) return false;

        vector<int> count(26);
        for (char ch : magazine) count[ch - 'a']++;
        for (char ch : ransomNote) {
            if (--count[ch - 'a'] < 0) return false;
        }
        return true;
    }
};
