#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string s = " ";
	int count0 = 0, count1 = 0;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (islower(s[i]))
			count0++;
		else
			count1++;
	}
	if (count0 >= count1) {
		for (int i = 0; i < s.length(); i++) {

			s[i] = tolower(s[i]);
		}
	} else if (count0 < count1)
		for (int i = 0; i < s.length(); i++) {

			s[i] = toupper(s[i]);
		}
	cout<<s<<endl;

	return 0;
}