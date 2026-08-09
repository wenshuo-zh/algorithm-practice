#include<iostream>
using namespace std;
const int N = 100;
int a[N][N];
int main() {
	int n;
	cin >> n;
	a[0][n / 2] = 1;
	int k = 2;
	//¼ÇÂ¼k-1µÄ×ø±êrow col
	int row = 0 ,col = n / 2;
	for (; k <= n * n; k++) {
		if (row == 0 && col != n - 1) {
			row = n - 1;
			col++;
		}
		else if (row != 0 && col == n - 1) {
			row--;
			col = 0;
		}
		else if (row == 0 && col == n - 1) {
			row++;
			col = n - 1;
		}
		else {
			if (a[row - 1][col + 1] == 0) {
				row--;
				col++;
			}
			else {
				row++;
			}
		}
		a[row][col] = k;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}