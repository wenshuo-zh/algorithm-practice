#include<iostream>
using namespace std;
int main() {
	int n, m, k;
	cin >> n >> m >> k;
	int arr[110][110] = {0};
	//»ð°Ñ2£¬Ó©Ê¯3
	int x, y;
	for (int i = 1; i <= m; i++) {
		cin >> x >> y;
		arr[x][y] = 2;
		for (int row = x - 2; row <= x + 2; row++) {
			
				if (row >= 1 && row <= n) {
					if(row == x-2||row==x+2)arr[row][y] = 1;
					else if (row == x - 1 || row == x + 1) {
						if(y>1)arr[row][y - 1] = 1;
						arr[row][y] = 1;
						if(y<n)arr[row][y + 1] = 1;
					}
					else {
						for (int col = y - 2; col <= y + 2; col++) {
							if(col >= 1 && col <= n)arr[row][col] = 1;
						}
					}
				}
			
		}
	}
	for (int i = 1; i <= k; i++) {
		cin >> x >> y;
		arr[x][y] = 3;

		for (int row = x - 2 ; row <= x + 2; row++) {
			for (int col = y - 2; col <= y + 2; col++) {
				if (row >= 1 && row <= n && col >= 1 && col <= n)arr[row][col] = 1;
			}
		}
		
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (arr[i][j] == 0)ans++;
		}
	}
	cout << ans;
	return 0;
}