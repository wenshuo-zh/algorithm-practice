#include<iostream>
#include<vector>
#include<list>
using namespace std;
vector<vector<int>> res;
vector<int> path;
void dfs(const vector<list<int>>& graph, int x, int n){
    if(x == n){
        res.push_back(path);
        return;
    }
    for(int i : graph[x]){
        path.push_back(i);
        dfs(graph, i, n);
        path.pop_back();
    }
}
int main(){
    int n, m, s, t;
    cin >> n >> m;
    vector<list<int>> graph(n+1);
    while(m--){
        cin >> s >> t;
        graph[s].push_back(t);
    }
    path.push_back(1);
    dfs(graph, 1, n);
    if(res.empty())cout << -1 << endl;
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size()-1; j++){
            cout << res[i][j] << " ";
        }
        cout << res[i][res[i].size()-1] << endl;
    }
}
