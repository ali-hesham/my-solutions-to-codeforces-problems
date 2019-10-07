#include <iostream>
#include<string>
using namespace std;

int main() {

	int n,countA=0,countD=0;
	string s;
	cin>>n;
	startingpoint:
	cin>>s;

	for(int i=0;i<s.length();i++){
			if(s[i]>='a'&& s[i]<='z')
				goto startingpoint;
		}

	for(int i=0;i<s.length();i++){
		if(s[i]=='A'){
			countA++;
		}
		else if(s[i]=='D'){
			countD++;
		}
	}
	if(countA>countD)
		cout<<"Anton"<<endl;
	else if (countA<countD)
		cout<<"Danik"<<endl;
	else if (countA==countD)
		cout<<"Friendship"<<endl;
	return 0;
}