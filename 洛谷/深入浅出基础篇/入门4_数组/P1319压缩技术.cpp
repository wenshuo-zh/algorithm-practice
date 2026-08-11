#include<iostream>
using namespace std;
int main() {
	int arr[210][210];
	int n;
	cin >> n;
	int temp;
	cin >> temp;
	bool input1or0 = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (temp <= 0) {
				cin >> temp;
				input1or0 = !input1or0;
			}
				arr[i][j] = (int)input1or0;
				temp--;	
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}
	
	return 0;
}