// vector 版
class Solution {
public:
//按第0个元素降序排列，第0个元素相同则按第1个元素升序排列
    static bool cmp(vector<int>& a, vector<int>& b){
        if(a[0] == b[0])return a[1] < b[1];
        return a[0] > b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), cmp);
        int n = people.size();
        vector<vector<int>> queue;
        for(int i = 0; i < n; i++){
            int k = people[i][1];//在下标为i同学前面有k个身高大于等于他的同学
            queue.insert(queue.begin() + k, people[i]);
        }
        return queue;
    }
};

// list 版
class Solution {
public:
//按第0个元素降序排列，第0个元素相同则按第1个元素升序排列
    static bool cmp(vector<int>& a, vector<int>& b){
        if(a[0] == b[0])return a[1] < b[1];
        return a[0] > b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), cmp);
        int n = people.size();
        list<vector<int>> lst;
        for(int i = 0; i < n; i++){
            int k = people[i][1];//在下标为i同学前面有k个比他高的同学
            auto it = lst.begin();
            while(k--)it++;
            lst.insert(it, people[i]);
        }
        vector<vector<int>> queue(lst.begin(), lst.end());
        return queue;
    }
};
