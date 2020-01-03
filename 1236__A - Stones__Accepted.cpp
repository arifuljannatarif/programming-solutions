#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, a,b,c;
    scanf("%d",&t);
    while(t--)
        scanf("%d %d %d",&a,&b,&c)
,printf("%d\n",(min(c/2,b)*3)+(min((b-min(c/2,b))/2,a)*3));
}#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int ans=0,x=0,a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        x=min(c/2,b);
        ans+=x*3;
        b-=x;
        x=min(b/2,a);
        ans+=x*3;
        printf("%d\n",ans);
    }
}