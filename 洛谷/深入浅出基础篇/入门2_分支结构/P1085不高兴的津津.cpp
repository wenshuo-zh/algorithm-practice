#include<iostream>
using namespace std;

const int N = 20;
int a1[N] = { 0 };
int a2[N] = { 0 };

int main() {
	int unhappy = 0;
	int temp = 0;
	int month;
	for (int i = 1; i <= 7; i++) {
		cin >> a1[i] >> a2[i];
		if (a1[i] + a2[i] > temp) {
			temp = a1[i] + a2[i];
			month = i;
		}
	}
	if (temp > 8)cout << month;
	else cout << 0;
	return 0;
}