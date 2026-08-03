#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int h, r;
	cin >> h >> r;
	const double pi = 3.14;
	double s;
	s = pi * r * r;
	double v;
	v = s * h;
	int ans;
	ans = ceil(20 * 1000 / v);
	cout << ans;
	return 0;
}