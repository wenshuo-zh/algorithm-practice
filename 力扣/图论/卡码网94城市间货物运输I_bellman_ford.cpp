#include<iostream>
#include<vector>
#include <climits>
using namespace std;
struct Edge{
    int s;//起点
    int t;//终点
    int v;//权值
};
int main(){
    int n, m;
    cin >> n >> m;
    vector<Edge> edges(m);
    for(int i = 0; i < m; i++){
        cin >> edges[i].s >> edges[i].t >> edges[i].v;
    }
    vector<int> dist(n+1, INT_MAX);//dist[i]表示起点到下标i所表示的最小距离
    dist[1] = 0;
    //循环n-1次
    for(int i = 1; i <= n-1; i++){
        //检查所有道路
        for(auto e : edges){
            if(dist[e.s] != INT_MAX && dist[e.s] + e.v < dist[e.t]){
                dist[e.t] = dist[e.s] + e.v;
            }
        }
    }
    //输出结果
    if(dist[n] == INT_MAX)cout << "unconnected";
    else cout << dist[n];
    return 0;
}
