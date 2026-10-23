class Solution {
public:
    int dir[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int res = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    for(auto &d : dir){
                        int nx = i + d[0];
                        int ny = j + d[1];
                        if(nx < 0 || nx >= n || ny < 0 || ny >= m || grid[nx][ny] == 0){
                            res++;
                        }
                    }
                }
            }
        }
        return res;
    }
};
