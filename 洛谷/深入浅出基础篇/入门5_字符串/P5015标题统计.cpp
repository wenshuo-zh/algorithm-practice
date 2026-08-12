#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int ans = s.size();
	for (auto it : s) {
		if (it == ' ')ans--;
	}
	cout << ans;
	return 0;
}