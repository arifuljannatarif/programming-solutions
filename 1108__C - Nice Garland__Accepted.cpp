#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,cnt=0,ind=0,j;
   string s,ans="";
   scanf("%d",&n);
   cin>>s;
   int mx=INT_MAX;
   string comb[]={"RGB","RBG","GRB","GBR","BRG","BGR"};
   for(int i=0;i<6;i++){
     for(cnt=0,j=0;j<n;j++)if(s[j]!=comb[i][j%3])cnt++;
     if(cnt<mx)mx=cnt,ind=i;
   }
   for(int i=0;i<n;i++)ans+=comb[ind][i%3];
   cout<<mx<<endl;
   cout<<ans<<endl;
   }