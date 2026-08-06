#include<iostream>
using namespace std;
int main() {
	int cost;
	int left = 0;
	int sum = 0;
	for (int i = 1; i <= 12; i++) {
		cin >> cost;
		left = left + 300 - cost;
		if (left < 0) {
			cout << -i;
			return 0;
		}
		sum += left / 100 * 100;
		left -= left / 100 * 100;
	}
	cout << sum * 1.2 + left << endl;
	return 0;
}