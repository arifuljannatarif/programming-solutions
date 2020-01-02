#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a[1000000+100], t, k, i, count = 0;
	scanf("%d %d",&t,&k);
	for (i = 1; i <= t; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 1; i <=t; i++)
	{
		if (a[i]>=a[k]  &&  a[i]>0)
			count++;
	}
	 printf("%d", count);
	return 0;
}