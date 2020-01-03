#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,x,ans;
    cin>>a>>b;
    x=a/b;
    if(x*b==a)
    {
        cout<<a+b;
    }
    else
    {
        cout<<b*(x+1);
    }

return 0;

}