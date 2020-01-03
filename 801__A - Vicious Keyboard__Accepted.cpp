///BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sum=0;
    for(int i=0; i<(s.size()-1); i++)
    {
        if(s[i]=='V')
        {
            if(s[i+1]=='K')
            {
                s[i]='x';
                s[i+1]='x';
                sum++;
                i++;
            }
        }
        ///cout<<sum<<endl;

    }
    for(int i=0; i<(s.size()); i++)
    {
        if(s[i]=='V' && i<(s.size()-1))
        {
            if(s[i+1]!='x')
            {
                ///cout<<"ARIF\n";
                sum++;
                break;              ///KKVVKVVKVVKKVVKKVKVVKKV

            }
        }
        else if(s[i]=='K' && i>0)
        {
            if(s[i-1]!='x')
            {
                ///cout<<"ARIF\n";
                sum++;
                break;              ///KKVVKVVKVVKKVVKKVKVVKKV

            }
        }

    }
    cout<<sum;
    return 0;
}