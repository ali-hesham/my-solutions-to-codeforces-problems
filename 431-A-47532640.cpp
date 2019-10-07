#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	double a[4];
	int cnt = 0;
	string s;

	for (int i = 0; i < 4; i++) {
		cin >> a[i];
	}
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '1') {
			cnt = cnt + a[0];

		} else if (s[i] == '2') {
			cnt = cnt + a[1];

		} else if (s[i] == '3') {
			cnt = cnt + a[2];

		} else if (s[i] == '4') {
			cnt = cnt + a[3];

		}
	}
	cout << cnt << endl;
	return 0;
}