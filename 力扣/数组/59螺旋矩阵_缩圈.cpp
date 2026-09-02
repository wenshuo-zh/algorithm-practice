using namespace std;

class Solution {
public:
    // loop 控制圈数，中心点单独处理。
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n, vector<int>(n));
        int loop = n / 2, value = 1;
        int start = 0, offset = 1;
        while(loop--){
            int i = start, j = start;
            for(; j < n - offset; j++) result[i][j] = value++;
            for(; i < n - offset; i++) result[i][j] = value++;
            for(; j > start; j--) result[i][j] = value++;
            for(; i > start; i--) result[i][j] = value++;
            start++;
            offset++;
        }
        if(n % 2) result[n / 2][n / 2] = value;
        return result;
    }
};
