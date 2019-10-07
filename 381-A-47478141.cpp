#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int arr[1000], cnt1 = 0, cnt2 = 0, n, enable = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int k = 0, j = 0;
	for (int i = 0; i <= n; i++) {
		if (arr[j] > arr[n - 1 - k]) {
			if (enable == 0) {
				cnt1 = cnt1 + arr[j];
				enable = 1;
				j++;
				continue;
			} else if (enable == 1) {
				cnt2 += arr[j];
				enable = 0;
				j++;
				continue;
			}
		} else if (arr[j] < arr[n - 1 - k]) {
			if (enable == 0) {
				cnt1 = cnt1 + arr[n - 1 - k];
				enable = 1;
				k++;
				continue;
			} else if (enable == 1) {
				cnt2 += arr[n - 1 - k];
				enable = 0;
				k++;
				continue;
			}
		} else if (arr[j] == arr[n - 1 - k]) {
			if (enable == 0) {
				cnt1 += arr[j];
				break;
			} else
				cnt2 += arr[j];
			break;
		}
	}
	cout << cnt1 << " " << cnt2 << endl;
	return 0;
}