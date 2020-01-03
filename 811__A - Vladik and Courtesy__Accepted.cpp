#include<stdio.h>
int main()

{
    int v,b,i,j;
    scanf("%d%d",&v,&b);
    for(i=1,j=1; ; i+=2,j++)
    {
        v=v-i;
        b=b-i+1;
        if(b<(i+1))
        {
            printf("Valera\n");
            break;
        }
        if((v<(i+2)))
        {
            printf("Vladik\n");
            break;
        }

    }
    return 0;

}