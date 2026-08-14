#include<iostream>
#include<string>
using namespace std;
int main() {
	int a;
	cin >> a;
	string s;
	cin >> s;
	int n = s.size();
	int count = 0;
	bool used[105] = { false };
	for (int i = 0; i < n - 1; i++) {
		if (s[i] == 'V' && s[i + 1] == 'K') {
			count++;
			used[i] = used[i + 1] = true;
		}
	}
	for (int i = 0; i < n - 1; i++) {
		if (!used[i] && !used[i + 1] && s[i] == s[i + 1]) {
			count++;
			break;
		}
	}
	cout << count << endl;
	return 0;
}
