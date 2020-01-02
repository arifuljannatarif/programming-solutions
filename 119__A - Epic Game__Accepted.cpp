#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,x=0;
    string s;
    scanf("%d %d %d",&a,&b,&n);
    for(int j=1; n>=x; j++)
    {
        //cout<<n<<" ";
        if(j%2==1)
        {
            int p=min(a,n);
            for(int i=p; i>0; i--)
            {
                if(a%i==0 && n%i==0)
                {
                    x=i;
                    break;
                }

            }
            n-=x;
            s="as";
        }
        else if(j%2==0)
        {
            int p=min(b,n);
            for(int i=p; i>0; i--)
            {
                if(b%i==0 && n%i==0)
                {
                    x=i;
                    break;
                }

            }
            n-=x;
            s="s";

        }

    }
    if(s=="as")
        cout<<0<<endl;
    else
        cout<<1<<endl;
}