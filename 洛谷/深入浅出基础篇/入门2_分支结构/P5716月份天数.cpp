#include<iostream>
using namespace std;
int main() {
	int y, m;
	cin >> y >> m;
	bool isLeap;
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) 		isLeap = true;
	else isLeap = false;
	int days;
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)days = 31;
	else if (m == 2) {
		if (isLeap)days = 29;
		else days = 28;
	}
	else days = 30;
	cout << days;
	return 0;
}
