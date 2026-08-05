#include<iostream>
#include<string>
using namespace std;

//返回一个数里有多少个目标数10100
int count(int n, int x) {
	string s = to_string(n);
	int ans = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == (x + '0'))ans++;
	}
	return ans;
}

int main() {
	int n, x;
	cin >> n>>x;
	int ans = 0;
	for (int i = n; i >= 1 ; i--) {
		ans += count(i, x);
	}
	cout << ans << endl;
	return 0;
}