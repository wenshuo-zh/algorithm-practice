#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int n;
	cin >> n;
	int temp = n - 1;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			printf("%02d",j);
		}
		i += temp;
		n += temp;
		temp--;
		cout << endl;
	}
	return 0;
}
