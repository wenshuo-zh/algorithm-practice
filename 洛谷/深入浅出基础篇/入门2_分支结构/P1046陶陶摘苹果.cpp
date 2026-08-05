#include<iostream>
using namespace std;

const int N = 15;
int nums[N];

int main(){
	int count = 0;
	for (int i = 1; i <= 10; i++) cin >> nums[i];
	int n;
	cin >> n;
	for (int i = 1; i <= 10; i++) {
		if (nums[i] <= (n + 30)) count++;
	}
	cout << count << endl;
	return 0;
}