#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int x,n,sum=0,ac=0,ec=0;
	cin>>n;
	while(n--)
	{
		cin>>x;
		if(x%2==0)ec++;
		else if(x%2==1)ac++;
		sum+=x;
		
	}
	 if((sum%2)==0) cout<<ec<<endl;
	 else 
	 cout<<ac<<endl;
}