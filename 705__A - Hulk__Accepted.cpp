#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,i=1;
    cin>>x;
    while(i<=x)
    {
        if(i<=x)
        {
            cout<<"I hate";
            if(i==x)
            {
                cout<<" it ";
            }
            else
            {
                cout<<" that ";
            }
            i++;
        }
        if(i<=x)
        {
            cout<<"I love";
            if(i==x)
            {
                cout<<" it ";
            }
            else
            {
                cout<<" that ";
            }
            i++;
        }

        }
        cout<<endl;

    return 0;
}