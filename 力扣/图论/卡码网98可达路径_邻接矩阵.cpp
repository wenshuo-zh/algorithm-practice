#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> res;
vector<int> path;
//graph：当前图，x：当前节点，n：终点
void dfs(const vector<vector<int>>& graph, int x, int n){
    if(x == n){
        res.push_back(path);
        return;
    }
    for(int i = 0; i <= n; i++){
        if(graph[x][i] == 1){
            path.push_back(i);
            dfs(graph, i, n);
            path.pop_back();
        }
    }
}
int main(){
    int n, m, s, t;
    cin >> n >> m;
    //邻接矩阵
    vector<vector<int>> graph(n+1, vector<int>(n+1, 0));
    while(m--){
        cin >> s >> t;
        graph[s][t] = 1;
    }
    path.push_back(1);
    dfs(graph, 1, n);
    if(res.size() == 0)cout<< -1 <<endl;
    for(const vector<int> &pa : res){
        for(int i = 0; i < pa.size()-1; i++){
            cout << pa[i] << " ";
        }
        cout << pa[pa.size()-1] << endl;
    }
}
