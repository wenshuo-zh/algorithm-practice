#include <queue>
#include <utility>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor = image[sr][sc];
        if (oldColor == color) return image;
        const int dir[4][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
        queue<pair<int, int>> que;
        que.push({sr, sc});
        image[sr][sc] = color;
        while (!que.empty()) {
            auto [x, y] = que.front();
            que.pop();
            for (const auto& d : dir) {
                int nx = x + d[0], ny = y + d[1];
                if (nx < 0 || nx >= static_cast<int>(image.size()) ||
                    ny < 0 || ny >= static_cast<int>(image[0].size()) ||
                    image[nx][ny] != oldColor) continue;
                image[nx][ny] = color;
                que.push({nx, ny});
            }
        }
        return image;
    }
};

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor = image[sr][sc];
        if (oldColor == color) return image;
        image[sr][sc] = color;
        const int dir[4][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
        for (const auto& d : dir) {
            int nx = sr + d[0], ny = sc + d[1];
            if (nx >= 0 && nx < static_cast<int>(image.size()) &&
                ny >= 0 && ny < static_cast<int>(image[0].size()) &&
                image[nx][ny] == oldColor)
                floodFill(image, nx, ny, color);
        }
        return image;
    }
};
