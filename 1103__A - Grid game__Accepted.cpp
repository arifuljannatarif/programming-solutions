#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int lastx=0,lasty=0;
    for(int i=0; i<s.size(); i++)
        if(s[i]=='0')printf("1 %d\n",lastx+1),lastx=++lastx%4;
        else printf("4 %d\n",lasty+1),lasty=(lasty+2)%4;

}