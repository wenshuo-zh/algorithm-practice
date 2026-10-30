#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> dist(n+1, vector<int>(n+1, INT_MAX));//dist[u][v]表示从节点u到节点v的距离
    //双向建图
    int u, v, w;
    for(int i = 0;i < m; i++){
        cin >> u >> v >> w;
        dist[u][v] = w;
        dist[v][u] = w;
    }
    for(int i = 1; i <= n; i++) dist[i][i] = 0;

    for(int k = 1; k <= n; k++){//中间节点
        for(int i = 1; i <= n; i++){//起点
            for(int j = 1; j <= n; j++){//终点
                if(dist[i][k] == INT_MAX || dist[k][j] == INT_MAX)continue;
                if(dist[i][k] + dist[k][j] < dist[i][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    int q;
    cin >> q;
    int start, end;
    while(q--){
        cin >> start >> end;
        if(dist[start][end] == INT_MAX)cout << -1 << endl;
        else cout << dist[start][end] << endl;
    }
}
