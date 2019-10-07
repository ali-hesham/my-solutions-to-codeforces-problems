#include <bits/stdc++.h>
using namespace std;
const int SIZE = 100001;
long long a[SIZE];
int main()
{
    int n,mx=0,mn=999;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(i!=n-1&&i!=0)
        {
            mx=max(abs(a[i]-a[0]),abs(a[i]-a[n-1]));
            mn=min(abs(a[i]-a[i+1]),abs(a[i]-a[i-1]));
            cout<<mn<<" "<<mx<<endl;
        }
        else if(i==0)
        {
            mx=max(abs(a[i]-a[0]),abs(a[i]-a[n-1]));
            mn=abs(a[i]-a[i+1]);
            cout<<mn<<" "<<mx<<endl;
        }
        else if(i==n-1)
        {
            mx=max(abs(a[i]-a[0]),abs(a[i]-a[n-1]));
            mn=abs(a[i]-a[i-1]);
            cout<<mn<<" "<<mx<<endl;
        }
    }
}