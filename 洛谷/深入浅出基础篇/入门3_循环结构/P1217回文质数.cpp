//直接暴力遍历会超时，要先生成出回文再判断是否为质数
#include<iostream>
using namespace std;

bool isPrime(int n) {
	//判断质数优化：O(n^-1)
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

//bool isPalindrome(int n) {
//	int num = 0;
//	int temp = n;
//	while (temp != 0)	{
//		temp = temp / 10;
//		num++;
//	}
//	temp = n;
//	int arr[10];
//	for (int i = 1; i <= num; i++) {
//		arr[i] = temp % 10;
//		temp = temp / 10;
//	}
//	for (int i = 1; i <= num; i++) {
//		if (arr[i] != arr[num - i + 1]) return false;
//
//	}
//	return true;
//}

const int N = 1e4 + 10;
int ans[N];

int main() {
	int a, b;
	cin >> a >> b;
	int index = 0;

	//1位 2位 2 3 5 7 11
	if (a == 5) cout << 5 << endl;
	if (a <= 7)cout << 7 << endl;
	if (a <= 11)cout << 11 << endl;

	//因为偶数位回文数都不是质数（都能被11整除）
	//3位回文数
	for (int d1 = 1; d1 <= 9; d1 += 2) {
		for (int d2 = 0; d2 <= 9; d2++) {
			int temp = 100 * d1 + 10 * d2 + d1;
			if (temp >= a && temp <= b && isPrime(temp)) {
				ans[index] = temp;
				index++;
			}
		}
	}
	//5位回文数
	for (int d1 = 1; d1 <= 9; d1 += 2) {    // 只有奇数才会是素数
		for (int d2 = 0; d2 <= 9; d2++) {
			for (int d3 = 0; d3 <= 9; d3++) {
				int temp = 10000 * d1 + 1000 * d2 + 100 * d3 + 10 * d2 + d1;//(处理回文数...)
				if (temp >= a && temp <= b && isPrime(temp)) {
					ans[index] = temp;
					index++;
				}
				
			}
		}
	}
	//7位回文数
	for (int d1 = 1; d1 <= 9; d1 += 2) {
		for (int d2 = 0; d2 <= 9; d2++) {
			for (int d3 = 0; d3 <= 9; d3++) {
				for (int d4 = 0; d4 <= 9; d4++) {
					int temp = 1e6 * d1 + 1e5 * d2 + 1e4 * d3 + 1e3 * d4 + 1e2 * d3 + 1e1 * d2 + d1;
					if (temp >= a && temp <= b && isPrime(temp)) {
						ans[index] = temp;
						index++;
					}
				}
			}
		}
	}

	for (int i = 0; i < index; i++) {
		cout << ans[i] << endl;
	}
	return 0;
}
