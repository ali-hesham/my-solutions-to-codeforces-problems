#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1="qwertyuiop",str2="asdfghjkl;",str3="zxcvbnm,./";
    string s,s1;
    cin>>s>>s1;

    for(int i=0; i<s1.length(); i++)
    {
        for(int j=0; j<10; j++)
        {
            if(s1[i]==str1[j])
            {
                if(s=="R")
                    cout<<str1[j-1];
                else
                    cout<<str1[j+1];
            }

            if(s1[i]==str2[j])
            {
                if(s=="R")
                    cout<<str2[j-1];
                else
                    cout<<str2[j+1];
            }

            if(s1[i]==str3[j])
            {
                if(s=="R")
                    cout<<str3[j-1];
                else
                    cout<<str3[j+1];
            }
        }
    }
}
