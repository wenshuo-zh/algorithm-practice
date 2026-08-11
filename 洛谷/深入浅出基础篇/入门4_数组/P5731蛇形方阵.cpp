#include<iostream>
#include<cstdio>
using namespace std;
int arr[10][10];
int main() {
	int n;
	cin >> n;
	int val = 1;
	int top = 1, bottom = n, left = 1, right = n;
	while (val <= n * n) {
			for (int i = left; i <= right; i++) {
				arr[top][i] = val;
				val++;
			}
			top++;
			for (int i = top; i <= bottom; i++) {
				arr[i][right] = val;
				val++;
			}
			right--;
			for (int i = right; i >= left; i--) {
				arr[bottom][i] = val;
				val++;
			}
			bottom--;		
			for (int i = bottom; i >=top; i--) {
				arr[i][left] = val;
				val++;
			}
			left++;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%3d", arr[i][j]);
		}
		cout << endl;
	}
	return 0;
}