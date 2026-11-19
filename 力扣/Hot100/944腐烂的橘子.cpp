class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int res = 0;
        int fresh = 0;
        queue<pair<int, int>> que;
        //先将腐烂的橙子的坐标放入队列，并同时统计新鲜橘子数
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 2){
                    que.push({i, j});
                }else if(grid[i][j] == 1){
                    fresh++;
                }
            }
        }
        int dir[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};
        //多源bfs一层一层开始腐烂
        while(!que.empty() && fresh > 0){
            int size = que.size();
            for(int k = 0; k < size; k++){
                int curX = que.front().first;
                int curY = que.front().second;
                que.pop();
                for(int i = 0; i < 4; i++){
                    int nextX = curX + dir[i][0];
                    int nextY = curY + dir[i][1];
                    if(nextX < 0 || nextX >= grid.size() ||
                       nextY < 0 || nextY >= grid[0].size()){
                        continue;
                    }
                    if(grid[nextX][nextY] == 1){
                        que.push({nextX, nextY});
                        fresh--;
                        grid[nextX][nextY] = 2;
                    }
                }
            }
            res++;
        }
        if(fresh != 0)return -1;
        else return res;
    }
};
