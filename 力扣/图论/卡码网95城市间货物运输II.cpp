#include<iostream>
#include<vector>
#include<climits>
using namespace std;
struct Edge{
    int s;
    int t;
    int v;
};
int main(){
    int n, m;
    cin >> n >> m;
    vector<Edge> edges(m);
    for(int i = 0; i < m; i++){
        cin >> edges[i].s >> edges[i].t >> edges[i].v;
    }
    vector<int> dist(n+1, INT_MAX);
    dist[1] = 0;
    for(int i = 1; i <= n-1; i++){
        for(auto e : edges){
            if(dist[e.s] != INT_MAX && dist[e.s] + e.v < dist[e.t]){
                dist[e.t] = dist[e.s] + e.v;
            }
        }
    }
    if(dist[n] == INT_MAX){
        cout << "unconnected";
        return 0;
    }
    bool flag = true;
    for(auto e : edges){
        if(dist[e.s] != INT_MAX && dist[e.s] + e.v < dist[e.t]){
            flag = false;
        }
    }
    if(!flag) cout << "circle";
    else cout << dist[n];
}
