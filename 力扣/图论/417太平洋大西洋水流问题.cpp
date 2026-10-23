class Solution {
public:
    int dir[4][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    void dfs(const vector<vector<int>>& heights, vector<vector<bool>>& can, int x, int y){
        can[x][y] = true;
        for(int i = 0; i <4; i++){
            int nextx = x + dir[i][0];
            int nexty = y + dir[i][1];
            if(nextx < 0 || nextx >= heights.size() || nexty < 0 || nexty >= heights[0].size()) continue;
            if(!can[nextx][nexty] && heights[nextx][nexty] >= heights[x][y]){
                dfs(heights, can, nextx, nexty);
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<bool>> pac(n, vector<bool>(m, false));
        vector<vector<bool>> atl(n, vector<bool>(m, false));
        for(int j = 0; j < m; j++){
            dfs(heights, pac, 0, j);
            dfs(heights, atl, n-1, j);
        }
        for(int i = 0; i < n; i++){
            dfs(heights, pac, i, 0);
            dfs(heights, atl, i, m-1);
        }
        vector<vector<int>> res;
        for(int i = 0; i < n ; i++){
            for(int j = 0; j < m; j++){
                if(pac[i][j] && atl[i][j]){
                    res.push_back({i, j});
                }
            }
        }
        return res;
    }
};
