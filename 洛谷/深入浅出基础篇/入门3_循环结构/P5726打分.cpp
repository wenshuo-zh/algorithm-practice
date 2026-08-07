#include<iostream>
using namespace std;

const int N = 1010;
int a[N];

int main() {
	int n;
	cin >> n;
	int max = -1, min = 11;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > max)max = a[i];
		if (a[i] < min)min = a[i];
		sum += a[i];
	}	
	double ans = 1.0*(sum - max - min) / (n - 2);
	printf("%.2lf", ans);
	return 0;
}