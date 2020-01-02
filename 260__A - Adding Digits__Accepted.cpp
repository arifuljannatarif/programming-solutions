#include<bits/stdc++.h>
using namespace std;int main(){int a,b,n;string s="";cin>>a>>b>>n;stringstream ss;ss << a;string str = ss.str();s=str;while(n--){int f=1;for(int i=0; i<10; i++){if((a*10+i)%b==0){s+=i+'0';a=(a*10)+i;a=a%b;f=0;break;;}}if(f)return !printf("-1\n");}cout<<s<<endl;}#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    string s="";
    cin>>a>>b>>n;
    stringstream ss;
    ss << a;
    string str = ss.str();
    s=str;
    while(n--)
    {

        int f=1;
        for(int i=0; i<10; i++)
        {
            if((a*10+i)%b==0)
            {
                s+=i+'0';
                a=(a*10)+i;
                a=a%b;
                f=0;
                break;;
            }
        }
        if(f)
            return !printf("-1\n");


    }
    cout<<s<<endl;

}