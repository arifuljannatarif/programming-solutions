#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a, b, c, i, t, d = 0, e = 0;
	scanf("%d", &t);
	for (i = 1; i <= t; i++)
	{
		
		d = 0;
		scanf("%d %d %d", &a, &b, &c);
		if (a==1)
			d++;
		if (b>=1)
			d++;

		if (c==1)
			d++;
			
		if (d>=2)
			e++;

	}
	printf("%d\n", e);
	return 0;
}