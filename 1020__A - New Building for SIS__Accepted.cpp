#include<iostream>
#include<cstdio>
using namespace std;
#define ll long long int
int main()
{
	ll n, h, a, b, k, ta, tb, fa,__, fb;
	cin >> n >> h >> a >> b >> k;
	while (k--)
	{
		cin >> ta >> fa >> tb >> fb;
		__=abs(ta-tb);
		if(ta!=tb)
		{
			if(fa<a)__+=a-fa+abs(fb-a);
			else if(fa>b)__+=fa-b+abs(fb-b);
			else
			__+=abs(fa-fb);
		}
		else
		__=abs(fa-fb);
		
		cout << __ << endl;
	}
}