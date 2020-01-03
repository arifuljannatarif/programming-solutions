/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-22-01.02                 #
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
const int Max = 1e5+10;
typedef pair <ll, ll> pll;
const int MOD = 1e9 + 7;
#define visited -11
vector< pair<int,int> >graph[Max];
int n,a,b,c,i,root;
int main(){
    scanf("%d",&n);
    int cnt[n+5];
   int vis[n+5];
    set<int>st;
    memset(cnt,0,sizeof cnt);
        for(i=0;i<n-2;i++){
        scanf("%d %d %d",&a,&b,&c);
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
        graph[c].push_back({a,b});
        st.insert(a),st.insert(b),st.insert(c);
        cnt[a]++,cnt[b]++,cnt[c]++;
        }
        for(auto it:st)if(cnt[it]==1){root=it;break;}
        queue<int>q;
        q.push(root);
        while(q.size()>0){
         root=q.front(),q.pop();
           if(vis[root]==visited){continue;}
           vis[root]=visited;
           printf("%d ",root);
           for(auto it:graph[root]){
                if(cnt[it.F]>cnt[it.S])swap(it.F,it.S);
                q.push(it.F);
                q.push(it.S);
           }
        }


}