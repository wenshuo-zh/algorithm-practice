// dfs版本
class Solution {
public:
    int dir[4][2] = {0, 1, 1, 0, -1, 0, 0, -1};
    void dfs(const vector<vector<char>>& grid, vector<vector<bool>>& visited, int x, int y){
        visited[x][y] = true;
        for(int i = 0; i < 4; i++){
            int nextx = x + dir[i][0];
            int nexty = y + dir[i][1];
            if(nextx < 0 || nextx >= grid.size() || nexty < 0 || nexty >= grid[0].size())continue;
            if(!visited[nextx][nexty] && grid[nextx][nexty] == '1'){
                dfs(grid, visited, nextx, nexty);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
        int res = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(!visited[i][j] && grid[i][j] == '1'){
                    res++;
                    dfs(grid, visited, i, j);
                }
            }
        }
        return res;
    }
};
