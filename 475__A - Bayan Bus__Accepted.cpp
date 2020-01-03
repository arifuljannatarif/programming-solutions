#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cassert>
using namespace std;
#define open freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ev %2==0
#define sci1(n) scanf("%d",&n)
#define tcase(t)  ll t;sci1(t);while(t--)
#define ll long long int
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define abs(x) ((x)<0?-(x):(x))
#define sc scanf
#define el printf("\n")
#define f0(i,n) for(ll i=0;i<(n);i++)
#define rf0(i,n) for(ll i=n-1;i>=0;i--)
#define rf1(i,n) for(ll i=n;i>0;i--)
#define f1(i,n) for(ll i=1;i<=(n);i++)
#define f(i,a,b) for(ll i=(a);i<(b);i++)
using namespace std;

int main()
{
	int k;
	cin >> k;
	string s[6] = {
		"+------------------------+",
		"|#.#.#.#.#.#.#.#.#.#.#.|D|)",
		"|#.#.#.#.#.#.#.#.#.#.#.|.|",
		"|#.......................|",
		"|#.#.#.#.#.#.#.#.#.#.#.|.|)",
		"+------------------------+"
	};
	 for (int i= 0; i< 27; i++)
		for (int j = 0; j< 6; j++)
			{if (s[j][i] == '#' && k)
				s[j][i] = 'O', k--;
			if(k==0)break;}
	for (int i = 0; i < 6; i++)
		cout << s[i] << '\n';
	return 0;
}