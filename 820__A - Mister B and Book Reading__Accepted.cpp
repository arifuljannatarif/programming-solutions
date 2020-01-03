#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  c, v0, v1,a,l,i,j,sum=0,x;
    scanf("%d%d%d%d%d",&c,&v0,&v1,&a,&l);
    for(i=0; ;i++)
    {
        x=(v0+(i*a));
        if(x<=v1)
            sum+=x;
        else
            sum+=v1;
        if(i>0)
            sum=sum-l;
           // printf("%d\n",sum);

        if(sum>=c)
        {
            printf("%d\n",i+1);
            return 0;
        }

    }
    return 0;
}