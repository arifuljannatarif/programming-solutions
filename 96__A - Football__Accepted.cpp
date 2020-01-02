#include<stdio.h>
#include<string.h>
int main()
{
    int i,g,j=0,c=0;
    char a[100];
    scanf("%s",&a);
     //g=strleln(a);
    for(i=0; a[i]!='\0'; i++)
    {
        j=i+1;


        if(a[j]==a[i]) j++;
        else continue;
        if(a[j]==a[i]) j++;
        else continue;
        if(a[j]==a[i]) j++;
        else continue;
        if(a[j]==a[i]) j++;
        else continue;
        if(a[j]==a[i]) j++;
        else continue;
        if(a[j]==a[i]) j++;
        else continue;
       // if(a[j]==a[i]) j++;
       // else continue;
        c=1;
        printf("YES\n");
        break;

    }
    if(c==0)
        printf("NO\n");
        return 0;
}