#include<iostream>
#include<cstdio>
#include<map>
#include<iterator>
using namespace std;
int main(){
	int n,a,b;
	cin>>n;
	map<int,int>mp;
	int arr[n+10];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i]>>b;
		mp[b]++;	
	}
	int c=0;
	for(int i=0;i<n;i++)
	c+=mp[arr[i]];
	
	printf("%d\n",c);
}