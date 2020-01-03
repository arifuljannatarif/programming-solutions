/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-07-21.34                 #
              #  Code submitted  :  2019-11-07-22.17                 #
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
string s,s1="";
int main(){
    scanf("%d",&n);
   cin>>s;
    for(i=n-2;i>=0;i-=2)s1+=s[i];
    for( n%2==0?i=1:i=0;i<n;i+=2)s1+=s[i];
    cout<<s1<<endl;

}