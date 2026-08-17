#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int n = s.size();
	int a = 0, b = 0, c = 0;
	for (int i = 0; i < n; i+=5) {
		if (s[i] == 'a') {
			if (s[i + 3] == 'a')a = a;
			else if (s[i + 3] == 'b')a = b;
			else if (s[i + 3] == 'c')a = c;
			else a = s[i + 3] - '0';
		}
		else if (s[i] == 'b') {
			if (s[i + 3] == 'a')b = a;
			else if (s[i + 3] == 'b')b = b;
			else if (s[i + 3] == 'c')b = c;
			else b = s[i + 3] - '0';
		}
		else if (s[i] == 'c') {
			if (s[i + 3] == 'a')c = a;
			else if (s[i + 3] == 'b')c = b;
			else if (s[i + 3] == 'c')c = c;
			else c = s[i + 3] - '0';
		}
	}
	cout << a << " " << b << " " << c << endl;
	return 0;
}