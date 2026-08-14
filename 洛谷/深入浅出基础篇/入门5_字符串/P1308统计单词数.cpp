#include<iostream>
#include<string>
using namespace std;
int main() {
	string word, art;
	getline(cin, word);
	getline(cin, art);
	for (auto &it : art) if (it <= 'Z' && it >= 'A')it += 32;
	for (auto &it : word) if (it <= 'Z' && it >= 'A')it += 32;
	int n = art.size();
	int ans = -1, count = 0;
	int temp_i = 0;
	for (int i = 0; i < n; i++) {
		string temp;
		if (art[i] == ' ') {
			for (int j = temp_i; j < i; j++) {
				temp.push_back(art[j]);
			}
			if (word == temp) {
				if (ans == -1) ans = temp_i;
				count++;
			}
			temp_i = i + 1;
		}
	}
	string temp;
	for (int j = temp_i; j < n; j++) temp.push_back(art[j]);
	if (word == temp) {
		if (ans == -1) ans = temp_i;
		count++;
	}
	if (ans == -1)cout << ans << endl;
	else cout << count << " " << ans << endl;
	return 0;
}