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
			ll sz=sqrt(n);
			set<ll>st;
			st.insert(0);
			for(i=1; i<=sz; i++)
			   st.insert(i),st.insert(n/i);
  cout<<st.size()<<endl;
			for(auto it : st)
				cout<<it<<" ";
			cout<<endl;

		}
	}