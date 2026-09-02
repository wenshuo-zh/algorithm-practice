using namespace std;

class Solution {
public:
    // 依次填上、右、下、左四条边，每填完一条边就收缩边界。
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n, vector<int>(n));
        int up = 0, down = n, left = 0, right = n;
        int value = 1;
        while(value <= n * n){
            for(int j = left; j < right; j++) result[up][j] = value++;
            up++;
            for(int i = up; i < down; i++) result[i][right - 1] = value++;
            right--;
            for(int j = right - 1; j >= left; j--) result[down - 1][j] = value++;
            down--;
            for(int i = down - 1; i >= up; i--) result[i][left] = value++;
            left++;
        }
        return result;
    }
};
