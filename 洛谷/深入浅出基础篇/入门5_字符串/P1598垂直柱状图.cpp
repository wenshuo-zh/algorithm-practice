#include<bits/stdc++.h>
using namespace std;
int nums[26];
int main() {
	string s;
	for (int k = 0; k < 4; k++) {          
		getline(cin, s);
		for (char ch : s) {
			if (ch >= 'A' && ch <= 'Z') nums[ch - 'A']++;
		}
	}
	int maxh = 0;
	for (int i = 0; i < 26; i++) maxh = max(maxh, nums[i]);

	char print[400][26];                   
	memset(print, ' ', sizeof(print));      
	for (int i = 0; i < 26; i++) {
		print[maxh][i] = 'A' + i;          
		for (int j = 1; j <= nums[i]; j++)
			print[maxh - j][i] = '*';      
	}
	for (int i = 0; i <= maxh; i++) {
		for (int j = 0; j < 26; j++) {
			cout << print[i][j];
			if (j != 25) cout << ' ';       
		}
		cout << endl;
	}
	return 0;
}
