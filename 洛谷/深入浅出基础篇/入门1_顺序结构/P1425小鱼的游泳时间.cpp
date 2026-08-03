#include<iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int e, f;
	e = c - a;
	if (d >= b) {
		f = d - b;
	}
	else {
		f = 60 + d - b;
		e--;
	}
	cout << e << " " << f << endl;
	return 0;
}