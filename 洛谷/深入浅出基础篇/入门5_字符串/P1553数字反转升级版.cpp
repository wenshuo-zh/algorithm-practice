#include<iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	int n = s.size();
	string temp1, temp2;
	int index;
	for (int i = 0; i < n; i++) {
		if (s[i] == '.') {
			bool firstIs0 = true, lastIs0 = true;
			index = i;
			for (int j = index - 1; j >= 0; j--) {
				if (s[j] == '0' && firstIs0 == true)continue;
				else firstIs0 = false;
				temp1.push_back(s[j]);
			}
			if (temp1.empty())temp1.push_back('0');
			temp1.push_back(s[index]);
			for (int k = index + 1; k < n; k++) {
				if (s[k] == '0' && lastIs0 == true)continue;
				else lastIs0 = false;
				temp2.push_back(s[k]);
			}
			if (temp2.empty())temp2.push_back('0');
			int temp2_n = temp2.size();
			for (int m = temp2_n - 1; m >= 0; m--) {
				temp1.push_back(temp2[m]);
			}
			break;
		}
		else if (s[i] == '/') {
			bool firstIs0 = true, lastIs0 = true;
			index = i;
			for (int j = index - 1; j >= 0; j--) {
				if (s[j] == '0' && firstIs0 == true)continue;
				else firstIs0 = false;
				temp1.push_back(s[j]);
			}
			if (temp1.empty())temp1.push_back('0');
			temp1.push_back(s[index]);
			for (int k = n - 1; k > index; k--) {
				if (s[k] == '0' && lastIs0 == true)continue;
				else lastIs0 = false;
				temp1.push_back(s[k]);
			}
			break;
		}
		else if (s[i] == '%') {
			index = i;
			bool firstIs0 = true;
			for (int j = index - 1; j >= 0; j--) {
				if (s[j] == '0' && firstIs0 == true)continue;
				else firstIs0 = false;
				temp1.push_back(s[j]);
			}
			if (temp1.empty())temp1.push_back('0');
			temp1.push_back(s[index]);
			break;
		}
	}
	if (temp1.empty()) {
		bool firstIs0 = true;
		for (int j = n - 1; j >= 0; j--) {
			if (s[j] == '0' && firstIs0 == true)continue;
			else firstIs0 = false;
			temp1.push_back(s[j]);
		}
		if (temp1.empty())temp1.push_back('0');
	}
	cout << temp1;
	return 0;
}