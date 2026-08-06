#include<iostream>
using namespace std;

bool isPrime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
			break;
		}
	}
	return true;
}

const int N = 1e5 + 10;
int ans[N];

int main() {
	int l;
	cin >> l;
	int count = 0;
	int sum = 0;
	for (int i = 2; i <= N; i++) {
		
		if (isPrime(i)) {
			ans[count] = i;
			sum += ans[count];
			count++;
		}
		if (sum > l) {
			//sum -= ans[count - 1];
			count--;
			break;
		}
	}
	for (int i = 0; i < count; i++) {
		cout << ans[i] << endl;
	}
	cout << count << endl;
	return 0;
}