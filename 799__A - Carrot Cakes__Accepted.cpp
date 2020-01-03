#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int n, t, k, d;
	scanf("%d%d%d%d", &n, &t, &k, &d);
	if ((d < (n - 1) / k * t))
	{
		printf("YES\n");


	}
	else
		printf("NO\n");

	return 0;
}