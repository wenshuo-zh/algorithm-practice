// 贪心：先按身高降序、k 升序排序，再依次把每个人插入到下标 k 处。
// 高个子先入队，后插入的矮个子不会影响已入队者的 k 值，所以局部插入即全局合法。

// vector 版：插入需搬移元素 O(n)，整体 O(n^2)，写法最简。
class Solution {
public:
    // 身高降序；身高相同时 k 升序
    static bool cmp(vector<int>& a, vector<int>& b) {
        if (a[0] == b[0]) return a[1] < b[1];
        return a[0] > b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), cmp);
        vector<vector<int>> queue;
        for (auto& person : people) {
            queue.insert(queue.begin() + person[1], person);
        }
        return queue;
    }
};

// list 版：链表插入本身 O(1)，但要先走到第 k 个结点，整体同为 O(n^2)，常数更小。
class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b) {
        if (a[0] == b[0]) return a[1] < b[1];
        return a[0] > b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), cmp);
        list<vector<int>> lst;
        for (auto& person : people) {
            auto it = lst.begin();
            advance(it, person[1]);
            lst.insert(it, person);
        }
        return vector<vector<int>>(lst.begin(), lst.end());
    }
};
