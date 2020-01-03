#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int n, ans = 1, j = 0;
	scanf("%d", &n);
	int A[n + 5];
	for (int i = 0; i < n; i++)
		scanf("%d", &A[i]);
	sort(A, A + n);
	for (int i = 0; i < n; i++)
	{
		while( A[i] + 5 >= A[j] && j < n) j++;
	//	printf("j=%d\n",j);
		ans = max(ans, j - i);
	}
	printf("%d\n", ans);
}