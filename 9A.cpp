#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int getMax(int y, int w) {
	if (y >= w)
		return y;
	else
		return w;
}
int main() {

	int a[] = { 1, 2, 3, 4, 5, 6 };
	int y, w, cnt = 0;
	cin >> y >> w;
	for (int i = 0; i < 6; i++) {
		if (a[i] >= getMax(y, w))
			cnt++;
	}
	int d = cnt / 6;

	if (cnt== 1) {
		cout << "1/6";
	} else if (cnt== 3) {
		cout << "1/2";
	} else if (cnt==2) {
		cout << "1/3";
	} else if (cnt== 4) {
		cout << "2/3";
	} else if (cnt== 5) {
		cout << "5/6";
	} else if (cnt==6) {
		cout << "1/1";
	}

	return 0;

}
