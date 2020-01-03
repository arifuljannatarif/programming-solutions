#include<iostream>
#include<map>
using namespace std;
int a[200008];
map<int,int>dp;
int maxx=0;
int main()
{
    int n,p;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        dp[a[i]]=dp[a[i]-1]+1;
        if(dp[a[i]]>maxx){maxx=dp[a[i]];p=a[i];}
    }
    cout<<maxx<<endl;
    int t=p-maxx+1;
    for(int i=1;i<=n;i++){
        if(a[i]==t){cout<<i<<" ";t++;}
    }
}