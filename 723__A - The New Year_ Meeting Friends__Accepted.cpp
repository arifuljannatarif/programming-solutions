#include<bits/stdc++.h>
using namespace std;
int main()
{
      int sum=0;
     vector<int>a(3,0);
     cin>>a[0]>>a[1]>>a[2];
     sort(a.begin(),a.end());
      sum+=(a[1]-a[0]);

      sum+=(a[2]-a[1]);
    cout<<sum;

      return 0;
}