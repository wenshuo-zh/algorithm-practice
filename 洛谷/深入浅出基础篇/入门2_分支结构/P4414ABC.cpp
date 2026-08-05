#include<iostream>
#include<string>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	string s;
	cin >> s;
	//a<b<c
	if (a > b)swap(a, b);
	if (a > c)swap(a, c);
	if (b > c)swap(b, c);
	
	if (s[0] == 'A') {
		cout << a << " ";
		if (s[1] == 'B')cout << b << " " << c << endl;
		else cout << c << " " << b << endl;

	}
	else if (s[0] == 'B') {
		cout << b << " ";
		if (s[1] == 'A')cout << a << " " << c << endl;
		else cout << c << " " << a << endl;
	}
	else {
		cout << c << " ";
		if (s[1] == 'A')cout << a << " " << b;
		else cout << b << " " << a << endl;
	}
	return 0;
}