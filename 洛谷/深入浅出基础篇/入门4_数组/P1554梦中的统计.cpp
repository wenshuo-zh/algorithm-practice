#include<iostream>
using namespace std;
int ans[10];
int main() {
	int m, n;
	cin >> m >> n;
	for (int i = m; i <= n; i++) {
		int temp = i;
		while (temp > 0) {
			ans[temp % 10]++;
			temp = temp / 10;
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}