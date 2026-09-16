// 填边法：依次填上、右、下、左四条边，每填完一条边就收缩对应边界
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n, vector<int>(n));
        int up = 0, down = n, left = 0, right = n;
        int value = 1;
        while (value <= n * n) {
            for (int j = left; j < right; j++) result[up][j] = value++;
            up++;
            for (int i = up; i < down; i++) result[i][right - 1] = value++;
            right--;
            for (int j = right - 1; j >= left; j--) result[down - 1][j] = value++;
            down--;
            for (int i = down - 1; i >= up; i--) result[i][left] = value++;
            left++;
        }
        return result;
    }
};

// 缩圈法：loop 控制圈数，每圈结束后起始点后移、边长偏移量加一，中心点单独处理
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n, vector<int>(n));
        int loop = n / 2, value = 1;
        int start = 0, offset = 1;
        while (loop--) {
            int i = start, j = start;
            for (; j < n - offset; j++) result[i][j] = value++;
            for (; i < n - offset; i++) result[i][j] = value++;
            for (; j > start; j--) result[i][j] = value++;
            for (; i > start; i--) result[i][j] = value++;
            start++;
            offset++;
        }
        if (n % 2) result[n / 2][n / 2] = value;
        return result;
    }
};
