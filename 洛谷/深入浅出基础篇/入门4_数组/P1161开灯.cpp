#include<iostream>
using namespace std;
int const N = 1e7+10;
//falseÎª¹Ø
bool num[N] = { false };
void change(double a, int t) {
	int sum = 0;
	for (int i = 1; i <= t; i++) {
		int temp = i * a;
		num[temp] = !num[temp];
	}
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		double a;
		int t;
		cin >> a >> t;
		change(a, t);
	}
	int ans = 0;
	while (1) {
		ans++;
		if (num[ans]) break;	
	}
	cout << ans << endl;
	return 0;
}