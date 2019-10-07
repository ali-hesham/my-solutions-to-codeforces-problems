#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    if(a==b)
        cout<<"-1";
    else
    {
        if(a.length()>b.length())
            cout<<a.length();
        else
            cout<<b.length();
    }
}