#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double p = (a + b + c) / 2;
	//sqrt()º¯Êý¿ª¸ùºÅ
	double ans = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%.1lf", ans);
	return 0;
}