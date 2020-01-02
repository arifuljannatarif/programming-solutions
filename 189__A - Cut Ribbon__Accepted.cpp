#include<bits/stdc++.h>
using namespace std;
int mx=0,n,a,b,c;
int dp[4005];
int cut(int n){
    if(n==0) return 0;
    if(n<0)return -INT_MAX;
    int &x=dp[n];
    if(x!=-1)return x;
    x=max(1+cut(n-a),max(1+cut(n-b),1+cut(n-c)));
    return x;
}
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie();
     cout.tie();
 vector<int>ar(4);
     cin>>n>>ar[0]>>ar[1]>>ar[2];
    sort(ar.rbegin(),ar.rend());
    a=ar[0],b=ar[1],c=ar[2];
    memset(dp,-1,sizeof(dp));
    cout<<cut(n)<<endl;

}