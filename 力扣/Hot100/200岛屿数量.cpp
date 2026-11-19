class Solution {
public:
    int dir[4][2] = {1,0,-1,0,0,1,0,-1};
    void dfs(vector<vector<char>>& grid, int x, int y){
        if(x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] == '0'){
            return;
        }
        else if(grid[x][y] == '1'){
            grid[x][y] = '0';
        }
        for(int i = 0; i < 4; i++){
            int nextX = x + dir[i][0];
            int nextY = y + dir[i][1];
            if(nextX < 0 || nextX >= grid.size() || nextY < 0 || nextY >= grid[0].size()){
                continue;
            }
            dfs(grid, nextX, nextY);
        } 
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int res = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == '0')continue;
                res++;
                dfs(grid, i, j);
            }
        }
        return res;
    }
};
