// KMP：先求 next 数组，匹配时 i 不回退，j 失配按 next 回退
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        int n = needle.size();
        vector<int> next(n, 0);
        int j = -1;
        next[0] = -1;

        for (int i = 1; i < n; i++) {
            while (j >= 0 && needle[i] != needle[j + 1]) {
                j = next[j];
            }
            if (needle[i] == needle[j + 1]) j++;
            next[i] = j;
        }

        j = -1;
        for (int i = 0; i < haystack.size(); i++) {
            while (j >= 0 && haystack[i] != needle[j + 1]) {
                j = next[j];
            }
            if (haystack[i] == needle[j + 1]) j++;
            if (j == n - 1) return i - n + 1;
        }
        return -1;
    }
};

// 暴力匹配：枚举主串起点，再逐个比较模式串
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        int nh = haystack.size(), nn = needle.size();
        for (int slow = 0; slow <= nh - nn; slow++) {
            bool match = true;
            for (int fast = 0; fast < nn; fast++) {
                if (haystack[slow + fast] != needle[fast]) {
                    match = false;
                    break;
                }
            }
            if (match) return slow;
        }
        return -1;
    }
};
