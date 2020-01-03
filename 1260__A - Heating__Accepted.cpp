/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-30-19.53                 #
              #  Code submitted  :   2019-11-30-19.58                #
              #                                                      #
              ########################################################
*/
#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
#define pb      push_back
#define sqr(a) (a)*(a)
#define F       first
#define S       second
#define TC      int t;scanf("%d",&t);while(t--)
#define pii     pair<int,int>
#define d(x)    cerr<<#x<<" = "<<x
const int mx=1e6+10;
ll m,n,i,j,a,b;
int main()
{
    TC{
        cin>>a>>b;
        ll ans=b/a;
        ll r=b%a;
       ans=r*sqr( ans+1 )+(a-r)* sqr(ans);
       cout<<ans<<endl;
    }
}