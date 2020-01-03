#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;

    scanf("%d %d %d",&n,&a,&b);
    int c=0,x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x<=a)
            c++;
    }
    if(b<a)
        return !printf("%d\n",n);
    if(c%2==0)
        printf("%d\n",c/2);
    else
        printf("%d\n",c/2 +1);
}