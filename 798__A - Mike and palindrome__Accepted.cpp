#include<stdio.h>
int main()
{
	int c, i, j, len, k = 0;
	char a[100];
	gets(a);
	len = strlen(a);
	c = (len - 1) / 2;

	for (i = 0, j = len - 1; i <= c; i++, j--)
	{
		if (a[i] != a[j])
		{
			k++;

		}
	}
	if(len%2==1)
    {

	if (k == 0 || k == 1)
		printf("YES\n");
	else
		printf("NO\n");
    }
    else if(len%2==0)
    {
        if (k == 1)
		printf("YES\n");
	else
		printf("NO\n");


    }


	return 0;
}