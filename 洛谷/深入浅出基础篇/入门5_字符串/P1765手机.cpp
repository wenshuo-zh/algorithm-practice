#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int ans =0;
	for (auto it : s) {
		if (it == ' ')ans++;
		else if (it == 'a' || it == 'd' || it == 'g' || it == 'j' || it == 'm' || it == 'p' || it == 't' || it == 'w')ans++;
		else if (it == 'b' || it == 'e' || it == 'h' || it == 'k' || it == 'n' || it == 'q' || it == 'u' || it == 'x')ans += 2;
		else if(it == 's' || it == 'z')ans += 4;
		else ans += 3;
	}
	cout << ans << endl;
	return 0;
}