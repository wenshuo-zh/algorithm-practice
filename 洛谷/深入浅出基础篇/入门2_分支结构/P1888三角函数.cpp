#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	while (b != 0)
	{
		int rem = a % b; 
		a = b;
		b = rem;
	}
	return a;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	//a>b>c
	if (a < b)swap(a, b);
	if (a < c)swap(a, c);
	if (b < c)swap(b, c);
	//c/a
	int g = gcd(a, c);
	cout << c / g << "/" << a / g << endl;
	return 0;
}