#include <bits/stdc++.h>
using namespace std;

const int sze=100001;
int a[sze]={0};
int main()
{
    int n,x,y;
    cin>>n;
    y=n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ++a[x];
        while(a[y]==1)
        {
            cout<<y<<" ";
            y--;
        }
        cout<<endl;
    }
}