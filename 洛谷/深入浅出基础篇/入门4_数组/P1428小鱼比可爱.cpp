#include<iostream>
using namespace std;
const int N = 110;
int a[N];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		int count = 0;
		for (int j = 0; j < i; j++) {
			if (a[i] > a[j])count++;
		}
		cout << count << " ";
	} 
	return 0;
}