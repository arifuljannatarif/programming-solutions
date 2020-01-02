#include<iostream>
using namespace std;
int main()
{
	int i,a,sum=0,sum2=0,sum3=0,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		sum+=a;
		cin>>a;
		sum2+=a;
		cin>>a;
		sum3+=a;
		
	}
	if(sum==0&&sum2==0&&sum3==0)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	
	return 0;
	
	
}