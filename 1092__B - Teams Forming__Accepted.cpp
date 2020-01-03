/*
		@Author : Ariful Jannat Arif
		facebook.com/mjarif97
		Time: 16/02/2019 09:47:16 
		Department of CSE
		Leading University,Sylhet
*/
#include<bits/stdc++.h>
#define ll long long int
#define pair<int,int> pii
using namespace std;
int main ()
{
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	int n;
	scanf("%d",&n);
	vector<int>v(n);
	for(auto& a:v)
		cin>>a;
		sort(v.begin(),v.end(),greater<int>());
		int sum=0;
		for(int i=0;i<n-1;i+=2){
			sum+=v[i]-v[i+1];
		}
		printf("%d\n",sum);
	
	
	return 0;
}