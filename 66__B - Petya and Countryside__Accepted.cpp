/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-07-00.21                 #
              #  Code submitted  :                   #
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
    int arr[n+5],mx=0;
    for(i=0;i<n;i++)scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        c=1;
        for(j=i-1;j>=0 && arr[j]<=arr[i];j--) if(arr[j]<=arr[j+1])c++; else{break;}
       for(j=i+1;j<n && arr[j]<=arr[i];j++) if(arr[j]<=arr[j-1])c++; else{break;}
        mx=max(mx,c);
    }
    printf("%d\n",mx);


}