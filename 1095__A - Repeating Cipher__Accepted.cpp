#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,f=1;;
   string s,ans="";
   scanf("%d",&n);
   cin>>s;
   for(int i=0;i<n;i+=f){
        ans+=s[i];f++;
   }
   cout<<ans<<endl;

}