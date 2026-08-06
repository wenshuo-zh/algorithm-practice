#include<iostream>
using namespace std;
int main() {
	int k, n = 1;
	cin >> k;
	double Sn = 0;
	while (1) {
		Sn += 1.0 / n;
		if (Sn > k)break;
		n++;
	}
	cout << n << endl;
	return 0;
}