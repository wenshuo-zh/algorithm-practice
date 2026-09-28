// 前缀和：总油量不足必无解；从最小前缀和之后出发，任意前缀油量都非负。
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0, prefix = 0, minPrefix = 0, start = 0;
        for (int i = 0; i < gas.size(); ++i) {
            total += gas[i] - cost[i];
            prefix += gas[i] - cost[i];
            if (prefix < minPrefix) {
                minPrefix = prefix;
                start = i + 1;
            }
        }
        return total < 0 ? -1 : start % gas.size();
    }
};

// 贪心：若从 start 到 i 油量为负，该区间内任一点都不能作为起点，直接从 i + 1 重启。
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0, current = 0, start = 0;
        for (int i = 0; i < gas.size(); ++i) {
            int diff = gas[i] - cost[i];
            total += diff;
            current += diff;
            if (current < 0) {
                start = i + 1;
                current = 0;
            }
        }
        return total < 0 ? -1 : start;
    }
};
