#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int dir[4][2] = {0, 1, 1, 0, -1, 0, 0, -1};
unordered_map<int, int> mp;//key为岛屿编号，值为岛屿大小
void dfs(vector<vector<int>>& grid, int x, int y,int key, int& val){
    grid[x][y] = key;
    val++;
    for(int i = 0; i < 4; i++){
        int nextx = x + dir[i][0];
        int nexty = y + dir[i][1];
        if(nextx < 0 || nextx >= grid.size() || nexty < 0 || nexty >= grid[0].size())continue;
        if(grid[nextx][nexty] == 1)
            dfs(grid, nextx, nexty, key, val);
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
    int key = 2;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == 1){
                int val = 0;
                dfs(grid, i, j, key, val);
                mp[key++] = val;
            }
        }
    }
    int res = 0;
    //处理整张地图没有水的情况
    for(auto it : mp)res = max(res, it.second);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == 0){
                //用set去重岛屿编号
                unordered_set<int> st;
                int temp = 1;
                for(int k = 0; k < 4; k++){
                    int nextx = i + dir[k][0];
                    int nexty = j + dir[k][1];
                    if(nextx < 0 || nextx >= grid.size() || nexty < 0 || nexty >= grid[0].size())continue;
                    if(grid[nextx][nexty] != 0){
                        st.insert(grid[nextx][nexty]);
                    }
                }
                for(auto it : st)temp += mp[it];
                if(temp > res)res = temp;
            }
        }
    }
    cout << res;
}
