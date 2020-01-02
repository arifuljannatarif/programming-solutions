#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j,n,a,c=0,cf=0;
    char x[100];
    scanf("%d%d",&a,&n);
    for(i=1;i<=a;i++)
    { c=0;
        scanf("%s",&x);
        int g=strlen(x);
        for(j=0;j<g;j++)
        {
            if(x[j]=='4' ||x[j]=='7')
            {
                c++;
            }
        }
        if(c<=n)
            cf++;


    }
    cout<<cf<<endl;
}