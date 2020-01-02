#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int i,c1=0,c2=0,g;
    char x[120];
    scanf("%s",&x);
    g=strlen(x);
    for(i=0;i<g;i++)
    {
        if(x[i]>='A'&&x[i]<='Z')
        {
            c1++;
            ///cout<<endl<<c1<<" ";
        }
        else if(x[i]>='a'&&x[i]<='z')
        {
            c2++;
        }
    }
    ///cout<<c1<<endl<<c2;
    if(c2>=c1)
    {
        for(i=0;i<g;i++)
        {
            if(x[i]>='A'&&x[i]<='Z')
            {
                printf("%c",x[i]+32);
            }
            else
                printf("%c",x[i]);

        }
    }
    else
    {

        for(i=0;i<g;i++)
        {
            if(x[i]>='a'&&x[i]<='z')
            {
                printf("%c",x[i]-32);
            }
            else
                printf("%c",x[i]);

        }
    }
}