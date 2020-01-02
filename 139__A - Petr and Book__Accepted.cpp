#include<iostream>
using namespace std;
int main()
{
	long long int i,p, a[7], sum = 0, d, f, g = 0, frac, frac2;
	cin >> p;
	for (i = 0; i < 7; i++)
	{
		cin >> a[i];
		sum += a[i];
		if(a[i])
		g=i+1;
	}
	if (sum == 1)
	{
		for ( i = 0; i < 7; i++)
		{
			if (a[i] != 0)
			{
				cout << i + 1 << endl;
				return 0;
			}
		}
	}
	frac = p / sum;
	if (sum * frac < p)
		frac2 = p - (sum * frac);
	else{
		cout<<g<<endl;
		return 0;
	}
	for ( i = 0; i < 7; i++)
	{
		frac2 -= a[i];
		if (a[i] != 0 && frac2 <= 0)
		{
			cout << i + 1 << endl;
			return 0;
		}
	}

}