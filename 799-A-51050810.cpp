#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {

	int n, t, k, d;
	cin >> n >> t >> k >> d;
	int o1 = 0, o2 = d;
	int x = (n + k - 1) / k;
	for(int i=0;i<x;i++)
	{
		if (o1 <= o2)
				o1 += t;
			else
				o2 += t;
	}
	if (max(o1, o2) < x * t)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}