#include <string>
#include <unordered_map>
using namespace std;

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
