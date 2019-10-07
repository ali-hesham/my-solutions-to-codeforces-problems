#include <iostream>
using namespace std;

int main() {
	int n, f = 0;
	long long x;
	string d;
	long long d2;
	cin >> n >> x;
	for(int i=0;i<n;i++){
		cin>>d;
		cin>>d2;
		if(d=="+"){
			x+=d2;
		}else{
			if(x>=d2){
				x-=d2;
			}else
				f++;
		}
	}
	cout<<x<<" "<<f<<endl;
return 0;
}