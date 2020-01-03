#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a;
	cin>>a;
	if(a%2==0)
	{
	printf("%lld",a/2);
	}
	else
	{
	printf("%lld",-((a+1)/2));

	}
	return 0;
}