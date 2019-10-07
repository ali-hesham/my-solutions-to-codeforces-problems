#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string s, s1 = "opqrstuvwxyzabcdefghijklmn";
	int cnt = 0, y = 0;
	char x = 'a';
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		y = s[i] - x;

		if (y > 13) {
			y = 26 - y;
		} else if (y < 0) {
			if (y > -13) {
				y = abs(y);

			} else
				y = y + 26;

		}
		x = s[i];
		cnt = cnt + y;
	}
	cout << cnt << endl;
	return 0;
}