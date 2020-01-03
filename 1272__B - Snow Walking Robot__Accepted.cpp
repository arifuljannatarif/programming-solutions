#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<int,int>
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
    //freopen("out.txt","w",stdout);
    ll t,i,a,b,c;
    cin>>t;
    while(t--){
            string s;
        cin>>s;
    ll l=0,r=0,u=0,d=0;
    for(auto it : s){switch(it){ case 'U':u++;break;case 'D':d++;break;case 'L':l++;break;case 'R':r++;break; } }

    u=min(u,d);
    l=min(l,r);
    if(!u){
        printf("%s\n",l?"2\nLR":"0");
    }else if(!l){
        printf("%s\n",u?"2\nUD":"0");

    }else{
      cout<<(u+l)*2<<endl;
      for(i=0;i<l/2;i++)printf("%c",'L');
      for(i=0;i<u;i++)printf("%c",'D');
      for(i=0;i<l;i++)printf("%c",'R');
      for(i=0;i<u;i++)printf("%c",'U');
      for(i=l/2;i<l;i++)printf("%c",'L');
          puts("");
        }

}
}