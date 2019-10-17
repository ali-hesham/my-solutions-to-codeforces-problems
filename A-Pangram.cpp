#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;
    int alph[26] = { 0 };
    string str;
    cin >> n;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        str[i]=tolower(str[i]);

        alph[str[i] - 97] = 1;
    }
    for(int i=0; i<26; i++)
    {
        if(alph[i]==1)
            cnt++;
    }
    if (cnt==26)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
