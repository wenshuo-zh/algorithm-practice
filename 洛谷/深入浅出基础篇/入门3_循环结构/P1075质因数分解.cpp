#include<iostream>
using namespace std;
bool isPrime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0)return false;
	}
	return true;
}
int main() {
	int n;
	cin >> n;
	int p = n;
	for (int i = 2; i * i <= n; i++) {
		if (isPrime(i) && n % i == 0) {
			p = n / i;
			break;
		}
	}
	cout << p << endl;
	return 0;
}