#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<int,int>
#define pb push_back
ll t,n,m,a,b,c,i,j;
int main() {
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld",&n);
        string arr[n+5];
        map<string,int>mp;
        map<char,int>mp2;
        for(i=0; i<n; i++) {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        vector<string>ans;
        int c=0;
        for(i=0; i<n; i++) {
				if(mp[arr[i]]>1){
                    for(char j='0';j<='9';j++){
						 string s1=arr[i];
						 s1[3]=j;
						 if(!mp[s1]){
							ans.pb(s1);
							mp[arr[i]]--;
							mp[s1]++;
							c++;
							break;
						 }

                    }
				}else ans.pb(arr[i]);
        }
        cout<<c<<endl;
        for(i=0;i<ans.size();i++)
			cout<<ans[i]<<endl;
    }
}