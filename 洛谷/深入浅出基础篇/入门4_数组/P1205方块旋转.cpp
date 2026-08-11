#include<iostream>
using namespace std;
char arr[15][15],arr2[15][15];

void changeArr(char a[15][15],int n) {
	char tmp[15][15];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			tmp[j][n - i + 1] = a[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			a[i][j] = tmp[i][j];
		}
	}
}
void changeArr2(char a[15][15], int n) {
	char tmp[15][15];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			tmp[i][n - j + 1] = a[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			a[i][j] = tmp[i][j];
		}
	}
}
bool isSame(char a1[][15], char a2[][15],int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a1[i][j] != a2[i][j])return false;
		}
	}
	return true;
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr2[i][j];
		}
	}
	//90
	changeArr(arr, n);
	if (isSame(arr, arr2, n)) {
		cout << 1;
		return 0;
	}
	//180
	changeArr(arr, n);
	if (isSame(arr, arr2, n)) {
		cout << 2;
		return 0;
	}
	//270
	changeArr(arr, n);
	if (isSame(arr, arr2, n)) {
		cout << 3;
		return 0;
	}
	//不变
	changeArr(arr, n);
	if (isSame(arr, arr2, n)) {
		cout << 6;
		return 0;
	}
	//翻转
	changeArr2(arr, n);
	if (isSame(arr, arr2, n)) {
		cout << 4;
		return 0;
	}
	//组合
	for (int i = 0; i < 3; i++) {
		changeArr(arr, n);
		if (isSame(arr, arr2, n)) {
			cout << 5;
			return 0;
		}
	}
	cout << 7;
	return 0;
}