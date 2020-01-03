#include<stdio.h>
int main()
{
    int a,b,i,j,two=0,three=0,five=0;
    scanf("%d%d",&a,&b);

    for(i=a;i<=b;i++)
    {

     if(i%2==0)
        {
            two++;
            continue;
        }
        else if(i%3==0)
        {
            three++;
            continue;
        }

    }
    if(a==b)
    {
        printf("%d\n",a);
    }
    else if(two>three )
    {
        printf("2\n");
    }
    else if(three>two)
    {
        printf("3\n");
    }


    else if(two==three )
    {
        printf("3\n");
    }

    return 0;
}