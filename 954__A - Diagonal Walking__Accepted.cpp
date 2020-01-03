#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,c=0;string s;
    cin>>l>>s;
    if(l==1){
        printf("%d\n",l);
       return 0;
    }
    for(int i=0;i<l-1;i++)
    {
        if((s[i]=='U' && s[i+1]=='R') || (s[i]=='R' && s[i+1]=='U'))
            c++,i++;
    }
    cout<<l-c<<endl;
}