#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	//7x + 21k = n/52
	int k = 1;
	int x;
	for (;; k++) {
		x = (n / 52 - 21 * k) / 7;
		if ((n / 52 - 21 * k) % 7 == 0 && x <= 100) 	break;
		
	}
	cout << x << endl;
	cout << k << endl;
	return 0;
}