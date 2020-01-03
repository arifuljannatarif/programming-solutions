/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-13-14.33                 #
              #  Code submitted  :  2019-11-13-15.16                 #
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
    string s,t;
    cin>>s>>t;
    int cnt[32];
    memset(cnt,0,sizeof cnt);
    for(i=0;i<s.size();i++)
            cnt[s[i]-'a']++;
    for(i=0;i<t.size();i++)
            if(cnt[t[i]-'a']>0)cnt[t[i]-'a']--;
            else
               return !printf("need tree\n");
    if(s.size()==t.size()){
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)return !printf("array\n");
        return !printf("need tree\n");

    }
    for(i=0;i<s.size();i++)
        if(s[i]==t[c])c++;
    if(c==t.size())
        printf("automaton\n");
    else
        printf("both\n");
}