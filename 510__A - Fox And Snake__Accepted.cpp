#include<bits/stdc++.h>
using namespace std;
int main()
{

        int t,t1,flag=0,x=0;
    cin>>t>>t1;
    for(int i=0;i<t;i++)
    {
        x=0;
        for(int j=0;j<t1;j++)
        {
            if(i%2==1)
            {
                if(flag==0 && j==t1-1 && x==0)
                {
                    flag=1;
                    cout<<'#';

                }
                else if(flag==1 && j==0)
                {
                    flag=0;
                    x=1;
                    cout<<'#';
                }
                else
                    cout<<'.';
            }
            else
                cout<<'#';
        }
        cout<<endl;
    }

}