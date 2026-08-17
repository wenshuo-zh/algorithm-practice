#include<iostream>
using namespace std;
int main() {
	string star, team;
	cin >> star >> team;
	int star_n = 1, team_n = 1;
	for (auto it : star) {
		star_n = star_n * ((int)it - 64) % 47;
	}
	star_n = star_n % 47;
	for (auto it : team) {
		team_n = team_n * ((int)it - 64) % 47;
	}
	team_n = team_n % 47;
	if (team_n == star_n)cout << "GO" << endl;
	else cout << "STAY" << endl;
}