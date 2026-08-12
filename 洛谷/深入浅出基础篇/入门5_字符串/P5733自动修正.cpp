#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s;
	for (auto it : s) {
		if (it >= 'a' && it <= 'z')it -= 32;
		cout << it;
	}
	return 0;
}