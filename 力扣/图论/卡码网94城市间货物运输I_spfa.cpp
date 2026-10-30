#include<iostream>
#include<vector>
#include<climits>
#include<queue>
using namespace std;
struct Edge{
    int t;//终点
    int v;//权值
};
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<Edge>> graph(n + 1);//因为要知道每个节点的出边，建立邻接表
    vector<int> dist(n+1, INT_MAX);
    int s, t, v;
    for(int i = 0; i < m; i++){
        cin >> s >> t >> v;
        graph[s].push_back({t, v});
    }
    queue<int> que;
    vector<bool> inQueue(n + 1, false);//判断节点i是否在队列里
    dist[1] = 0;
    que.push(1);
    inQueue[1] = true;
    while(!que.empty()){
        int cur = que.front();
        que.pop();
        inQueue[cur] = false;
        for(auto e : graph[cur]){
            if(dist[cur] != INT_MAX && dist[cur] + e.v < dist[e.t]){
                dist[e.t] = dist[cur] + e.v;
                if(!inQueue[e.t]){
                    inQueue[e.t] = true;
                    que.push(e.t);
                }
            }
        }
    }
    //输出结果
    if(dist[n] == INT_MAX)cout << "unconnected";
    else cout << dist[n];
    return 0;
}
