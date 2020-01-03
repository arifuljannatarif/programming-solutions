#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char a[1000001],b[1000001];
    int i,j,len1,len2;
    scanf("%s %s",a,b);
    i=j=0;
    while(a[i]=='0')i++;
    while(b[j]=='0')j++;
    len1=strlen(a);len2=strlen(b);
    if(len1-i>len2-j)
        cout<<">"<<endl;
    else if(len1-i<len2-j)
        cout<<"<"<<endl;
    else
    {
        while(i<len1)
        {
            if(a[i]>b[j])
            {
                cout<<">"<<endl;
                break;
            }
            else if(a[i]<b[j])
            {
                cout<<"<"<<endl;
                break;
            }
            i++;
            j++;
        }
        if(i==len1)
            cout<<"="<<endl;
    }
    return 0;
}