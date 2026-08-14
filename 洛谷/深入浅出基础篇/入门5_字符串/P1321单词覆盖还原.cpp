#include<iostream>
#include<string>
using namespace std;
int main() {
	int boy = 0, girl = 0;
	string s;
	cin >> s;
	int n = s.size();
	for (int i = 0; i < n; i++) {
		if (s[i] == 'b') boy++;
		else if (s[i] == 'o' && (i == 0 || s[i - 1] != 'b')) boy++;
		else if (s[i] == 'y' && (i == 0 || (s[i - 1] != 'b' && s[i - 1] != 'o'))) boy++;
		else if (s[i] == 'g') girl++;
		else if (s[i] == 'i' && (i == 0 || s[i - 1] != 'g')) girl++;
		else if (s[i] == 'r' && (i == 0 || (s[i - 1] != 'i' && s[i - 1] != 'g'))) girl++;
		else if (s[i] == 'l' && (i == 0 || (s[i - 1] != 'r' && s[i - 1] != 'i' && s[i - 1] != 'g'))) girl++;
	}
	cout << boy << endl;
	cout << girl << endl;
	return 0;
}
