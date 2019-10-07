#include<iostream>
using namespace std;

int main() {
	int k, r, cnt = 0;
	cin >> k >> r;
	if (k == r) {
		cout << k / r << endl;
		return 0;

	} else if (r > k && (r % k) == 0) {
		cout << r / k;
		return 0;
	}
	for (int i = 1; i <= 1000; i++) {

		if ((k * i) % 10 == 0) {
			cnt = i;
			cout << cnt << endl;
			break;
		} else if (((k * i) - r) % 10 == 0) {
			cnt = i;
			cout << cnt << endl;
			break;
		}

	}

	return 0;
}