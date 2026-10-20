#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> res;
vector<int> path;

void dfs(const vector<vector<int>>& graph, int x, int n) {
    if (x == n) {
        res.push_back(path);
        return;
    }
    for (int next : graph[x]) {
        path.push_back(next);
        dfs(graph, next, n);
        path.pop_back();
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n + 1);
    while (m--) {
        int s, t;
        cin >> s >> t;
        graph[s].push_back(t);
    }

    path.push_back(1);
    dfs(graph, 1, n);
    if (res.empty()) {
        cout << -1 << '\n';
        return 0;
    }
    for (const auto& currentPath : res) {
        for (int i = 0; i < static_cast<int>(currentPath.size()); ++i)
            cout << (i ? " " : "") << currentPath[i];
        cout << '\n';
    }
}
