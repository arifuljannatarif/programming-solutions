#include<stdio.h>
#include<math.h>
#include<string.h>
int main( )
{
	int a, g, i, j, c = 0, count = 0, k = 2, z = 0;
	scanf("%d", &a);
	for (i = 6; i <= a; i++)
	{
		k = 2;
		while (k <= i)
		{
			g=sqrt(k);

			for (j = 1; j <= g; j++)
			{
				if (k % j == 0)
				{
					z++;
				}
			}
			if (z == 1)
			{
				if (i % k == 0)
				{
					c++;

				}
			}
		

			z = 0;
			k++;
				if (c > 2)
			break;
		}
		if (c == 2)
			count++;
		 c = 0;

	}
	printf("%d", count);
	return 0;

}