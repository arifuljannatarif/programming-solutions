#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    int n,i,sum=0;
    vector<int>x;
    int x1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x1;
        sum+=x1;
        x.push_back(x1);
    }
    int c=0,sum1=0;
     sort(x.begin(),x.end(),greater<int>());
     for(i=0;;i++)
     {
         sum1+=x[i];
         c++;
         if(sum1>(sum/2))
         {
             cout<<c<<endl;
             break;
         }
     }
     return 0;

}