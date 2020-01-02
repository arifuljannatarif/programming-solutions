/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-07-03.39                 #
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
    string color="GBIVROY";
    scanf("%d",&n);
    for(i=0;i<n;i++)
        if(i<3)
            printf("%c",color[i%7+4]);
    else
            printf("%c",color[i%4]);
    printf("\n");
}