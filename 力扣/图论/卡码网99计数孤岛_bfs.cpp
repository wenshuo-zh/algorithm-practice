#include<iostream>
#include<vector>
#include<queue>
using namespace std;
/*
   dir[0] = {0, 1} dx = 0, dy = 1 行不变，列+1 向右
   dir[1] = {1, 0} 行+1，列不变 向下
   dir[2] = {-1, 0}向上
   dir[3] = {0, -1}向左
*/
int dir[4][2] = {0, 1, 1, 0, -1, 0, 0, -1};
void bfs(const vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y){
    queue<pair<int, int>> que;
    que.push({x, y});
    visited[x][y] = true;
    while(!que.empty()){
        pair<int, int> cur = que.front();
        que.pop();
        int curx = cur.first;
        int cury = cur.second;
        for(int i = 0; i < 4; i++){
            int nextx = curx + dir[i][0];
            int nexty = cury + dir[i][1];
            if(nextx < 0 || nextx >= grid.size() || nexty < 0 || nexty >= grid[0].size())continue;
            if(visited[nextx][nexty] == false && grid[nextx][nexty] == 1){
                que.push({nextx, nexty});
                visited[nextx][nexty] = true;
            }
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
    int res = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(visited[i][j] == false && grid[i][j] == 1){
                res++;
                bfs(grid, visited, i, j);
            }
        }
    }
    cout << res;
}
