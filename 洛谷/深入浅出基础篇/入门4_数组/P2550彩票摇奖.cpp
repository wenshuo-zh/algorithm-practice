#include<iostream>
#include<unordered_set>
using namespace std;
int main() {
	int n, a;
	cin >> n;
	unordered_set<int>set;
	int ans[10] = { 0 };
	for (int i = 0; i < 7; i++) {
		cin >> a;
		set.insert(a);
	}
	for (int j = 0; j < n; j++) {
		int temp, count = 0;
		for (int i = 0; i < 7; i++) {
			cin >> temp;
			if (set.count(temp))count++;
		}
		ans[count]++;
	}
	for (int i = 7; i >0; i--)cout << ans[i] << " ";
	return 0;
}