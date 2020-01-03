/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-08-00.03                 #
              #  Code submitted  :  2019-11-08-00.24                 #
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
ll t,n,c=0,i,j,type,l,r;
int main()
{
    scanf("%lld",&n);
    ll A[n+5],U[n+5];
    for(i=0; i<n; i++)
        scanf("%lld",&A[i]),U[i]=A[i];
    sort(U,U+n);
    for(int i=1; i<n; i++)
        A[i]+=A[i-1],U[i]+=U[i-1];
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld %lld %lld",&type,&l,&r);
        switch(type)
        {
        case 2:
            printf("%lld\n",l==1?U[r-1] : U[r-1]-U[l-2]);
            break;
        case 1:
            printf("%lld\n",l==1?A[r-1] : A[r-1]-A[l-2]);
            break;
        }
    }
}