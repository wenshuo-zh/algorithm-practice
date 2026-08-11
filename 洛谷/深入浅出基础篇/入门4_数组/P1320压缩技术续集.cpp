#include<iostream>
using namespace std;
const int N = 210;
int arr[N][N];
int main() {
	string s;
	cin >> s;
	int n = s.size();
	for (int j = 0; j < n; j++) {
		arr[0][j] = s[j] - '0';
	}
	for (int i = 1; i < n; i++) {
		string s2;
		cin >> s2;
		for (int j = 0; j < n; j++) {
			arr[i][j] = s2[j] - '0';
		}
	}
	cout << n << " ";
	int count = 0;
	bool cur = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == cur) {
				count++;
			}
			else {
				cout << count << " ";
				count = 1;
				cur = !cur;
			}
		}
	}
	cout << count;
	return 0;
}