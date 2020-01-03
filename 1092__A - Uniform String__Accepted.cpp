/*
		@Author : Ariful Jannat Arif
		facebook.com/mjarif97
		Time: 16/02/2019 09:25:40 
		Department of CSE
		Leading University,Sylhet
*/
#include <bits/stdc++.h>
using namespace std;
int n,k,i,t;
int main(){
	for(cin>>t;t--;){
	cin>>n>>k;
	for(i=0;i<n;i++)
	cout<<char(i%k+'a');
	cout<<endl;
}
}