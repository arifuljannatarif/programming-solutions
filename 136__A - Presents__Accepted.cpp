/********   All Required Header Files ********/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n;
    cin>>n;
    int ar[n+5];
    for(int i=1;i<=n;i++)
    {
        int z;
        cin>>z;
        ar[z]=i;
    }
 for(int i=1;i<=n;i++)
  {
      if(i==n)cout<<ar[i]<<endl;
      else cout<<ar[i]<<" ";
  }
    return 0;
}