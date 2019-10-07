#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int m[100000], g = 1, n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m[i];
	}
	for (int i = 0; i < n-1 ; i++) {
		if (m[i] != m[i + 1])
			g++;
	}
	cout << g << endl;
	return 0;
}