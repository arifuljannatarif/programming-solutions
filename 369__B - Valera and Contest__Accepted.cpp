/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-13-13.50                 #
              #  Code submitted  :  2019-11-13-14.12                 #
              #                                                      #
              ########################################################
*/
using namespace std;
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define pii pair<int,int>
#define vi vector< int >
#define vl vector< ll >
const int mx=1e6;
int t,n,k,l,r,sa,sk,c=0,i,j;
int main()
{
    scanf("%d %d %d %d %d %d",&n,&k,&l,&r,&sa,&sk);
    int ans[n+5];
    memset(ans,l,sizeof ans);
    int left=sk/k;
    int extra=0;
    extra=sk%k;
    for(i=0; i<k; i++)
        if(extra)
            printf(" %d",left+1),extra--;
        else
            printf(" %d",left);
    if(n>k)
    {
        int right=sa-sk;
        int k1=n-k;
        extra=right%k1;
        right=right/k1;
        for(i=k; i<n; i++)
            if(extra)
                printf(" %d",right+1),extra--;
            else
                printf(" %d",right);
    }
}