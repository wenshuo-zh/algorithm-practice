// 排序 + 贪心
class Solution {
public:
    //按第一个元素升序排序
    static bool cmp(vector<int>& a, vector<int>& b){
        return a[0] < b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), cmp);
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for(int i = 1; i < intervals.size(); i++){
            //有重叠
            vector<int> cur{res.back()};
            if(cur[1] >= intervals[i][0]){
                //下面三行优化成这一行
                res.back()[1] = max(res.back()[1], intervals[i][1]);
                //int right = max(cur[1], intervals[i][1]);
                // res.pop_back();
                // res.push_back({cur[0], right});
            }
            else{
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
};
