#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int temp = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			 printf("%02d",j + temp);
		}
		temp += n;
		cout << endl;
	}
	cout << endl;
	temp = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			cout << "  ";
		}
		int k = 1;
		for (; k <= i; k++) {
			printf("%02d", k + temp);
		}
		temp += k - 1;
		cout << endl;
	}
	return 0;
}