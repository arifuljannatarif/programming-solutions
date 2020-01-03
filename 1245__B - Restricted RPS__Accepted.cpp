#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,r,p,s,w,n,x;
    scanf("%d",&t);
    while(t--){
            w=0;
        string str,ans="";
    scanf("%d %d %d %d",&n,&r,&p,&s);
      n%2==0 ? x=n/2 : x=(n/2)+1;
        cin>>str;
        for(int i=0;i<str.size();i++){
            if(str[i]=='R'&& p>0){w++;ans+='P';p--;}
            else if(str[i]=='R')ans+='$';
            if(str[i]=='P'&& s>0){w++;ans+='S';s--;}
            else if(str[i]=='P') ans+='$';
            if(str[i]=='S'&& r>0){w++;ans+='R';r--;}
            else if(str[i]=='S') ans+='$';
           //printf("-> %s d=%d\n",ans.c_str(),w);
        }
        if(w<x)
            printf("NO\n");
        else{
            printf("YES\n");
            for(int i=0;i<ans.size();i++){
                if(ans[i]=='$'){
                if(r>0) printf("R"),r--;
                else if(s>0) printf("S"),s--;
                else if(p>0) printf("P"),p--;

                }else printf("%c",ans[i]);
            }
            printf("\n");
        }
    }
}