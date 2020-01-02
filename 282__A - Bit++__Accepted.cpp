#include<stdio.h>
#include<string.h>
int main()
{
    int a,c=0,i;
    char x[4];
    scanf("%d",&a);
    for(i=a; i>=0; i--)
    {
        gets(x);
        if(strcmp(x,"++X")==0)
            c++;
        else if( strcmp(x,"X++")==0)
            c++;
        else
            c--;

    }
    printf("%d\n",c+1);
    return 0;
}