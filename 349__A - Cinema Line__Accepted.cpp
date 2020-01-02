#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,n,x25=0,x50=0,flag=0;
    scanf("%d",&a);
    int x[a];
    for(i=0; i<a; i++)
    {

        cin>>x[i];
        if(flag==1)continue;;
        if(x[i]==25)
        {
            x25++;
        }
        else if(x[i]==50)
        {
            x50++;
        }
        if(x[i]==100&& x25<1 || x[i]==100 && x50<1 && x25<3)
        {
            flag=1;

        }
        else if(x[i]==50 && x25==0)
        {
            flag=1;
        }
        else
        {
            if(x[i]==100)
            {
                if(x50>0)
                {
                    x50--;
                    x25--;
                }
                else if(x50==0)
                {
                    x25-=3;
                }
            }
            else if(x[i]==50)
            {
                x25--;
            }
        }



    }
    if(flag==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
        return 0;
}