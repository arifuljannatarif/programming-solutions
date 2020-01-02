#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,n,a,c=0,x=0;
    cin>>n;
    while(i<=n)
    {
        cin>>a;
        if(a==-1&& x==0)
        {
            c++;
        }
        else if(a==-1 && x>0)
        {
            x--;
        }
        if(a!=-1)
        {
            x+=a;
        }
        ///printf("x=%d\na=%d\n",x,a);
        i++;
    }
    cout<<c;



    return 0;
}