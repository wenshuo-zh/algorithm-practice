#include<iostream>
using namespace std;

const int N = 30;
bool isCut[N][N][N] = {false};

int main() {
	int w, x, h;
	cin >> w >> x >> h;
	int q;
	cin >> q;
	int x1, y1, z1, x2, y2, z2;
	for (int i = 0; i < q; i++) {
		cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
		for (int m = x1; m <= x2; m++) {
			for (int y = y1; y <= y2; y++) {
				for (int z = z1; z <= z2; z++) {
					isCut[m][y][z] = true;
				}
			}
		}
	}
	int ans = 0;
	for (int i = 1; i <= w; i++) {
		for (int j = 1; j <= x; j++) {
			for (int k = 1; k <= h; k++) {
				if (!isCut[i][j][k])ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}