#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int sumA = 0, sumB = 0, countA = 0, countB = 0;
	for (int i = 1; i <= n; i++) {
		if (i % k == 0) {
			countA++;
			sumA += i;
		}
		else {
			countB++;
			sumB += i;
		}
	}
	double avgA = 1.0 * sumA / countA;
	double avgB = 1.0 * sumB / countB;
	printf("%.1lf %.1lf", avgA, avgB);
	return 0;
}