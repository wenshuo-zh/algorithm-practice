#include<iostream>
#include<stack>
using namespace std;
int main() {
	int a;
	stack<int>stk;
	while (1) {
		cin >> a;
		if (a == 0)break;
		else stk.push(a);
	}
	const int n = stk.size();
	for (int i = 0; i < n; i++) {
		cout << stk.top() << " ";
		stk.pop();
	}
	return 0;
}