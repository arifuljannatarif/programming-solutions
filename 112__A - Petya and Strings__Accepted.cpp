#include<stdio.h>
#include<string.h>
int main()
{
    int i,r,g;
    char x[105],y[105];
    scanf("%s %s",&x,&y);
    g=strlen(x);
    for(i=0;i<g;i++)
    {
        if(x[i]<97)
            x[i]=x[i]+32;
        if(y[i]<97)
            y[i]=y[i]+32;
    }
    r=strcmp(x,y);
    printf("%d\n",r);
    return 0;
}