#include<iostream>
using namespace std;
const int N = 50;
int ans[N][N];

void theRowVal(int row) {
	if (row == 0)return;
	theRowVal(row - 1);
	for (int col = 1; col <= row; col++) {
		if (col == 1 || row == col) {
			ans[row][col] = 1;
		}
		else ans[row][col] = ans[row - 1][col] + ans[row - 1][col - 1];
		cout << ans[row][col] << " ";
	} 
	cout << endl;
}
int main() {
	//�ݹ鷨
	int n;
	cin >> n;
	theRowVal(n);
	return 0;
}