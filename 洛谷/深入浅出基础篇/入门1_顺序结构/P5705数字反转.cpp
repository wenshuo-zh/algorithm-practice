#include<iostream>
using namespace std;
int main() {
	float n, ans;
	cin >> n;
	int n10 = 10 * n;
	int units =  n10 % 10;
	int tens = n10 / 10 % 10;
	int hundreds = n10 / 100 % 10;
	int thousands = n10 / 1000 % 10;
	//cout << units << " " << tens << " " << hundreds << " " << thousands << " " << endl;
	ans = units + 0.1 * tens + 0.01 * hundreds + 0.001 * thousands;
	cout << ans << endl;
	return 0;
}