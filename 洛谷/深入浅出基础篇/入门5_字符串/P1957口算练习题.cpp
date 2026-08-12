#include<iostream>
#include<string>
using namespace std;

char op[55];
int x[55], y[55];
char last_op;


void compute(char op, int num1, int num2) {
	int ans;
	if (op == 'a') {
		ans = num1 + num2;
		cout << num1 << "+" << num2 << "=" << ans << endl;
		string expr = to_string(num1) + "+" + to_string(num2) + "=" + to_string(ans);
		cout << expr.length() << endl;
	}
	else if (op == 'b') {
		ans = num1 - num2;
		cout << num1 << "-" << num2 << "=" << ans << endl;
		string expr = to_string(num1) + "-" + to_string(num2) + "=" + to_string(ans);
		cout << expr.length() << endl;
	}
	else if (op == 'c') {
		ans = num1 * num2;
		cout << num1 << "*" << num2 << "=" << ans << endl;
		string expr = to_string(num1) + "*" + to_string(num2) + "=" + to_string(ans);
		cout << expr.length() << endl;
	}
	last_op = op;
}

int main() {
	int n;
	cin >> n;

	for (int k = 1; k <= n; k++) {
		string s;
		cin >> s;
		if (s == "a" || s == "b" || s == "c") {
			op[k] = s[0];
			cin >> x[k] >> y[k];
		}
		else {
			
			op[k] = 0; 
			x[k] = stoi(s);
			cin >> y[k];
		}
	}

	for (int j = 1; j <= n; j++) {
		if (op[j] == 0) {
			op[j] = last_op;
		}
		compute(op[j], x[j], y[j]);
	}
	return 0;
}
