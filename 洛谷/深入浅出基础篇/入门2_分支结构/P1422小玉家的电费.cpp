#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int n;
	cin >> n;
	double ans;
	if (n <= 150)ans = 0.4463 * n;
	else if (n > 150 && n <= 400)ans = 0.4463 * 150 + 0.4663 * (n - 150);
	else ans = 0.4463 * 150 + 0.4663 * 250 + 0.5663 * (n - 400);
	printf("%.1lf", ans);
	return 0;
}