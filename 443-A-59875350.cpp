#include <iostream>
#include <set>
using namespace std;

int main() {
	string str, s = " ";
	getline(cin,str);
	set<char> se;

	for (int i = 0; i < str.length(); i++) {
		if (!(str[i] == '{' || str[i] == '}' || str[i] == ',' || str[i] == ' '))
			se.insert(str[i]);
	}
	cout << se.size() << endl;
	return 0;
}