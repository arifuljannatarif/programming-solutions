#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char x[1000];
	long int a;

	scanf("%s", &x);
	a = atoi(x);
	if (a >= 0)
	{
		printf("%ld", a);
		return 0;
	}
	if (x[strlen(x) - 1] > x[strlen(x) - 2])
	{
		x[strlen(x) - 1] = '\0';
		long int b=atoi(x);
		printf("%ld",b);
		return 0;
	}
	else
	{
		x[strlen(x) - 2] = x[strlen(x) - 1];
		x[strlen(x) - 1]='\0';
		long int c=atoi(x);
		printf("%ld",c);
	}
	return 0;
}