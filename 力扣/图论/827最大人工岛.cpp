class Solution {
public:
    int dir[4][2] = {0, 1, 1, 0, -1, 0, 0, -1};
    void dfs(vector<vector<int>>& grid, int x, int y, int key, int& val){
        grid[x][y] = key;
        val++;
        for(int i = 0; i < 4; i++){
            int nx = x + dir[i][0];
            int ny = y + dir[i][1];
            if(nx < 0 || nx >= grid.size() || ny < 0 || ny >= grid[0].size())continue;
            if(grid[nx][ny] == 1){
                dfs(grid, nx, ny, key, val);
            }
        }
    }
    int largestIsland(vector<vector<int>>& grid) {
        unordered_map<int, int> mp;
        int key = 2;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    int val = 0;
                    dfs(grid, i, j, key, val);
                    mp[key++] = val;
                }
            }
        }
        int res = 0;
        for(auto it : mp){
            if(res < it.second) res = it.second;
        }
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] != 0)continue;
                unordered_set<int> st;
                int temp = 1;
                for(int k = 0; k < 4; k++){
                    int nx = i + dir[k][0];
                    int ny = j + dir[k][1];
                    if(nx < 0 || nx >= grid.size() || ny < 0 || ny >= grid[0].size())continue;
                    if(grid[nx][ny] != 0){
                        st.insert(grid[nx][ny]);
                    }
                }
                for(auto it : st)temp += mp[it];
                if(res < temp)res = temp;
            }
        }
        return res;
    }
};
