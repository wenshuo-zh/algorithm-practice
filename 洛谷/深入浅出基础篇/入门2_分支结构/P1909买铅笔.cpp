#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int pencilNums[4];
	int pencilPrice[4];
	int n;
	int price = 999999999;
	cin >> n;
	for (int i = 1; i <= 3; i++) {
		cin >> pencilNums[i] >> pencilPrice[i];
		if (ceil(1.0 * n / pencilNums[i]) * pencilPrice[i] < price)price = ceil(1.0 * n / pencilNums[i]) * pencilPrice[i];	
	}
	cout << price;
	return 0;
}