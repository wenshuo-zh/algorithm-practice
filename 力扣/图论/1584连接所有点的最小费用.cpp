// prim
class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        vector<bool> visited(n, false);
        vector<int> minDist(n, INT_MAX);
        minDist[0] = 0;//下标i连到树的最小权值
        int res = 0;
        for (int i = 0; i < n; i++) {
            int minVal = INT_MAX;
            int u = -1;
            //这个for循环找u，u是树外连到树上最小点的下标
            for (int j = 0; j < n; j++) {
                if (!visited[j] && minDist[j] < minVal) {
                    minVal = minDist[j];
                    u = j;
                }
            }
            visited[u] = true;
            res += minDist[u];
            //更新minDist
            for(int j = 0; j < n; j++){
                if (visited[j]) continue;
                int dist = abs(points[u][0] - points[j][0]) + abs(points[u][1] - points[j][1]);
                if(dist < minDist[j])minDist[j] = dist;
            }
        }
        return res;
    }
};

// kruskal
class Solution {
public:
    struct Edge{
        int u, v, w;
    };
    //并查集模板函数
    vector<int> father;
    void init(const int n){
        father.resize(n);
        for(int u = 0; u < n; u++){
            father[u] = u;
        }
    }
    int find(int u){
        if(u == father[u])return u;
        else father[u] = find(father[u]);
        return father[u];
    }
    bool isSame(int u, int v) {
        u = find(u);
        v = find(v);
        return u == v;
    }   
    void join(int u, int v){
        u = find(u);
        v = find(v);
        if(u == v)return;
        father[v] = u;
    }
    //sort
    static bool cmp(const Edge& a, const Edge& b){
        return a.w < b.w;
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        vector<Edge> edges;
        int n = points.size();
        int res = 0;
        //初始化结构体
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                int w = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);
                edges.push_back({i, j, w}); 
            }
        }
        //按距离升序排序
        sort(edges.begin(), edges.end(), cmp);
        //利用并查集，筛选不联通的两点
        init(n);
        for(auto e : edges){
            if(isSame(e.u, e.v))continue;
            join(e.u, e.v);
            res += e.w;
        }
        return res;
    }
};
