#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int n, b, d, a;
	int sum = 0, cnt = 0;
	cin >> n >> b >> d;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a <= b) {
			sum += a;
			if (sum > d) {
				cnt++;
				sum = 0;
			}
		}
	}
	cout << cnt;
	return 0;
}