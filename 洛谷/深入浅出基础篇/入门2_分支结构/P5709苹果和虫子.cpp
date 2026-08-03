#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int	m, t, s;
	cin >> m >> t >> s;
	int eat = ceil(1.0 * s / t);
	if (m - eat <= 0)cout << 0 << endl;
	else cout << m - eat << endl;
	return 0;
}