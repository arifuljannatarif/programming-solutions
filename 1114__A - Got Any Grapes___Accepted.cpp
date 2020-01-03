#include<stdio.h>
int main(){
	int a,b,c,x,y,z;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&x,&y,&z);
	if(a<=x)x-=a;
	else return !printf("NO\n");
	
	if(x+y>=b)y=(x+y)-b;
	else return !printf("NO\n");
	if(y+z>=c)printf("YES\n");
	else return !printf("NO\n");
	
}