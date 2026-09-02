using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        int n = needle.size();
        vector<int> next(n, 0);
        int j = -1;
        next[0] = -1;

        for(int i = 1; i < n; i++){
            while(j >= 0 && needle[i] != needle[j + 1]){
                j = next[j];
            }
            if(needle[i] == needle[j + 1]) j++;
            next[i] = j;
        }

        j = -1;
        for(int i = 0; i < haystack.size(); i++){
            while(j >= 0 && haystack[i] != needle[j + 1]){
                j = next[j];
            }
            if(haystack[i] == needle[j + 1]) j++;
            if(j == n - 1) return i - n + 1;
        }
        return -1;
    }
};
