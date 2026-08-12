#include<iostream>
#include<string>
using namespace std;
int nums[26];
bool isPrime(int n)
{
	if (n <= 1) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false; 
	for (int i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int main() {
	string s;
	cin >> s;
	for (auto it : s) {
		int index = int(it) - 97;
		nums[index]++;
	}
	int maxx = 0, minn = 100;
	for (int i = 0; i < 26; i++) {
		if (nums[i] > maxx)maxx = nums[i];
		if (nums[i]!=0 && nums[i] < minn)minn = nums[i];
	}
	int word = maxx - minn;
	if (isPrime(word)) {
		cout << "Lucky Word" << endl;
		cout << word << endl;
	}
	else {
		cout << "No Answer" << endl;
		cout << 0 << endl;
	}
	return 0;
}