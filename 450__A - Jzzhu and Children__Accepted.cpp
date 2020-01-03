#include <bits/stdc++.h>
#define ll long long ll
#define f0(i,n) for (ll i = 0 ; i < n ; i++)
#define f1(i,n) for (ll i = 1 ; i <= n ; i++)
#define AIDS ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pp pop_back
#define sz(a) a.size()
#define all(x) x.begin() , x.end()
#define f first
#define s second
#define mp make_pair
#define ld long double
#define ll long long
#define pii pair<ll, ll>
#define in insert



const ll N = 1e6 + 3;
const ll INF = 1e18 + 100;
const ll inf = 1e9 + 100;
const ll MOD = 1e9 + 7;
using namespace std;
int main()
{
   AIDS;
    ll n,m,x;
    cin>>n>>m;
    deque<ll>line;
    deque<ll>child;
    f1(i,n)
    cin>>x,line.pb(x),child.pb(i);
    while(sz(line)!=0)
    {
        int frnt=line.front();
        int cld=child.front();
        if(sz(line)==1)
            return !printf("%d\n",child.front());
        if(m>=frnt)
        {
            line.pop_front();
            child.pop_front();
        }
        else
        {
            line.pop_front();
            child.pb(child.front());
            child.pop_front();
            line.pb(frnt-m);
        }
    }


}