/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-10-01.02                 #
              #  Code submitted  :  2019-11-10-01.25                 #
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
int t,n,k,c=0,i,j;
int A[mx];
int main()
{
    scanf("%d %d",&n,&k);
    for( i=0; i<n; i++)
        scanf("%d",&A[i]);
        ll sum=0,ans=100000000;
    for(i=0;i<k;i++)sum+=A[i];
    if(ans>sum)c=0,ans=sum;
    for(;i<n;i++){
        sum=sum-A[i-k]+A[i];
        if(sum<ans)ans=sum,c=i-k+1;
    }
    printf("%d\n",c+1);

}