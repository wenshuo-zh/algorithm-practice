#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	string s;
	cin >> n >> s;
	n %= 26;
	for (char c : s) {
		int it = c + n;
		if (it > 'z') {
			it -= 26;
		}
		cout << (char)it;
	}
	return 0;
}