/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-20-20.06                 #
              #  Code submitted  :  2019-11-20-20.18                 #
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
#define TC int t;scanf("%d",&t);while(t--)
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
const int mx = 1e6 + 5;
typedef pair <ll, ll> pll;
typedef pair <int, int> pii;
const int MOD = 1e9 + 7;
ll n,m,a,b,i,j,sum;
int main()
{
    TC
    {
        vector<pll> ans;sum=0;
        scanf("%lld %lld",&n,&m);
        for(i=0; i<n; i++)
            scanf("%lld",&a),sum+=2*a;

        if(m<n || n<3)
        {
            puts("-1");
            continue;
        }
        printf("%lld\n",sum),i=0;
         while(++i<n)
            printf("%lld %lld\n",i,i+1);
            printf("%lld %lld\n",n,1);
    }
}