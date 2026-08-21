#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	//vector<vector<int>>vec(n, vector<int>(m, 0));
	vector<int>row(n, 0), sumRow(n, 0);
	vector<int>col(m, 0), sumCol(m, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int temp;
			cin >> temp;
			row[i] += temp;
			col[j] += temp;
		}
	}
	sumRow[0] = row[0];
	sumCol[0] = col[0];
	int ans = INT_MAX;
	for(int i = 1;i< n;i++)sumRow[i] = sumRow[i - 1] + row[i];
	for (int i = 1; i < n - 1; i++) {
		int temp = (sumRow[n - 1] - sumRow[i]) - sumRow[i];
		if (temp < 0)temp = temp * -1;
		ans = min(ans, temp);
	}

	for(int j = 0;j<m;j++)sumCol[j] = sumCol[j - 1] + col[j];
	for (int j = 1; j < m - 1; j++) {
		int temp = (sumCol[m - 1] - sumCol[j]) - sumCol[j];
		if (temp < 0)temp = temp * -1;
		ans = min(ans, temp);
	}
	cout << ans;

	return 0;
}