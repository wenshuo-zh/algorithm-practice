// bfs版本
class Solution {
public:
    int dir[4][2] = {0, 1, 1, 0, -1, 0, 0, -1};
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldcolor = image[sr][sc];
        if(oldcolor == color)return image;
        queue<pair<int, int>> que;
        que.push({sr, sc});
        image[sr][sc] = color;
        while(!que.empty()){
            pair<int, int> cur = que.front();
            que.pop();
            int curx = cur.first;
            int cury = cur.second;
            for(int i = 0; i < 4; i++){
                int nextx = curx + dir[i][0];
                int nexty = cury + dir[i][1];
                if(nextx < 0 || nextx >= image.size() || nexty < 0 || nexty >= image[0].size())continue;
                if(image[nextx][nexty] == oldcolor){
                    image[nextx][nexty] = color;
                    que.push({nextx, nexty});
                }
            }
        }
         return image;
    }
};

// dfs版本
class Solution {
public:
    int dir[4][2] = {0, 1, 1, 0, -1, 0, 0, -1};
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldcolor = image[sr][sc];
        if(oldcolor == color)return image;
        image[sr][sc] = color;
        for(int i = 0; i < 4; i++){
            int nextx = sr + dir[i][0];
            int nexty = sc + dir[i][1];
            if(nextx < 0 || nextx >= image.size() || nexty < 0 || nexty >= image[0].size())continue;
            if(image[nextx][nexty] == oldcolor){
                floodFill(image, nextx, nexty, color);
            }
        }
        return image;
    }
};
