#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int money10 = 10 * a + b;
	int ans = money10 / 19;
	cout << ans << endl;
	return 0;
}