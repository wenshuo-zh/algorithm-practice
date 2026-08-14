#include<iostream>
#include<string>
using namespace std;
int main() {
	int q;
	cin >> q;
	string str;
	cin >> str;
	for (int i = 0; i < q; i++) {
		int n;
		cin >> n;
		if (n == 1) {
			string str1;
			cin >> str1;
			str += str1;
			cout << str << endl;
		}
		else if (n == 2) {
			int a, b;
			cin >> a >> b;
			string temp;
			for (int i = a; i < a + b; i++) {
				temp.push_back(str[i]);
			}
			str = temp;
			cout << str << endl;
		}
		else if (n == 3) {                
			int a; string s;
			cin >> a >> s;
			string temp;
			for (int i = 0; i < a; i++)               
				temp.push_back(str[i]);
			temp += s;                               
			for (int i = a; i < (int)str.size(); i++) 
				temp.push_back(str[i]);
			str = temp;
			cout << str << endl;
		}
		else {
			int n = str.size();
			string str1;
			cin >> str1;
			int m = str1.size();
			int pos = -1;
			for (int i = 0; i < n - m + 1; i++) {
				int j = 0;
				while (j < m && str[i + j] == str1[j]) j++;
				if (j == m) {
					pos = i;
					break;
				}
			}
			cout << pos << endl;
		}
	}
	return 0;
}