#include<stdio.h>
#include<string.h>
int main()
{
    long long int a,b,c,x=1,y=1;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(c==0)return 0;
    x=a/c;
    if(c==1)
        printf("%lld\n",a*b);
    if((x*c)!= a)
        x=x+1;

    if(b>c)
    {
        /// printf("%hjhhd\n",x+y);

        y=b/c;
        if((y*c)!=b)
            y=y+1;
    }
    if(c!=1)
        printf("%lld\n",x*y);
    return 0;
}#include<stdio.h>
#include<string.h>
int main()
{
    long long int a,b,c,x=1,y=1;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(c==0)return 0;
    x=a/c;
    if(c==1)
        printf("%lld\n",a*b);
    if((x*c)!= a)
        x=x+1;

    if(b>c)
    {
        /// printf("%hjhhd\n",x+y);

        y=b/c;
        if((y*c)!=b)
            y=y+1;
    }
    if(c!=1)
        printf("%lld\n",x*y);
    return 0;
}