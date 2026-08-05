#include<iostream>
using namespace std;
int main() {
	int x, n;
	cin >> x >> n;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (x != 6 && x != 7) ans += 250;
		x++;
		if (x > 7)x = 1;
	}
	cout << ans << endl;
	return 0;
}