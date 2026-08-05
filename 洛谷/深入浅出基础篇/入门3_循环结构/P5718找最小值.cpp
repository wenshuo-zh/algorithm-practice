#include<iostream>
using namespace std;

const int N = 1e2 + 10;
int a[N];

int main() {
	int n;
	cin >> n;
	int min = 1001;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] < min)min = a[i];
	}
	cout << min << endl;
	return 0;
}
