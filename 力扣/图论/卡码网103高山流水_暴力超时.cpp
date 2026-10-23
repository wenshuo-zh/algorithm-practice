#include<iostream>
#include<vector>
using namespace std;
int dir[4][2] = {0, 1, 1, 0, -1, 0, 0, -1};
void dfs(const vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y){
    visited[x][y] = true;
    for(int i = 0; i < 4; i++){
        int nextx = x + dir[i][0];
        int nexty = y + dir[i][1];
        if(nextx < 0 || nextx >= grid.size() || nexty < 0 || nexty >= grid[0].size())continue;
        if(!visited[nextx][nexty] && grid[x][y] >= grid[nextx][nexty]){
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
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            vector<vector<bool>> visited(n, vector<bool>(m, false));
            dfs(grid, visited, i, j);
            bool edge1 = false, edge2 = false;
            for(int x = 0; x < n; x++){
                if(visited[x][0])edge1 = true;
                if(visited[x][m-1])edge2 = true;
            }
            for(int y = 0; y < m; y++){
                if(visited[0][y])edge1 = true;
                if(visited[n-1][y])edge2 = true;
            }
            if(edge1 && edge2)cout << i << " " << j << endl;
        }
    }
    return 0;
}
