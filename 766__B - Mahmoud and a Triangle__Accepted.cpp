/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-12-19.47                 #
              #  Code submitted  :  2019-11-12-19.50                 #
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
ll t,n,c=0,i,j;
int main(){
    scanf("%lld",&n);
    ll arr[n+5];
    for(i=0;i<n;i++)
        scanf("%lld",&arr[i]);
    sort(arr,arr+n);
    for(i=1;i<n-1;i++)
        if(arr[i-1]+arr[i]>arr[i+1])
        return !printf("Yes\n");
    printf("No\n");

}