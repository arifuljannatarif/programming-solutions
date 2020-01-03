/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-20-10.00                 #
              #  Code submitted  :  2019-11-20-10.03                 #
              #                                                      #
              ########################################################
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll a,b,t;
    cin>>t;
    while(t--){
    cin>>a>>b;
    a=abs(a-b);
    b=a/5;a=a%5;
    b+=a/2;a%=2;
    b+=a;
    cout<<b<<endl;}
}