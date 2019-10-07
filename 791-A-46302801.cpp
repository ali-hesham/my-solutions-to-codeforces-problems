#include <iostream>
#include<string>
using namespace std;

int main() {
	int a, b, y = 0;

	cin >> a >> b;
	if (a == 0) {
		cin >> a;
		if (b == 0) {
			cin >> b;
		}

	}
	while (a <= b) {

		a = a * 3;
		b = b * 2;
		y++;
	}
	cout << y << endl;
	return 0;
}