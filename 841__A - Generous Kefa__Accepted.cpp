#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,f;
    scanf("%d %d",&n,&f);
    int cnt[125];
    memset(cnt,0,sizeof cnt);
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        cnt[s[i]]++;
        if(cnt[s[i]]>f){
            return !printf("NO\n");
        }
    }
    printf("YES\n");

}