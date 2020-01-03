/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-27-13.49                 #
              #  Code submitted  :                   #
              #                                                      #
              ########################################################
*/
using namespace std;
#include<bits/stdc++.h>
#define Fast_read       ios_base::sync_with_stdio(false);
#define PI              3.1415926535897932384626433832795l
#define Ignore          cin.ignore();
#define out(n)          cout<<n<<endl;
#define mem(n,i)        memset(n,i,sizeof n);
#define square(n)       (n*n)
#define cube(n)         (n*n*n)
#define F               first
#define S               second
#define mxin            -INFINITY
#define mnin            INFINITY
#define d(x) cerr<<#x<<" = "<<x
#define el              <<endl
#define MAXC 1000
//#define N 1000000
using namespace std;

/*------------------------------DIR_ARRAY----------------------------*/
//const int dx[]={+1,-1,+0,+0};
//const int dy[]={+0,+0,+1,-1};
//const int dx[]={+0,+0,+1,-1,-1,+1,-1,+1};
//const int dy[]={-1,+1,+0,+0,+1,+1,-1,-1};
//const int dx[]={-2, -2, -1, -1,  1,  1,  2,  2};
//const int dy[]={-1,  1, -2,  2, -2,  2, -1,  1};
/*---------------------------------------------------------------------*/
//ll gcd(ll a,ll b){while(b){ll x=a%b;a=b;b=x;}return a;}
//ll lcm(ll a,ll b){return a/__gcd(a,b)*b;}
typedef long long int ll;
const int Max = 1e8 + 10;
typedef pair <ll, ll> pll;
const int MOD = 1e9 + 7;
int main(){
    ll t,n,a,b,mn,mx;
    scanf("%lld",&t);
    while(t-- && scanf("%lld",&n)){
            mn=-1 , mx=1e9+10;
        while(n--){
            scanf("%lld %lld",&a,&b);
            mn=max(a,mn), mx=min(b,mx);
        }
        printf("%lld\n",(mx>=mn)?0:abs(mn-mx));
    }

}