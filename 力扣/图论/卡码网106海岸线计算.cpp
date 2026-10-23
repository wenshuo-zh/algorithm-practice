#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int res = 0;
    vector<vector<int>> grid(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if(grid[i][j] == 1)res += 4;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 1) {
                if(i-1 >= 0 && grid[i-1][j] == 1)res -= 2;
                if(j-1 >= 0 && grid[i][j-1] == 1)res -= 2;
            }
        }
    }
    cout << res << endl;
}
