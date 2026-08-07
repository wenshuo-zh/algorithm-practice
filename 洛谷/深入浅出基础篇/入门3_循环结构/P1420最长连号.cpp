#include<iostream>
using namespace std;

const int N = 1e4 + 10;
int a[N];
int main() {
	int n;
	cin >> n;
	int count = 1;
	int maxCount = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < n; i++) {
		if (a[i] == a[i - 1] + 1)count++;
		else {
			if (count > maxCount) {
				maxCount = count;
			}
			count = 1;
		}
		//cout << count << " " << maxCount << endl;
	}
	if (count > maxCount) maxCount = count;
	if (n == 0 || n == 1) {
		cout << n;
		return 0;
	}
	cout << maxCount << endl;
	return 0;
}