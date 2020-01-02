#include<bits/stdc++.h>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x = atoi(s.c_str());
       x=x+1;
            ostringstream str1;
            str1<< x;
            s=str1.str();
    while(1)
    {
        int l=s.size();
    set<char>s1;
    x = atoi(s.c_str());




    for(int i=0; s[i]; i++)
    {
        s1.insert(s[i]);
    }
    int m=s1.size();

    if(m==l)
    {
        cout<<s;
        return 0;
    }
    else{
            x=x+1;
            ostringstream str1;
            str1<< x;
            s=str1.str();


    }
    }

}