#include<stdio.h>
int main()
{
    int c, i, j,d, len, k,p=0;
    char a[12],x[12];
    gets(a);
    c= atoi(a);
    k=strlen(a);
    if(a[0]=='9')
    {
        a[0]='1';
        k=k+1;
        p++;
    }

    for(i=0; i<k; i++)
    {
        if(i==0)
        {
            if(p==1)
            {
                x[i]=a[i];
            }
            else
            {

                x[i]=a[i]+1;
            }
        }
        else
        {
            x[i]='0';
        }
    }
    d= atoi(x);
    printf("%d",d-c);



    return 0;
}