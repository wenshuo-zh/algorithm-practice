class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b){
        if(a[0] == b[0])return a[1] < b[1];
        return a[0] < b[0];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), cmp);
        int cur = intervals[0][1];
        int res = 0;
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] < cur){
                res++;
                cur = min(cur, intervals[i][1]);
            }
            else cur = intervals[i][1];
        }
        return res;
    }
};
