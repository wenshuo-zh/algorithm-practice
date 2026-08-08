#include<iostream>
using namespace std;

const int N = 1010;
int c[N], m[N], e[N];
int main() {
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		cin >> c[i] >> m[i] >> e[i];
		for (int j = 1; j < i; j++) {
			if (abs(c[i] - c[j]) <= 5 && abs(m[i] - m[j]) <= 5 && abs(e[i] - e[j]) <= 5 && abs(c[i] + m[i] + e[i] - c[j] - m[j] - e[j]) <= 10) {
				ans++;	
			}
		}
	}
	cout << ans;
	return 0;
}