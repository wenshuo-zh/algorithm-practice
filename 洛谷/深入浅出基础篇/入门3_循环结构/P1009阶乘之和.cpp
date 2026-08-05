// TODO: 待完善 — n≤50需要高精度，等刷到算法1-1再补
#include<iostream>
using namespace std;
int main() {
	int n, s = 0;
	cin >> n;
	int n1;
	for (int i = 1; i <= n; i++) {
		n1 = 1;
		for (int j = 1; j <= i; j++) {
			n1 *= j;
		}
		s += n1;
	}
	cout << s << endl;
	return 0;
}