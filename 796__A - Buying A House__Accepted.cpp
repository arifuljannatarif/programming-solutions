#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,a[200],i,c1=0,c2=0,flag=0,flag2=0;
    scanf("%d%d%d",&n,&m,&k);

    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(i=m; i<n; i++)
    {
        if(m==n)break;
        c1+=10;
        ///printf("c1=%d\n",c1);
        if(a[i]<=k && a[i]!=0)
        {
            flag2=1;

            break;
        }
    }
        if(flag2==0)c1=0;
    for(i=m-1; i>=0; i--)
    {
        if(m==1)break;
        if(a[i]<=k && a[i]!=0)
        {
            flag=1;
            break;
        }
        c2+=10;
        /// printf("c2=%d\n",c2);
    }
    if(flag==0)c2=0;
    if(c2==0)
    {
        printf("%d\n",c1);
        return 0;
    }
    else if(c1==0)
    {
        printf("%d\n",c2);
        return 0;
    }
    else if(c1<c2)
        printf("%d\n",c1);
    else
        printf("%d\n",c2);
    return 0;
}