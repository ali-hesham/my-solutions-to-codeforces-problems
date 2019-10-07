#include<iostream>
using namespace std;

int main() {
	string s , t;
	int p=0;
	cin>>s;
	cin>>t;
	for(int i=0;i<t.length();i++){
		if(s[p]==t[i])
			p++;
	}
	cout<<p+1<<endl;
	return 0;
}