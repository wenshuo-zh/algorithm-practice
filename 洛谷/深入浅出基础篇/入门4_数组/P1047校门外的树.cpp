#include<iostream>
using namespace std;
int main() {
	int l, m;
	cin >> l >> m;
	bool isRemove[10010] = { false };
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		for (int j = u; j <= v; j++) isRemove[j] = true;
	}
	int ans = 0;
	for (int i = 0; i <= l; i++) {
		if (!isRemove[i])ans++;
	}
	cout << ans;
	return 0;
}