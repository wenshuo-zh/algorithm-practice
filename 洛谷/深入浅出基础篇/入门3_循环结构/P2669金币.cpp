#include<iostream>
using namespace std;
int main() {
	int k;
	cin >> k;
	int ans = 0;
	int day = 1;
	int count = 1;
	for (int i = 1; i <= k;i++) {		
		//cout << day << " " << count << endl;
		ans += day;
		if (count == day) {
			day++;
			count = 0;
		}
		count++;
		
	}
	cout << ans << endl;
	return 0; 
}