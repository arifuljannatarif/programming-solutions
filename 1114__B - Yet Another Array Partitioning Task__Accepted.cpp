#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#define pii pair<int,int>
#define ll long long int
using namespace std;
int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	vector < pii > v;
	vector < int >ind;
	for (int i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		v.push_back(
					   {
					   x, i + 1});
	}
	sort(v.rbegin(), v.rend());
	ll sum = 0;
	for (int i = 0; i < m * k; i++)
	{
		sum += v[i].first;
		ind.push_back(v[i].second);
	}
	cout<<sum<<endl;
	sort(ind.begin(), ind.end());
	for (int c = 0, i = 0; i < ind.size()-1; i++)
	{
		c++;
		if (c == m )
			c = 0, printf("%d ", ind[i]);
	}
	printf("\n");

}