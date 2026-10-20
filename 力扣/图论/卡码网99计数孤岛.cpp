#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int DIR[4][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

void bfs(const vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y) {
    queue<pair<int, int>> que;
    que.push({x, y});
    visited[x][y] = true;
    while (!que.empty()) {
        auto [cx, cy] = que.front();
        que.pop();
        for (const auto& d : DIR) {
            int nx = cx + d[0], ny = cy + d[1];
            if (nx < 0 || nx >= static_cast<int>(grid.size()) ||
                ny < 0 || ny >= static_cast<int>(grid[0].size()) ||
                visited[nx][ny] || grid[nx][ny] == 0) continue;
            visited[nx][ny] = true;
            que.push({nx, ny});
        }
    }
}

void dfs(const vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y) {
    if (visited[x][y] || grid[x][y] == 0) return;
    visited[x][y] = true;
    for (const auto& d : DIR) {
        int nx = x + d[0], ny = y + d[1];
        if (nx >= 0 && nx < static_cast<int>(grid.size()) &&
            ny >= 0 && ny < static_cast<int>(grid[0].size()))
            dfs(grid, visited, nx, ny);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    for (auto& row : grid) for (int& cell : row) cin >> cell;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int islands = 0;
    for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j)
        if (!visited[i][j] && grid[i][j] == 1) {
            ++islands;
            bfs(grid, visited, i, j);
        }
    cout << islands << '\n';
}
