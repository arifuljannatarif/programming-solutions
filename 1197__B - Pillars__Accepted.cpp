/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-07-23-08.54                 #
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
const int MX=1e6+2;
int n,i,mx,j,a[500001];
int main(){
	scanf("%d",&n);
	for(i=1;i<=n;i++)scanf("%d",a+i);
	for(i=1;i<=n;i++)if(a[i]>mx)mx=a[i],j=i;
	for(i=j-1;i;i--)if(a[i]>=a[i+1])return !printf("NO\n");
	for(i=j+1;i<=n;i++)if(a[i]>=a[i-1])return !printf("NO\n");
	printf("YES\n");
}