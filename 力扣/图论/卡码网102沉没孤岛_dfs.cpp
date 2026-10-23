#include<iostream>
#include<vector>
using namespace std;
int dir[4][2] = {0, 1 ,1, 0, -1, 0, 0, -1};
void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y){
    if(visited[x][y]) return;
    visited[x][y] = true;
    for(int i = 0; i < 4; i++){
        int nextx = x + dir[i][0];
        int nexty = y + dir[i][1];
        if(nextx < 0 || nextx >= grid.size() || nexty < 0 || nexty >= grid[0].size())continue;
        if(grid[nextx][nexty] == 1 && !visited[nextx][nexty]){
            dfs(grid, visited, nextx, nexty);
        }
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    for(int i = 0; i < n; i++){
        if(grid[i][0] == 1)dfs(grid, visited, i, 0);
        if(grid[i][m-1] == 1)dfs(grid, visited, i, m-1);
    }
    for(int j = 0; j < m; j++){
        if(grid[0][j] == 1)dfs(grid, visited, 0, j);
        if(grid[n-1][j] == 1)dfs(grid, visited, n-1, j);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == 1 && !visited[i][j]){
                grid[i][j] = 0;
            }
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}
