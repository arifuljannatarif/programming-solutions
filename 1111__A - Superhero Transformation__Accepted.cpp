/*
		@Author : Ariful Jannat Arif
		facebook.com/mjarif97
		Time: 02/06/2019 09:28:04 PM 
		Department of CSE
		Leading University,Sylhet
*/
#include<bits/stdc++.h>
using namespace std;
bool vow(char c){
	if(c=='a' || c=='e'|| c=='i' ||c=='o'||c=='u')
	return true;
	return false;
}
int main ()
{
	string s,s2;
	cin>>s>>s2;
	if(s.size()!=s2.size())return !printf("No\n");
	for ( int i = 0; i < s.size(); i += 1)
	{
		if((vow(s[i])&& vow(s2[i])) || (!vow(s[i])&& !vow(s2[i])))
		{continue;}
		return !printf("No\n");
		
	}
	printf("Yes\n");
	
	return 0;
}