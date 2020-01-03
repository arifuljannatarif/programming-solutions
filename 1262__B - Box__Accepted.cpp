/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-26-18.41                 #
              #  Code submitted  :  2019-11-26-19.20                 #
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
#define sc              scanf
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
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        map<int,int>mp;
        scanf("%d",&n);
        int A[n+5],mn=1,mx=0,f=0;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&A[i]);
            if( mx=max(A[i],mx) && !f && mp[A[i]])
            {
                f=A[i]<mn;
                if(mp[mn])while(mp[++mn]);
                 f=mn>A[i];
                 A[i]=mn;
            }
            mp[A[i]]=1;
        }
        if(f)
            printf("-1\n");
        else
            for(int i=1; i<=n; i++)
                printf("%d ",A[i]);
    }
}/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-26-18.41                 #
              #  Code submitted  :  2019-11-26-19.20                 #
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
#define sc              scanf
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
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        map<int,int>mp;
        mp.clear();
        scanf("%d",&n);
        int A[n+5],mn=1,mx=0,flag=false;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&A[i]);
            if(flag)
            {
                continue;
            }
            if(A[i]<mn)
                flag=true;
            mx=max(A[i],mx);
            if(mp[A[i]])
            {
                if(mp[mn])
                {
                    while(mp[++mn]);
                }
                if(mn>A[i])flag=true;
                 A[i]=mn;
            }
               mp[A[i]]=1;
        }
        if(flag)
            printf("-1\n");
        else
            for(int i=1; i<=n; i++)
                printf("%d ",A[i]);
        //printf("\n")

    }
}
//2
//8
//2 2 3 4 5 6 6 8