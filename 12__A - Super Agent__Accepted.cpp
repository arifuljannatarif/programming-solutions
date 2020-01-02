#include<stdio.h>
#include<string.h>
int main()
{
    char a[7],b[7],c[7];
    gets(a);
    gets(b);
    gets(c);
    //printf("%s\n",a);
   // printf("%s\n",b);
    //printf("%s\n",c);
    if(a[0]==c[2] && a[1]==c[1] && a[2]==c[0] && b[0]==b[2])
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}