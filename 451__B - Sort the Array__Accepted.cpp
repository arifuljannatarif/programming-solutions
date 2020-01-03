/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-10-20.52                 #
              #  Code submitted  :  2019-11-10-21.40                 #
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
int t,n,c1=0,c2=-1,i,j;
int main()
{
    scanf("%d",&n);
    int A[n+5] , B[n+5] ;
    map<int,int>mp;
    for(i=0; i<n; i++){
        scanf("%d",&A[i]);
        B[i]=A[i];
    }
    sort(A,A+n);
    for(int i=0;i<n;i++)if(!mp[A[i]])mp[A[i]]=++c1;
    for(i=0;i<n;i++)A[i]=mp[B[i]];
    c1=-1;
    for(i=0;i<n;i++)if(A[i]!=i+1){
        c1=i;break;
    }

    if(c1==-1)return !printf("yes\n1 1\n");
    for(i=c1; i<n-1; i++)if(!(A[i]>A[i+1])){c2=i;break;}
    if(c2==-1)return !printf("yes\n%d %d\n",c1+1,n);
    for(i++;i<n;i++)
        if(A[i]!=i+1)return !printf("no\n");

    return !printf("yes\n%d %d\n",c1==-1 ? 1,1:c1+1,c2+1);
}