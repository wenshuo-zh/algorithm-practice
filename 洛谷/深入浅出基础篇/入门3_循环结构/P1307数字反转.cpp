#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[10];
	int temp = n, rev = 0;
	while (temp) {
		rev = rev * 10 + temp % 10;
		temp /= 10;
	}
	cout << rev << endl;
	return 0;
}
