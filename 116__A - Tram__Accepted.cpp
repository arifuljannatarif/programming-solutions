#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{  int a ,i,b, c,sum1=0,j,max=0;
scanf("%d",&a);
for(i=0 ;i<a;i++ )
{
	scanf("%d%d",&b,&c);
	
	sum1=sum1+(c-b);
	if(sum1>max)
	   max=sum1;
	
}
printf("%d",max);
return 0;
}