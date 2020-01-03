#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<int,int>
#define pb push_back
ll t,n,m,c,i,k,j;
int par[40];
int findp(int p) {
    if(par[p]==p)
        return p;
	return par[p]=findp(par[p]);
}
void makep(int a,int b){
	int x=findp(a);
	int y=findp(b);
	if(x!=y && x>=y)par[x]=y;
	else par[y]=x;
}
int main() {
    ios_base::sync_with_stdio(false);
    string s;
    for(i=0; i<=30; i++)
        par[i]=i;
    cin>>n;
    bool flag[40];
    memset(flag,false,sizeof flag);
   while(n--){
        cin>>s;
        for(j=0; j<s.size(); j++) {
            char ch=s[j]-'a';
				flag[ch]=true;
            for(k=0; k<s.size(); k++) {
                char ch2=s[k]-'a';
                 makep(ch,ch2);
            }
        }
    }
    set<int>st;
    for(i=0; i<26; i++)
       {
      //cout<<(char)(i+'a')<<"  "<<par[i]<<endl;

        if(flag[i])
            st.insert(findp(i));
       }
    cout<<st.size()<<endl;


}