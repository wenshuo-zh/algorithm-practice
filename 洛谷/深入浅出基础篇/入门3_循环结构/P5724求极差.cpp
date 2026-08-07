#include<iostream>
using namespace std;

const int N = 110;
int nums[N];

int main() {
	int n;
	cin >> n;
	int min = 1001, max = 0;
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
		if (nums[i] > max)max = nums[i];
		if (nums[i] < min)min = nums[i];
	}
	cout << max - min << endl;
	return 0;
}