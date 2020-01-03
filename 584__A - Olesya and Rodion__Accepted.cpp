#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,number,divisor;
    scanf("%d%d",&number,&divisor);
    if(divisor == 10)
    {
        if(number == 1)
        {
            printf("-1");
            return 0;
        }
        printf("1");
        for(i = 1 ; i < number ; i++)
        {
            printf("0");
        }
    }
    else
    {
        for(i = 0 ; i < number ; i++)
        {
            printf("%d",divisor);
        }
    }

    return 0;
}