#include<iostream>
#include<cmath>
using namespace std;
int main() {
	const double sqrt5 = sqrt(5);
	int n;
	cin >> n;
	double ans1 = 1.0, ans2 = 1.0;
	for (int i = 0; i < n; i++) {
		ans1 *= (1 + sqrt5) / 2;
		ans2 *= (1 - sqrt5) / 2;
	}
	double ans = (ans1 - ans2) / sqrt5;
	printf("%.2lf", ans);
	return 0;
}