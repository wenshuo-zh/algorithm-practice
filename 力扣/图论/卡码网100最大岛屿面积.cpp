#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int DIR[4][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

int bfs(const vector<vector<int>>& grid, vector<vector<bool>>& visited, int sx, int sy) {
    queue<pair<int, int>> que;
    que.push({sx, sy});
    visited[sx][sy] = true;
    int area = 0;
    while (!que.empty()) {
        auto [x, y] = que.front();
        que.pop();
        ++area;
        for (const auto& d : DIR) {
            int nx = x + d[0], ny = y + d[1];
            if (nx < 0 || nx >= static_cast<int>(grid.size()) ||
                ny < 0 || ny >= static_cast<int>(grid[0].size()) ||
                visited[nx][ny] || grid[nx][ny] == 0) continue;
            visited[nx][ny] = true;
            que.push({nx, ny});
        }
    }
    return area;
}

int dfs(const vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y) {
    if (x < 0 || x >= static_cast<int>(grid.size()) || y < 0 ||
        y >= static_cast<int>(grid[0].size()) || visited[x][y] || grid[x][y] == 0)
        return 0;
    visited[x][y] = true;
    int area = 1;
    for (const auto& d : DIR) area += dfs(grid, visited, x + d[0], y + d[1]);
    return area;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    for (auto& row : grid) for (int& cell : row) cin >> cell;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int answer = 0;
    for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j)
        if (!visited[i][j] && grid[i][j] == 1) answer = max(answer, bfs(grid, visited, i, j));
    cout << answer << '\n';
}
