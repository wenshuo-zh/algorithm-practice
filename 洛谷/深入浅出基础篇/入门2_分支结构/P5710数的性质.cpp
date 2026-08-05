#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	bool a, b;
	if (n % 2 == 0)a = 1;
	else a = 0;
	if (n > 4 && n <= 12)b = 1;
	else b = 0;

	if (a == 1 && b == 1)cout << 1 << " ";
	else cout << 0 << " ";

	if (a == 0 && b == 0)cout << 0 << " ";
	else cout << 1 << " ";

	if ((a == 1 && b == 0) || (a == 0 && b == 1))cout << 1 << " ";
	else cout << 0 << " ";

	if (a == 0 && b == 0)cout << 1 << " ";
	else cout << 0 << endl;

}