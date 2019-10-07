#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5001],b[4][5001],n,w,one=0,two=0,three=0,cnt=0,c=0,d=0,v=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {

            one++;
            b[0][c]=i+1;
            c++;
        }
        if(a[i]==2)
        {
            two++;
            b[1][d]=i+1;
            d++;
        }
        if(a[i]==3)
        {
            three++;
            b[2][v]=i+1;
            v++;
        }
    }
    w=min(one,two);
    w=min(w,three);
    cout<<w<<endl;
    one=0,two=0,three=0;
    for(int j=0; j<w; j++)
    {
        cout<<b[0][j]<<" "<<b[1][j]<<" "<<b[2][j]<<endl;
    }


    return 0;
}