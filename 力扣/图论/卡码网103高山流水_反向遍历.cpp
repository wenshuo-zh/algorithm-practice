#include<iostream>
#include<vector>
using namespace std;
int dir[4][2] = {0, 1, 1, 0, -1, 0, 0, -1};
void dfs(const vector<vector<int>>& grid, vector<vector<bool>>& can, int x, int y){
    can[x][y] = true;
    for(int i = 0; i <4; i++){
        int nextx = x + dir[i][0];
        int nexty = y + dir[i][1];
        if(nextx < 0 ||nextx >= grid.size() || nexty < 0 || nexty >= grid[0].size())continue;
        if(!can[nextx][nexty] && grid[x][y] <= grid[nextx][nexty]){
            dfs(grid, can, nextx, nexty);
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
    vector<vector<bool>> can1(n, vector<bool>(m, false));
    vector<vector<bool>> can2(n, vector<bool>(m, false));
    //从上下边界反向遍历
    for(int j = 0; j < m; j++){
        dfs(grid, can1, 0, j);
        dfs(grid, can2, n-1, j);
    }
    //从左右边界反向遍历
    for(int i = 0; i < n; i++){
        dfs(grid, can1, i, 0);
        dfs(grid, can2, i, m-1);
    }
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m; j++){
            if(can1[i][j] && can2[i][j])
                cout << i << " " << j << endl;
        }
    }
    return 0;
}
