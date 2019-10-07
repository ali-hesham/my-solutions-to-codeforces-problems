#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int a[100],b[100],cnt=0,n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]==b[j])
				cnt++;

		}
	}
	cout<<cnt<<endl;
	return 0;
}