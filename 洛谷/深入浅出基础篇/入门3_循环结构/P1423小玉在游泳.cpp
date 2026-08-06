#include<iostream>
using namespace std;
int main() {
	double s;
	cin >> s;
	double lastStep = 2;
	int stepCount = 0;
	double sum = 0;
	while (1) {
		/*cout <<"sum" << sum << endl;
		cout << "count" << stepCount << endl;*/
		if (s <= 2) {
			stepCount = 1;
			break;
		}
		if (sum >= s)break;
		sum += lastStep;
		lastStep = 0.98 * lastStep;
		stepCount++;
	}
	cout << stepCount << endl;
	return 0;
}