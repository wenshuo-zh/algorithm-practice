#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	int ans = 1;
	while (a != 1) {
		a = a / 2;
		ans++;
	}
	cout << ans << endl;
	return 0;
}