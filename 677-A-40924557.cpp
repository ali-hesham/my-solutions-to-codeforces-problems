#include <iostream>
#include<string>
using namespace std;

int main() {

	int w = 0, hF, hFr[1000], n;

	cin >> n >> hF;

	for(int i =0;i<n;i++){
		prostartingpoint:
		cin>>hFr[i];
		if(hFr[i]==0){
			goto prostartingpoint;
		}
	}
	for (int i = 0; i < n; i++) {
		w++;
		if (hFr[i] > hF) {
			w++;
		}

	}

	cout << w << endl;
	return 0;
}