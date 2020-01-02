/********   All Required Header Files ********/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
#define open freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ev(n) n%2==0
#define tcase(t)  ll t;cin>>t;while(t--)
#define ll long long int
#define ull unsigned long long
#define ld long double
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define abs(x) ((x)<0?-(x):(x))
#define sci1(n) scanf("%d",&n)
#define scd1(n) scanf("%lf",&n)
#define scd2(n,i) scanf("lf",&n,&i)
#define sci2(n,i) scanf("%d %d",&n,&i)
#define scl1(n) scanf("%lld",&n)
#define scl2(n,i) scanf("%lld %lld",&n,&i)
#define scu1(n) scanf("%llu",&n)
#define scu2(n,i) scanf("%llu %llu",&n,&i)
#define sd(n) scanf("%lf",&n)
#define scs(n) scanf("%s",n)
#define el printf("\n")
#define f0(i,n) for(ll i=0;i<(n);i++)
#define rf0(i,n) for(ll i=n-1;i>=0;i--)
#define rf1(i,n) for(ll i=n;i>0;i--)
#define f1(i,n) for(ll i=1;i<=(n);i++)
#define f(i,a,b) for(ll i=(a);i<(b);i++)
#define see(x) cout<<"\n"<<#x<<" = "<<(x)<<"\n";
#define putt(aray,b) memset(aaray,b,sizeof(aray))
#define distance(x1,x2,y1,y2) sqrt(((x2-x1)*(x2-x1))-((y2-y1)*(y2-y1)))
#define imax 1000001
#define lmax 18446744073709551615
int main()
{
    ll n,mni=0,mxi=0,mx,mn;
    cin>>n;
    ll x[n+1];
    for( ll i=0;i<n;i++)
    {
        cin>>x[i];
        if(i==0){
                mx=x[i];
                mn=x[i];
                mxi=i;
        }
        if(x[i]>mx)mx=x[i],mxi=i;
        else if(x[i]<=mn)mn=x[i],mni=i;
    }

    ll sec=(mxi+(n-1-mni));
    if(mxi>=mni)sec--;
    cout<<sec<<endl;

    return 0;
}