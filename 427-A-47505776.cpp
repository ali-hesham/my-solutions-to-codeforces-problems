#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main() {
int n,PO=0,UT=0,a[100000];
cin>>n;
for(int i=0;i<n;i++){
	cin>>a[i];
}
for(int i=0;i<n;i++){
	if(a[i]<0){
		if(PO>0){
		UT++;
		UT--;
		PO--;
		}else {
			UT++;
		}
	}else if(a[i]>0){
		PO=PO+a[i];
	}
}
cout<<UT<<endl;
	return 0;
}