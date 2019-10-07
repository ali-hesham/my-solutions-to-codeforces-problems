#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double n, m, a;

	cin >> n >> m >> a;

	double x = n / a;
	double y = m / a;

	x = ceil(x);

	y = ceil(y);

	cout << (long long)(x * y);

	return 0;
}