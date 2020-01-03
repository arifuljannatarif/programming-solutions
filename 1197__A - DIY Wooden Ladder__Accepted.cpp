/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-07-23-08.38                 #
              #                                                      #
              ########################################################
*/
#include<bits/stdc++.h>
using namespace std;
int dir8[]={1,1,1,0,1,-1,0,-1,-1,-1,-1,0,-1,1,0,1};
int dir4[]={0,1,1,0,0,-1,-1,0};
#define ll long long int
#define pii pair<int,int>
#define ff first
#define ss second
#define pb push_back
const int MX=100010;
int T,n,A[MX],x,y;
int main() {
    scanf("%d",&T);
    while(T--) {
         x=y=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++) {
            scanf("%d",A+i);
            if(x<A[i])y=max(y,x);
            else y=max(y,A[i]);
            x=max(x,A[i]);
        }
        printf("%d\n",min(y-1,n-2));
    }
    return 0;
}