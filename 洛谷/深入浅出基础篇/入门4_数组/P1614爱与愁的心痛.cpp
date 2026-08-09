#include<iostream>
using namespace std;
const int N = 1e4 + 10;
int a[N];
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i]; 
	}
	int minn = 1e9;
	for (int i = 0; i < n - m + 1; i++) {
		int temp = 0;
		for (int j = i; j < m + i; j++) {
			temp += a[j];
		}
		if (minn > temp)minn = temp;
		//cout <<"temp=" <<temp<< "min=" << minn << endl;
	}
	cout << minn;
	return 0;
}