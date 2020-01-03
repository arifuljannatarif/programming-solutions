#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    int i,a,n;
  cin>>n;
  if(n>=5)
  {
      a=n/5;
      if((5*a)!=n)
        a++;
      cout<<a<<endl;
  }
  else
    cout<<"1\n";
    return 0;
}