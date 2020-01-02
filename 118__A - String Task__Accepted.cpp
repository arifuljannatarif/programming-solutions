#include<stdio.h>
#include<string.h>
int main()
{
    int x,i,g;
    char z[100];
    gets(z);
    g=strlen(z);
    for(i=0; i<g; i++)
    {
        if(z[i] == 'a'|| z[i] == 'o' || z[i] == 'i' || z[i]=='e'||z[i]=='y'||z[i]=='A'||z[i]=='E'||z[i]=='I'||z[i]=='u'||z[i]=='U'||z[i]=='Y'||z[i]=='O')
        {
           continue;

        }
        else if(isupper(z[i])){
            z[i] = z[i] + 32;
            printf(".");
            printf("%c",z[i]);
        }
        else{
            printf(".");
            printf("%c", z[i]);
        }
    }
    return 0;
}