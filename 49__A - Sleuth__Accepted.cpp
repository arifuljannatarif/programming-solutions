#include<bits/stdc++.h>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char x[110],v,a[]={'a','A','E','e','i','I','O','o','u','U','y','Y'};
    int g,i;

    gets(x);

    g=strlen(x);
    for(i=g-1; i>=0 ; i--)
    {
       ///printf("%c\n",x[i]);
        if(x[i]!='?'&& x[i]!=' ')
            {v=x[i];break;}


    }

   for(i=0;i<12;i++)
   {
       if(a[i]==v)
       {printf("YES\n");return 0;}
   }

        cout<<"NO"<<endl;
        return 0;

}