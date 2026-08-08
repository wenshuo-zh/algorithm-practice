#include<iostream>
#include<stack>
using namespace std;
int main() {
	int n;
	cin >> n;
	stack<int>stk;
	while (1) {
		stk.push(n);
		if (n == 1)break;
		if (n % 2 != 0)n = n * 3 + 1;
		else n /= 2;
	}
	const int s = stk.size();
	for (int i = 0; i < s; i++) {
		cout << stk.top() << " ";
		stk.pop();
	}
	return 0;
}