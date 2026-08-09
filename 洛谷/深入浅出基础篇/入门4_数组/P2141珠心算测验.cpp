#include<iostream>
using namespace std;
int nums[110];
bool isAdd[20010] = { false };
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			isAdd[nums[i] + nums[j]] = true;
		}
	}
	for (int i = 0; i < n; i++) {
		if (isAdd[nums[i]])ans++;
	}
	cout << ans;
}