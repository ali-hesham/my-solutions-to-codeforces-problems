#include <bits/stdc++.h>
using namespace std;

const int sze=100001;
long long a[sze]= {0};
int main()
{
    int n,cnt=0;;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        if(a[i]>a[0]&&a[i]<a[n-1])
            cnt++;

    }
    cout<<cnt;
}