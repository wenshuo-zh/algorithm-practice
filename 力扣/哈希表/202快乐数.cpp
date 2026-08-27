#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while (true) {
            int sum = 0;
            while (n != 0) {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }
            if (sum == 1) {
                return true;
            }
            if (seen.count(sum)) {
                return false;
            }
            seen.insert(sum);
            n = sum;
        }
    }
};
