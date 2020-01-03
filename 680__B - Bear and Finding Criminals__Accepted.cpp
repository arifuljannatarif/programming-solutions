/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-07-00.59                 #
              #  Code submitted  :  2019-11-07-01.22                 #
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
int t,n,c=0,i,j,a;
int main()
{
    scanf("%d %d",&n,&a);
    int A[n+5],sum=0;
    for(i=1; i<=n; i++)scanf("%d",&A[i]),sum+=A[i];
    for(i=a+1,j=a-1;i<=n && j>0;i++,j--)if(A[i]+A[j]==1)sum--;
    printf("%d\n",sum);

}