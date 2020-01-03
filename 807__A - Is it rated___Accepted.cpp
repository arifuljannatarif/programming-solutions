#include<stdio.h>
int main()
{
	int n, a[1000], b[1000], p, c, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d%d", &a[i], &b[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] == b[i])
		{
			p = 0;
		}
		else
		{
			p = 1;
			break;
		}
	}
	if (p == 1)
	{
		printf("rated");
	}
	else
	{
		for (i = 0; i < n - 1; i++)
		{
			if (a[i] >= a[i + 1])
			{
				c = 1;
			}
			else
			{
				c = 0;
				printf("unrated");
				break;
			}
		}
		if (c == 1)
		{
			printf("maybe");
		}
	}
}