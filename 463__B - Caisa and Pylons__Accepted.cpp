/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-07-02.09                 #
              #  Code submitted  :  2019-11-07-02.17                 #
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
int t,n,c=0,i,j;
int main(){
    scanf("%d",&n);
    int A[n+5],mx=0;
    for(i=0;i<n;i++)
        scanf("%d",&A[i]),mx=max(A[i],mx);

      printf("%d\n",mx);

}