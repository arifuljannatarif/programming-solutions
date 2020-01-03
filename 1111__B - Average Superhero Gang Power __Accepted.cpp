/*
		@Author : Ariful Jannat Arif
		facebook.com/mjarif97
		Time: 06/02/2019 22:17:14  
		Department of CSE
		Leading University,Sylhet
*/
#include<bits/stdc++.h>
#define ll long long 
#define ld double
using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);
	int n, k, m;
	scanf("%d %d %d", &n, &k, &m);
	vector<int> v(n);
	for(int i = 0;  i < n; i++) scanf("%d", &v[i]);
	sort(v.begin(), v.end(), greater<int>());
	double mx = 0.0;
	double sum = 0.0;
	for(int i = 0; i < n; i++)
	{
		sum += v[i];
		if(n - i - 1 <= m)
		{
			double t = m - (n - i - 1);
			double t2 = (sum + min(double(i + 1) * double(k), t)) / double(i + 1);
			mx = max(mx, t2);
		}
	}
	printf("%.20lf\n", mx);
	return 0;
}