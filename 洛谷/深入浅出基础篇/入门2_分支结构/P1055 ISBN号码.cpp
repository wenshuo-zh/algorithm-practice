#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s;
	int d0 = s[0] - '0';
	int d2 = s[2] - '0';
	int d3 = s[3] - '0';
	int d4 = s[4] - '0';
	int d6 = s[6] - '0';
	int d7 = s[7] - '0';
	int d8 = s[8] - '0';
	int d9 = s[9] - '0';
	int d10 = s[10] - '0';
	int last = s[12] - '0';
	//0-670-82162-4
	int sum = 1 * d0 + 2 * d2 + 3 * d3 + 4 * d4 + 5 * d6 + 6 * d7 + 7 * d8 + 8 * d9 + 9 * d10;
	int sign = sum % 11;

	if (sign == last || sign == 10 && s[12] == 'X')cout << "Right" << endl;
	else {
		if (sign == 10) s[12] = 'X';
		else s[12] = sign + '0';
		cout << s << endl;
	}
	return 0;
}