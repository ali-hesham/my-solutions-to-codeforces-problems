#include <bits/stdc++.h>
using namespace std;
int a[100],b[100];
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    b[a[i]-1]=i+1;
  }
  for(int i=0;i<n;i++)
  {
      cout<<b[i]<<" ";
  }
}