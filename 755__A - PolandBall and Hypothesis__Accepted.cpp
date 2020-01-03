#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,flag=0;
    cin>>a;
    switch(a)
    {
        case 3:cout<<"1";return 0;
        case 1:cout<<"3";return 0;

    }
    for(i=1; ;i++)
    {
        if(flag==0)
        {
            int n=(a*i)+1;
            for(int j=2;j<n/2;j++)
            {
                if(n%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
             {cout<<i;break;}

        }
    }
    return 0;
}