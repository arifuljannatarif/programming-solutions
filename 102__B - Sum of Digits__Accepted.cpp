/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-07-02.32                 #
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
int getsum(string x,int sum=0){
    for(int i=0;i<x.size();i++)sum+=x[i]-'0';
    return sum;
}
int main(){
    string s;
    cin>>s;
    while(1){
        int x=getsum(s);
    if(s.size()<2)break;
    c++;
     s=to_string(x);
    }
    printf("%d\n",c);
}