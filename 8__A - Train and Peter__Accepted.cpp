#include<bits/stdc++.h>
using namespace std;
int main()
{

        int i,j,p;
    bool gate1=true,gate2=false,t=false,t1=false;
    string s,s1,s2,ss;
    cin>>s>>s1>>s2;
    ss=s1+s2;
    if(ss.size()>s.size())
    {
        printf("fantasy\n");
        return 0;
    }
    for(i=0; i<s.size(); i++)
    {
        if(gate1)
        {
            string str=s.substr(i,s1.size());
            if(str==s1)
            {
                gate1=false;
                gate2=true;
            }
        }
        else if(gate2)
        {
            string str=s.substr(i,s2.size());
            if(str==s2)
            {
                t=true;
                break;
            }
        }
    }
    gate1=true,gate2=false;
    reverse(s.begin(),s.end());
    for(i=0; i<s.size(); i++)
    {
        if(gate1)
        {
            string str=s.substr(i,s1.size());
            if(str==s1)
            {
                gate1=false;
                gate2=true;
            }
        }
        else if(gate2)
        {
            string str=s.substr(i,s2.size());
            if(str==s2)
            {
                t1=true;
                break;
            }
        }
    }
    if(t && t1)
        printf("both\n");
    else if( t && !t1)
        printf("forward\n");
    else if(!t &&t1)
        printf("backward\n");
    else
        printf("fantasy\n");



}