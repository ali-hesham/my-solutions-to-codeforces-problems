#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x=0;
    cin>>n>>k;
    x=n-k;
    string str="";
    char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    if(x!=0)
    {
        for(int i=0; i<k; i++)
        {
            str+=letters[i];
        }
        int cnt=0;
        int m= 0;
        while(m!=n)
        {
            cout<<str[cnt];
            cnt++;
            m++;
            if(cnt==k)
                cnt=0;
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            cout<<letters[i];
        }
    }
    return 0;
}