#include<iostream>
using namespace std;
int main() {
	double t;
	int n;
	cin >> t >> n;
	double ans1 = t / n;
	int ans2 = n * 2;
	printf("%.3lf\n", ans1);
	printf("%d\n", ans2);
	return 0;
}