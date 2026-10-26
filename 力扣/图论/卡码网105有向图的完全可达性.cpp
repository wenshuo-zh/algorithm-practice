#include<iostream>
#include<vector>
#include<list>
using namespace std;
void dfs(const vector<list<int>>& graph, vector<bool>& visited, int x){
    visited[x] = true;
    for(int i : graph[x]){
        if(!visited[i])dfs(graph, visited, i);
    }
}
int main(){
    int n, k;
    cin >> n >> k;
    vector<list<int>> graph(n+1);
    for(int i = 0; i < k; i++){
        int s, t;
        cin >> s >> t;
        graph[s].push_back(t);
    }
    vector<bool> visited(n+1, false);
    dfs(graph, visited, 1);
    for(int i = 1; i < n+1; i++){
        if(!visited[i]){
            cout << -1 << endl;
            return 0;
        }
    }
    cout << 1 << endl;
    return 0;
}
