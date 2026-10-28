// 朴素版
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int>>> graph(n+1);
        for(auto t : times){
            int u = t[0];
            int v = t[1];
            int w = t[2];
            graph[u].push_back({v, w});
        }
        //起点到下标i的最短距离
        vector<int> dist(n+1, INT_MAX);
        vector<bool> visited(n+1, false);
        dist[k] = 0;
        for(int j = 1; j <= n; j++){
            //距离最小的节点和距离
            int minDist = INT_MAX;
            int u = -1;
            for(int i = 1; i <= n; i++){
                if(!visited[i] && dist[i] < minDist){
                    u = i;
                    minDist = dist[i];
                }
            }
            if(u == -1)break;
            //找到距离最小点u，更新u的邻居，看有没有更短的路线
            visited[u] = true;
            for(auto g : graph[u]){
                int v = g.first;
                int w = g.second;
                //比较目前找到的到v的最短距离和经过u再到v的距离
                if(!visited[v] && dist[u] + w < dist[v])dist[v] = dist[u] + w;
            }
        }
        int res = 0;
        for(int i = 1; i <= n; i++){
            if(dist[i] == INT_MAX)return -1;
            res = max(res, dist[i]);
        }
        return res;
    }
};

// 堆优化版
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int>>> graph(n+1);
        for(auto t : times){
            int u = t[0];
            int v = t[1];
            int w = t[2];
            graph[u].push_back({v, w});
        }
        vector<int> dist(n+1, INT_MAX);
        dist[k] = 0;
        //小顶堆（优先级队列）
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> >pq;
        pq.push({0, k});
        while(!pq.empty()){
            auto [d, u] = pq.top();
            pq.pop();
            if(d > dist[u])continue;
            for(auto g : graph[u]){
                int v = g.first;
                int w = g.second;
                if(dist[u] + w < dist[v]){
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }
        int res = 0;
        for(int i = 1; i <= n; i++){
            if(dist[i] == INT_MAX)return -1;
            res = max(dist[i], res);
        }
        return res;
    }
};
