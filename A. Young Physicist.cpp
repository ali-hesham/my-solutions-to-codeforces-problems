#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,a[110][110]= {0};
    long long x=0,y=0,z=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        x+=a[i][0];
        y+=a[i][1];
        z+=a[i][2];
    }
    if(x==0&&y==0&&z==0)
        cout<<"YES";
    else
        cout<<"NO";
}
