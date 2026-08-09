#include<iostream>
using namespace std;

const int N = 100;
int ans[N];

int main() {
	int s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	
	for (int i = 1; i <= s1; i++) {
		for (int j = 1; j <= s2; j++) {
			for (int k = 1; k <= s3; k++) {
				ans[i + j + k]++;
			}
		}
	}
	int maxx = 0;
	int index;
	for (int i = 3; i <= s1 + s2 + s3; i++) {
		if (maxx < ans[i]) {
			maxx = ans[i];
			index = i;
		}
	}
	cout << index;
}