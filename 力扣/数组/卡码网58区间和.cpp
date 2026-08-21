#include<iostream>
#include<vector>
using namespace std;
//暴力解法，超时
int main() {
	int n;
	cin >> n;
	vector<int>arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int a, b;
	while (cin >> a >> b) {
		int total = 0;
		for (int i = a; i <= b; i++) {
			total += arr[i];
		}
		cout << total << endl;
	}
	return 0;
}
//前缀和
int main() {
	int n;
	cin >> n;
	vector<int>arr(n), sum(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (i == 0)sum[i] = arr[i];
		else sum[i] = sum[i - 1] + arr[i];
	}
	int a, b;
	while (cin >> a >> b) {
		if (a != 0)cout << sum[b] - sum[a - 1] << endl;
		else cout << sum[b] << endl;
	}
}